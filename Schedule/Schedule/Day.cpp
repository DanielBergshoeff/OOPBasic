#include "stdafx.h"
#include "Day.h"


Day::Day(int pday, int pmonth, int pyear, Class pclass)
	:day(pday),	month(pmonth),	year(pyear) , lclass(pclass)
{ 
	for (size_t i = 0; i < 16; i++)
	{
		slotbools[i] = false;
	}
}

std::string Day::getSlotInformation(int slot) {
	int timeMinutes = 555 + 45 * slot;
	int timeHours = timeMinutes / 60;

	timeMinutes -= timeHours * 60;

	if (slotbools[slot] == true) {
		return slots[slot].lesson.name + " by " + slots[slot].lesson.teacher.name + " at " + std::to_string(timeHours) + ":" + std::to_string(timeMinutes);
	}
	else {
		return "No lesson has been planned at " + std::to_string(timeHours) + ":" + std::to_string(timeMinutes) + "!";
	}
}

bool Day::addLessonToSlot(int slot, Lesson l) {
	if (slotbools[slot] == false) {
		slotbools[slot] = true;
		slots[slot] = l;
		return true;
	}
	else {
		return false;
	}
}


Day::~Day()
{
}

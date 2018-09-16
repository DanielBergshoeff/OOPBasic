#pragma once
#include "TimeSlot.h"
class Day
{
public:
	TimeSlot slots[16];
	bool slotbools[16];
	int day;
	int month;
	int year;

	Class lclass;

	bool addLessonToSlot(int slot, Lesson l);

	std::string getSlotInformation(int slot);

	Day(int pday, int pmonth, int pyear, Class pclass);
	~Day();
};


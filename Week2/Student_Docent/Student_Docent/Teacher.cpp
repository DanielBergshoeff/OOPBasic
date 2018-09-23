#include "stdafx.h"
#include "Teacher.h"


Teacher::Teacher(int agep, string namep, int contractHoursPerWeekp)
	:Person(agep, namep), contractHoursPerWeek(contractHoursPerWeekp)
{
}


Teacher::~Teacher()
{
}

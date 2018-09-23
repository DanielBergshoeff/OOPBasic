#pragma once
#include "Person.h"

class Teacher : public Person
{
public:	
	Teacher(int agep, string namep, int contractHoursPerWeek);
	~Teacher();

private:
	int contractHoursPerWeek;
};


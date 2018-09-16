#pragma once
#include "Lesson.h"

class TimeSlot
{
public:
	Lesson lesson;

	TimeSlot();
	TimeSlot(Lesson plesson);
	~TimeSlot();
};


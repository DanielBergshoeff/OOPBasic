#include "stdafx.h"
#include "Lesson.h"


Lesson::Lesson(std::string pname, Teacher pteacher)
	:name(pname), teacher(pteacher)
{
	id = lessonId;
	lessonId++;
}

int Lesson::lessonId = 0;

Lesson::Lesson() {}

Lesson::~Lesson()
{
}

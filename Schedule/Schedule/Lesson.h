#pragma once
#include "Class.h"
#include "Teacher.h"

class Lesson
{
public:
	static int lessonId;
	int id;
	std::string name;
	Teacher teacher;
	
	Lesson();
	Lesson(std::string pname, Teacher pteacher);
	~Lesson();
};


#pragma once
#include "stdafx.h"
#include "Teacher.h"


Teacher::Teacher(std::string pname)
	:name(pname)
{
	id = teacherId;
	teacherId++;
}

int Teacher::teacherId = 0;

Teacher::Teacher() {}

Teacher::~Teacher()
{
}

#include "stdafx.h"
#include "Student.h"


Student::Student(std::string pfirstName, std::string plastName)
	:firstName(pfirstName), lastName(plastName)
{
	id = studentId;
	studentId++;
}

int Student::studentId = 0;

Student::Student() {
	
}


Student::~Student()
{
}

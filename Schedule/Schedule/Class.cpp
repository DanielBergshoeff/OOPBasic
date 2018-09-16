#include "stdafx.h"
#include "Class.h"


Class::Class()
{
	nrOfStudents = 0;
}

Class::Class(std::string pname)
	:name(pname)
{
	nrOfStudents = 0;
}

//Add a student to the array of students by making use of the integer keeping track of the current amount of students
bool Class::addStudent(Student s) {
	if (nrOfStudents < 30) {
		students[nrOfStudents] = s;
		nrOfStudents++;
		return true;
	}
	else {
		return false;
	}
}

bool Class::removeStudent(std::string studentFirstName, std::string studentLastName) {
	for (size_t i = 0; i < nrOfStudents; i++)
	{
		if (students[i].firstName == studentFirstName && students[i].lastName == studentLastName) {
			for (size_t j = i; j < nrOfStudents - 1; j++)
			{
				int arrLength = sizeof(students) / sizeof(*students);
				if (j + 1 < arrLength)
				{
					students[j] = students[j + 1];
				}
				else {
					students[j] = Student();
				}
			}

			nrOfStudents--;
		}
	}
}

Student* Class::getStudents() {
	Student* relevantStudents = new Student[nrOfStudents];
	for (size_t i = 0; i < nrOfStudents; i++)
	{
		relevantStudents[i] = students[i];
	}
	return relevantStudents;
}


Class::~Class()
{
}

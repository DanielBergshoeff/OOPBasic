#pragma once
#include "Teacher.h"
#include "Student.h"

class Class
{
public:
	int id;
	std::string name;
	
	bool addStudent(Student s);
	bool removeStudent(std::string studentFirstName, std::string studentLastName);

	Student* getStudents();

	Class();
	Class(std::string pname);
	~Class();

private:
	Student students[30];
	int nrOfStudents;
};


#pragma once
#include <iostream>
#include <string>

class Student
{
public:
	static int studentId;
	int id;
	std::string firstName;
	std::string lastName;

	Student(std::string pfirstName, std::string plastName);
	Student();
	~Student();
};




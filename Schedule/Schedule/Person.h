#pragma once
class Person
{
public:
	static int studentId;
	int id;
	std::string firstName;
	std::string lastName;

	Person();
	Person(std::string pfirstName, std::string plastName);
	~Person();
};


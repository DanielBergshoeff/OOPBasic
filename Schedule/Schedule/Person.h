#pragma once
class Person
{
public:
	int id;
	std::string firstName;
	std::string lastName;

	Person();
	Person(std::string pfirstName, std::string plastName);
	~Person();

private:
	static int personId;
};


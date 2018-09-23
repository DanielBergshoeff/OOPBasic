#pragma once
class Person
{
public:
	int getAge();
	string getName();

	Person(int agep, string namep);
	~Person();

private:
	int age;
	string name;
};


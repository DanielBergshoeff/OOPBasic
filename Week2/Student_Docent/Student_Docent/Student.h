#pragma once
#include "Person.h"

class Student : public Person
{
public:
	Student(int agep, string namep, int ecp);
	~Student();
private:
	int ec;
};


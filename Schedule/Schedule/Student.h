#pragma once
#include <iostream>
#include <string>
#include "Person.h"

class Student : public Person
{
public:
	using Person::Person;
	~Student();
};




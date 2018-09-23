#include "stdafx.h"
#include "Person.h"


Person::Person(int agep, string namep)
	:age(agep), name(namep)
{

}

int Person::getAge() {
	return age;
}

string Person::getName() {
	return name;
}


Person::~Person()
{
}

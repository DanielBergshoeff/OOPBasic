#include "stdafx.h"
#include "Person.h"


Person::Person()
{
}

Person::Person(std::string pfirstName, std::string plastName)
	:firstName(pfirstName), lastName(plastName)
{
	id = personId;
	personId++;
}

int Person::personId = 0;


Person::~Person()
{
}

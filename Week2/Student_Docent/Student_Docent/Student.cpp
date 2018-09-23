#include "stdafx.h"
#include "Student.h"


Student::Student(int agep, string namep, int ecp)
	:Person(agep, namep), ec(ecp)
{
}


Student::~Student()
{
}

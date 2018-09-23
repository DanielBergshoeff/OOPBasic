// Student_Docent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>

int main()
{
	Student* student = new Student(21, "Daniel", 60);
	Teacher* teacher = new Teacher(60, "Bert", 40);

	cout << "Student " << student->getName() << " is " << student->getAge() << " years old.\n";
	cout << "Teacher " << teacher->getName() << " is " << teacher->getAge() << " years old.\n";

	char returnLetter;
	cin >> returnLetter;

    return 0;
}


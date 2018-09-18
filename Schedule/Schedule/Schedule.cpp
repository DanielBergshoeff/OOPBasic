// Schedule.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include "Teacher.h"
#include "Class.h"
#include <iostream>
#include "Day.h"
#include "Lesson.h"


int main()
{
	//Create class c
	Class c0 = Class("G&I1-A");
	Class c1 = Class("G&I1-B");

	//Create 10 students and add them to the class c0
	for (size_t i = 0; i < 10; i++)
	{
		Student s = Student("student", std::to_string(i));
		c0.addStudent(s);
	}

	//Create 10 students and add them to the class c1
	for (size_t i = 10; i < 20; i++)
	{
		Student s = Student("student", std::to_string(i));
		c1.addStudent(s);
	}

	//Test whether the 10 students can be found in the c students array
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << c0.getStudents()[i].firstName << " " << c0.getStudents()[i].lastName << " has the ID: " << c0.getStudents()[i].id << std::endl;
	}

	//Create teachers
	Teacher t0 = Teacher("Bert");
	Teacher t1 = Teacher("Pat");

	//Create lessons with a teacher
	Lesson l0 = Lesson("Programming", t0);
	Lesson l1 = Lesson("Suffering 101", t1);
	Lesson l2 = Lesson("Suffering 101 part 2: Math", t1);
	Lesson l3 = Lesson("Databases", t0);


	Day d = Day(15, 9, 2018, c0);
	d.addLessonToSlot(2, l1);
	d.addLessonToSlot(3, l1);

	d.addLessonToSlot(4, l2);

	d.addLessonToSlot(5, l0);
	d.addLessonToSlot(6, l0);

	d.addLessonToSlot(9, l3);
	d.addLessonToSlot(10, l3);

	//Test whether all lesson information has been stored in the fifth timeslot of day 15/09/2018
	for (size_t i = 0; i < 16; i++)
	{
		std::cout << d.getSlotInformation(i) << std::endl;
	}

	int returnnr;

	std::cin >> returnnr;

    return 0;
}


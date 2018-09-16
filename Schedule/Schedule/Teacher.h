#pragma once

//This class holds information about the teacher
class Teacher
{
public:
	int id;
	std::string name;
	static int teacherId;

	Teacher(std::string pname);
	Teacher();
	~Teacher();
};


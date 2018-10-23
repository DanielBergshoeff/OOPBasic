#include "Book.h"
#include <iostream>


Book::Book(std::string t)
	:title(t)
{
	std::cout << "Book has been created: " << t << std::endl;
}


Book::~Book()
{
	std::cout << "Book has been destroyed: " << title << std::endl;
}

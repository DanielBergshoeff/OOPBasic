// TragicLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Library.h"

int main()
{
	Library library = Library();

	library.createBook("Aladin");
	library.createBook("Game of Thrones");
	library.createBook("A Feast for Crows");
	library.createBook("The Prince of Egypt");
	library.createBook("The Martian");

	Book* b = library.lendBook("The Martian");
	Book* b2 = library.lendBook("A Feast for Crows");
	std::cout << b->title << std::endl;
	std::cout << b2->title << std::endl;
	delete b;
	delete b2;
}

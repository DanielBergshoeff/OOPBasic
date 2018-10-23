#pragma once
#include <vector>
#include "Book.h"

class Library
{
public:
	std::vector<Book*> books;

	void createBook(std::string title);
	Book* lendBook(std::string title);

	Library(const Library& library);
	Library& operator=(const Library&);

	Library();
	~Library();
};


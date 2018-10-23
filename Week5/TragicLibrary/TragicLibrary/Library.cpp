#include "Library.h"
#include <iostream>


Library::Library()
{
	books = std::vector<Book*>();
}


Library::~Library()
{
	int length = books.size();

	std::cout << std::endl << "Breaking down library and removing " << length << " books" << std::endl;

	for (int i = 0; i < length; i++)
	{
		if (books[0]) {
			delete books[0];
			
			books.erase(next(begin(books), + 0));
		}
	}
}

void Library::createBook(std::string title)
{
	Book* b = new Book(title);
	books.push_back(b);
}

Book * Library::lendBook(std::string title)
{
	Book* b;

	for (int i = 0; i < books.size(); i++)
	{
		if (books[i]->title == title) {
			b = new Book(books[i]->title);
			delete books[i];
			books.erase(next(begin(books), +i));
			return b;
		}
	}

	return nullptr;
}

Library::Library(const Library & library)
{
	books = std::vector<Book*>();
	for (int i = 0; i < library.books.size(); i++)
	{
		books.push_back(new Book(library.books[i]->title));
	}
}

Library & Library::operator=(const Library& otherLibrary)
{
	if (this != &otherLibrary) {
		for (size_t i = 0; i < books.size(); i++)
		{
			if (books[i]) {
				delete books[i];
				books.erase(next(begin(books), +i));
			}
		}

		books = std::vector<Book*>();
		for (int i = 0; i < otherLibrary.books.size(); i++)
		{
			books.push_back(new Book(otherLibrary.books[i]->title));
		}
	}

	return *this;
}

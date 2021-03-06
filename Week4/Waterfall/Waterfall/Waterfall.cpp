// Waterfall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <ios>

void backwards(std::string pathOut, std::string pathIn) {
	std::ofstream out_stream;
	out_stream.open(pathOut);
	if (!out_stream) {
		std::cout << "Problem opening file" << std::endl;
		exit(1);
	}

	std::ifstream in_stream;
	in_stream.open(pathIn);

	if (!in_stream) {
		std::cout << "Problem opening file" << std::endl;
		exit(1);
	}

	in_stream.seekg(0, in_stream.end);
	int length = in_stream.tellg();

	for (int i = 1; i < length + 1; i++)
	{
		in_stream.seekg(-i, in_stream.end);
		char ch = in_stream.peek();
		out_stream.put(ch);
	}

	out_stream.close();
	in_stream.close();
}

void combineTwoFiles(std::string pathItem1, std::string pathItem2, std::string pathItemCombined) {
	std::ifstream in_stream1;
	in_stream1.open(pathItem1);

	std::ifstream in_stream2;
	in_stream2.open(pathItem2);

	std::ofstream out_stream;
	out_stream.open(pathItemCombined);

	if (!in_stream1 || !in_stream2 || !out_stream) {
		std::cout << "There was an error opening one of the files" << std::endl;
		exit(1);
	}

	std::string line;
	std::string line2;

	while (std::getline(in_stream1, line) && std::getline(in_stream2, line2)) {
		
		for (size_t i = 0; i < line.size(); i++)
		{
			out_stream.put(line[i]);
		}
		out_stream.put('\n');

		for (size_t i = 0; i < line2.size(); i++)
		{
			out_stream.put(line2[i]);
		}
		out_stream.put('\n');
	}

	while (std::getline(in_stream1, line)) {
		for (size_t i = 0; i < line.size(); i++)
		{
			out_stream.put(line[i]);
		}
		out_stream.put('\n');
	}

	while (std::getline(in_stream2, line2)) {
		for (size_t i = 0; i < line2.size(); i++)
		{
			out_stream.put(line2[i]);
		}
		out_stream.put('\n');
	}

	
}

int main()
{
	std::string pathIn = "C:/Users/Daniel/Documents/Textfiles/test.txt";
	std::string pathOut = "C:/Users/Daniel/Documents/Textfiles/result.txt";

	backwards(pathOut, pathIn);

	std::string pathItem1 = "C:/Users/Daniel/Documents/Textfiles/item1.txt";
	std::string pathItem2 = "C:/Users/Daniel/Documents/Textfiles/item2.txt";
	std::string pathItemCombined = "C:/Users/Daniel/Documents/Textfiles/combined.txt";

	combineTwoFiles(pathItem1, pathItem2, pathItemCombined);
}



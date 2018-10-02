#pragma once
#include <string>

class Coin
{
public:
	double getValue();

	std::string getName();

	Coin();
	~Coin();
protected:
	double value;
	std::string name;
};


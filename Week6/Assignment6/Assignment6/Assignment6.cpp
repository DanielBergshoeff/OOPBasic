// Assignment6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Transport.h"
#include "PremiumTransport.h"
#include "ICE.h"
#include "Train.h"
#include "Thalys.h"
#include <vector>

int main()
{
	std::vector<Transport*> transports = std::vector<Transport*>();
	std::vector<PremiumTransport*> ptransports = std::vector<PremiumTransport*>();
	
	ICE* ice = new ICE(0.25f, 250, 10.0f);
	transports.push_back(ice);
	ptransports.push_back(ice);

	Thalys* thalys = new Thalys(0.30f, 150, 25.0f);
	transports.push_back(thalys);
	ptransports.push_back(thalys);

	Train* train = new Train(0.50f, 300);
	transports.push_back(train);

	for (size_t i = 0; i < transports.size(); i++)
	{
		std::cout << "Costs for traveling 100 kilometres: " << transports[i]->calculateEarnings(100) << std::endl;
	}

	for (size_t i = 0; i < ptransports.size(); i++)
	{
		std::cout << "Tax for using premium transport: " << ptransports[i]->calculateSurtax(100, true) << std::endl;
	}

}

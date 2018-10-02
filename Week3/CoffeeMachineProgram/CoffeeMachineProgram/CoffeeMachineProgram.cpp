// CoffeeMachineProgram.cpp : Defines the entry point for the console application.
//

#pragma once
#include "CoffeeMachine.h"
#include "OneEuroCoin.h"
#include "FiftyCentCoin.h"
#include "CoffeeCoin.h"
#include <iostream>

int main()
{
	OneEuroCoin* oneEuroCoin = new OneEuroCoin();
	FiftyCentCoin* fiftyCentCoin = new FiftyCentCoin();
	CoffeeCoin* coffeeCoin = new CoffeeCoin();
	
	
	CoffeeMachine* cm = new CoffeeMachine();

	cm->addCoffee("Standard", 0.5);
	cm->addCoffee("Double", 1.0);
	cm->addCoffee("Espresso", 1.5);
	cm->addCoffee("Double Espresso", 2.5);


	int choice = 1;
	while (choice != 0)
	{
		std::cout << "Press 1 to add a fifty cents coin" << std::endl;
		std::cout << "Press 2 to add a one dollar coin" << std::endl;
		std::cout << "Press 3 to add a coffee cup coin" << std::endl;
		std::cout << "Press 4 to check what you can buy" << std::endl;
		std::cout << "Press 5 to purchase an item" << std::endl;
		std::cout << "Press 0 to close the program" << std::endl;
		std::cout << std::endl;

		std::cin >> (int)choice;

		if (choice == 1) {
			cm->acceptCoin(fiftyCentCoin);
		}
		else if (choice == 2) {
			cm->acceptCoin(oneEuroCoin);
		}
		else if (choice == 3) {
			cm->acceptCoin(coffeeCoin);
		}
		else if (choice == 4) {
			cm->printStatus();
		}
		else if (choice == 5) {
			cm->printStatus();
			std::cout << "Enter the number before the item you wish to purchase: ";
			int choice2;
			std::cin >> choice2;
			cm->buyCoffee(choice2);
		}
		else if (choice == 0) {
			break;
		}
		else {
			std::cout << "That is not a valid option, try again!" << std::endl;
		}
	}

	std::cin >> (int)choice;

    return 0;
}


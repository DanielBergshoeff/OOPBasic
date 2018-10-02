#include "CoffeeMachine.h"
#include <iostream>


CoffeeMachine::CoffeeMachine()
{
	currentDeposit = 0;
	coffeeCoins = 0;
}


CoffeeMachine::~CoffeeMachine()
{
}

void CoffeeMachine::addCoffee(std::string name, double cost)
{
	coffeeName.push_back(name);
	coffeeCost.push_back(cost);
}

void CoffeeMachine::buyCoffee(int nr)
{
	for (int i = 0; i < coffeeName.size(); i++)
	{
		if (i == nr) {
			if (currentDeposit >= coffeeCost[i]) {
				currentDeposit -= coffeeCost[i];
				std::cout << "You have purchased a " << coffeeName[i] << "!" << std::endl;
			}
			else {
				std::cout << "You do not have sufficient funds to purchase this item" << std::endl;
			}
		}
	}
}

void CoffeeMachine::acceptCoin(Coin* coin)
{
	if (coin->getValue() == 0.0) {
		coffeeCoins++;
		std::cout << "You have entered a " << coin->getName() << std::endl;
	}
	else if (coin->getValue() > 0.0) {
		currentDeposit += coin->getValue();
		std::cout << "You have entered " << coin->getName() << std::endl;
	}


	std::cout << "Total amount you've entered: " << currentDeposit << std::endl;
	std::cout << "Coffeecoins entered: " << coffeeCoins << std::endl;
	std::cout << std::endl;
}

void CoffeeMachine::printStatus() {
	std::cout << "You may purchase the following items:" << std::endl;

	for (int i = 0; i < coffeeName.size(); i++)
	{
		if (coffeeCost[i] <= currentDeposit || coffeeCoins > 0) {
			std::cout << i << " > " << coffeeName[i] << " : " << coffeeCost[i] << " euros or a coffeecoin" << std::endl;
		}
	}

	std::cout << std::endl;
}

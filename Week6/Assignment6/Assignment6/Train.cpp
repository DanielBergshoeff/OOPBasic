#include "Train.h"



Train::Train(float ppkm, int mcapacity)
	:pricePerKm(ppkm), maxCapacity(mcapacity)
{
}


Train::~Train()
{
}

float Train::calculateEarnings(int km)
{
	return km * pricePerKm * maxCapacity;
}

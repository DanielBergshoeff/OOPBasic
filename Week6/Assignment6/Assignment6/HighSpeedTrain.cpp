#include "HighSpeedTrain.h"

float HighSpeedTrain::calculateEarnings(int km)
{
	return km * pricePerKm * maxCapacity;
}

float HighSpeedTrain::calculateSurtax(int km, bool adult)
{
	float f = (km / 100) * taxPerHundredKm;

	if (!adult) {
		f = f / 3;
	}

	return 	f * maxCapacity;
}

HighSpeedTrain::HighSpeedTrain(float ppkm, int mcapacity, float tphkm)
	:pricePerKm(ppkm), maxCapacity(mcapacity), taxPerHundredKm(tphkm)
{

}

HighSpeedTrain::~HighSpeedTrain()
{
}

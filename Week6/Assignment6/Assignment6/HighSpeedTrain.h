#pragma once
#include "PremiumTransport.h"

class HighSpeedTrain : public PremiumTransport
{
public:
	float calculateEarnings(int km) override;
	float calculateSurtax(int km, bool adult) override;

	HighSpeedTrain(float ppkm, int mcapacity, float tphkm);
	~HighSpeedTrain();
private:
	float pricePerKm;
	int maxCapacity;
	float taxPerHundredKm;
};


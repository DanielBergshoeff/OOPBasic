#pragma once
#include "Transport.h"

class Train : public Transport
{
public:
	Train(float ppkm, int mcapacity);
	~Train();

	float calculateEarnings(int km) override;

private:
	float pricePerKm;
	int maxCapacity;
};




#pragma once
#include "Transport.h"

class PremiumTransport : public Transport
{
public:
	virtual float calculateSurtax(int km, bool adult) = 0;
};


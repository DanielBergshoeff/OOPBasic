#pragma once
#include "HighSpeedTrain.h"

class ICE : public HighSpeedTrain
{
public:
	ICE(float ppkm, int mcapacity, float tphkm);
	~ICE();
};


#pragma once
#include "HighSpeedTrain.h"

class Thalys : public HighSpeedTrain
{
public:
	Thalys(float ppkm, int mcapacity, float tphkm);
	~Thalys();
};


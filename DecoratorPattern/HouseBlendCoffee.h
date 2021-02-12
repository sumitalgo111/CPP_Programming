#pragma once
#include "Beverage.h"

class HouseBlendCoffee : public Beverage
{
public:
	string getDetails() { return "HouseBlendCoffee"; }
	float cost() { return 10.5f; }
};
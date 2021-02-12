#pragma once
#include "Beverage.h"

class Tea : public Beverage
{
public:
	string getDetails() { return "Tea"; }
	float cost() { return 8.4f; }
};
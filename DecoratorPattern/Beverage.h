#pragma once
#include "Header.h"

class Beverage
{
protected:
	string details;
	float price;
public:
	virtual string getDetails() = 0;
	virtual float cost() { return 0.0f; };
};
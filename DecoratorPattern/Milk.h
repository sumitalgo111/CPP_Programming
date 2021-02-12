#pragma once
#include "DecoratorTopping.h"

class Milk : public DecoratorTopping
{
private:
	Beverage* ptrBeverage = NULL;

public:
	Milk(Beverage& ptrBeverage)
	{
		this->ptrBeverage = &ptrBeverage;
	}

	string getDetails() { return ptrBeverage->getDetails() + ", Milk "; }

};
#pragma once
#include "Beverage.h"

class DecoratorTopping : public Beverage
{
protected:
	string getDetails(){ return ""; }
};

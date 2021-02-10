#pragma once
#include "Header.h"

class Observer
{
public:
	virtual string getName() = 0;
	virtual void update(int) = 0;
};
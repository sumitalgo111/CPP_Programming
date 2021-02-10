
#include "Observer.h"
#include "Header.h"

#pragma once
class Subject
{
public:
	virtual string getName() = 0;
	virtual void registerObserver(Observer*) = 0;
	virtual void removeObserver(Observer*) = 0;
	virtual void notifyObservers() = 0;
};
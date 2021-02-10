#pragma once
#include "ZoneFactory.h"
class Calendar
{
protected:
	Zone* pZone;
public:
	Calendar();
	void print();
	virtual void createCalendar() = 0;
};
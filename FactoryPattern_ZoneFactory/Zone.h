#pragma once
#include "Header.h"

class Zone
{
protected:
	string displayName;
	int offset;
public:
	virtual string getDisplayName() { return displayName; };
	virtual int getOffset() { return offset; };
};
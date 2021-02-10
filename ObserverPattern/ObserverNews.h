#include "Observer.h"
#include "Subject.h"

#pragma once

class ObserverNews : public Observer
{
private:
	Subject* pSub;
	int value;
	std::string name;
public:
	ObserverNews(Subject*, string);
	~ObserverNews();
	void update(int);
	void display();
	string getName();
};
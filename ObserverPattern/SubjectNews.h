#include "Subject.h"

#pragma once

class SubjectNews : public Subject
{
private:
	map<string,Observer*> observers;
	int state;
	string name;
public:
	SubjectNews(string);
	void registerObserver(Observer*);
	void removeObserver(Observer*);
	void notifyObservers();
	int getState();
	string getName();
	void setState(int);
};
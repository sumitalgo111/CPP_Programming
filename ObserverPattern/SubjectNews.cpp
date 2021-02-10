#include "SubjectNews.h"

SubjectNews::SubjectNews(std::string val)
{
	name = val;
}

void SubjectNews::registerObserver(Observer* ob)
{
	observers.insert(make_pair(ob->getName(), ob));
	cout << "\nReader Name : " << ob->getName() << "\nRegistered with : " << name << endl;
}

void SubjectNews::removeObserver(Observer* ob)
{
	observers.erase(ob->getName());
	cout << "\nReader Name : " << ob->getName() << "Unregistered with : " << name<<endl;
}

void SubjectNews::notifyObservers()
{
	for (auto itr = observers.begin(); itr != observers.end(); itr++)
	{
		Observer* pOb = (*itr).second;
		pOb->update(state);
	}
}
int SubjectNews::getState()
{
	return state;
}

string SubjectNews::getName()
{
	return name;
}

void SubjectNews::setState(int val)
{
	state = val;
	cout << "\nUpdate Value ------";
	notifyObservers();
}
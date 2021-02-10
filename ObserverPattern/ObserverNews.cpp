#include "ObserverNews.h"


ObserverNews::ObserverNews(Subject* sub, string val)
{
	pSub = sub;
	name = val;
	pSub->registerObserver(this);
}

ObserverNews::~ObserverNews()
{
	pSub->removeObserver(this);
}

void ObserverNews::update(int val)
{
	value = val;
	display();
}
void ObserverNews::display()
{
	cout << "\nNewsPaper : " << pSub->getName() << "\t Reader : " << name << "\tNew Value : " << value << endl;
}

string ObserverNews::getName()
{
	return name;
}

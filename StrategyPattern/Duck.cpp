#include "Duck.h"
#include "Header.h"

Duck::Duck() {}

Duck::Duck(FlyBehavior* fb1, QuackBehavior* qb1) : flyBehavior(fb1), quackBehavior(qb1)
{
}


void Duck::setFlyBehavior(FlyBehavior* fb) {
	flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
	quackBehavior = qb;
}

void Duck::performFly()
{
	if (flyBehavior)
		flyBehavior->fly();
}

void Duck::performQuack()
{
	if (quackBehavior)
		quackBehavior->quack();
}

void Duck::swim()
{
	cout << "All ducks float, even decoys!\n";
}


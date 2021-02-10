#include "MallardDuck.h"
#include "Header.h"

#include "Quack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck() {
	setQuackBehavior(new Quack);
	setFlyBehavior(new FlyWithWings);
}

void MallardDuck::display()
{
	cout << "I'm a real Mallard duck\n";
}
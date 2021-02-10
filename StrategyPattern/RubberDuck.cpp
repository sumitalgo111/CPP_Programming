#include "RubberDuck.h"
#include "Header.h"

#include "Squeak.h"
#include "FlyNoWay.h"

RubberDuck::RubberDuck() {
	setQuackBehavior(new Squeak);
	setFlyBehavior(new FlyNoWay);
}

void RubberDuck::display()
{
	cout << "I'm a rubber duckie\n";
}
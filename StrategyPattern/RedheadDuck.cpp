#include "RedheadDuck.h"
#include "Header.h"

#include "Quack.h"
#include "FlyWithWings.h"

RedheadDuck::RedheadDuck() {
	setQuackBehavior(new Quack);
	setFlyBehavior(new FlyWithWings);
}

void RedheadDuck::display()
{
	cout << "I'm a real Red Headed duckie\n";
}
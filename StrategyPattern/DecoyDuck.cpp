#include "DecoyDuck.h"
#include "Header.h"

#include "MuteQuack.h"
#include "FlyNoWay.h"

DecoyDuck::DecoyDuck() {
	setFlyBehavior(new FlyNoWay);
	setQuackBehavior(new MuteQuack);
}

void DecoyDuck::display()
{
	cout << "I'm a duck Decoy\n";
}
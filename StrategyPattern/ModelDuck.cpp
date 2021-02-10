#include "ModelDuck.h"
#include "Header.h"

#include "Quack.h"
#include "FlyNoWay.h"

ModelDuck::ModelDuck() {
	setQuackBehavior(new Quack);
	setFlyBehavior(new FlyNoWay);
}

void ModelDuck::display()
{
	cout << "I'm a model duck\n";
}
#include "Header.h"

#include "Duck.h"

#include "DecoyDuck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"






Duck* ptrObj = nullptr;

void run()
{
	if (ptrObj)
	{
		ptrObj->display();
		ptrObj->performFly();
		ptrObj->performQuack();
	}
}

int main()
{
	cout << "\nProject -> StrategyPattern Starts..........................\n";

	ptrObj = new DecoyDuck;
	run();
	ptrObj = new MallardDuck;
	run();
	ptrObj = new ModelDuck;
	run();
	ptrObj = new RedheadDuck;
	run();
	ptrObj = new RubberDuck;
	//ptrObj->setQuackBehavior(new FakeQuack);
	run();


	cout << "\nProject -> StrategyPattern Ends.............................\n";

	return 0;
}
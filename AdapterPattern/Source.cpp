#include "Header.h"
#include "Duck.h"
#include "DroneAdapter.h"
#include "SuperDrone.h"

void testDuck(Duck* pduck)
{
	pduck->quack();
	pduck->fly();
}

int main()
{
	cout << "\nProject -> AdapterPattern Starts............................\n";

	testDuck(new DroneAdapter(new SuperDrone()));

	cout << "\nProject -> AdapterPattern Ends..............................\n";

	return 0;
}
#include "Header.h"
#include "Lock_Guard.h"

extern mutex m1;

int runfor = 20;

void func(char id)
{
	std::lock_guard<mutex> lock1(m1);
	while (runfor>0)
	{
		cout << "Thread " << id << " : runfor = " << runfor-- << endl;
	}
}

void Lock_Guard::Main()
{
	cout << "\nProject Lock_Gruard Starts.....................\n";

	thread t1(func, '1');
	thread t2(func, '2');

	t1.join();
	t2.join();

	cout << "\nProject Lock_Gruard Ends.......................\n";
}
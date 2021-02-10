#include "Mutex_Ex.h"
#include "Header.h"

using namespace std;

int val = 0;
mutex m1,m2;

void func()
{
	for (int i = 0; i < 100000; i++)
	{
		m1.lock();
		val++;
		m1.unlock();
	}
}


void func2()
{
	for (int i = 0; i < 100000; i++)
	{
		if (m2.try_lock())
		{
			val++;
			m2.unlock();
		}
	}
}
void Mutex_Ex::Main()
{
	cout << "\nMutex Starts.............\n";

	//thread t1(func);
	//thread t2(func);

	thread t1(func2);
	thread t2(func2);

	t1.join();
	t2.join();
	cout << "val = " << val << endl;

	cout << "\nMutex Ends.............\n";
}
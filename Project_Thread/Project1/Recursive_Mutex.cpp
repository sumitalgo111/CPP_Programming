#include "Header.h"
#include "Recursive_Mutex.h"

int amount=0;

recursive_mutex rmtx;

void recfunc(char id, int cnt)
{
	if (cnt <= 0)
		return;

	rmtx.lock();

	cout << "Thread ID " << id << " : Amount = " << ++amount << endl;
	recfunc(id, --cnt);

	rmtx.unlock();
}



void Recursive_Mutex::Main()
{
	cout << "\nProject -> Recursive_Mutex Starts.......................\n";
	thread t1(recfunc, '1', 10);
	thread t2(recfunc, '2', 10);

	t1.join();
	t2.join();

	cout << "\nProject -> Recursive_Mutex Ends.........................\n";
}
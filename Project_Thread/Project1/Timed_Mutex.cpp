#include "Header.h"
#include "Timed_Mutex.h"

timed_mutex tm;
int cnt = 0;

void func(int id)
{
	//if (tm.try_lock_for(chrono::seconds(1)))
	auto time1 = chrono::steady_clock::now();

	if (tm.try_lock_until(time1 + chrono::seconds(1)))
	{
		cnt++;
		cout << "Thread Entered ID = " << id << " , Val = " << cnt << endl;
		this_thread::sleep_for(chrono::seconds(1));
		tm.unlock();
	}
	else
		cout << "Thread Not Entered ID = " << id << endl;
}

void Timed_Mutex::Main()
{
	cout << "\nProject -> Timed_Mutex Starts............\n";

	thread t1(func, 1);
	thread t2(func, 2);

	t1.join();
	t2.join();

	cout << "\nProject -> Timed_Mutex Ends..............\n";
}
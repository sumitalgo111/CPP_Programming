#include "Header.h"
#include "Unique_Lock.h"

extern mutex m1;
extern timed_mutex tm;

void func3(char id, int cnt)
{
	//std::unique_lock<mutex> lock1(m1, defer_lock);
	std::unique_lock<timed_mutex> lock1(tm, defer_lock);
	//lock1.lock(); 
	//lock1.try_lock();
	//lock1.try_lock_for(chrono::seconds(1));//will be used with timed_mutex only
	lock1.try_lock_until(chrono::steady_clock().now() + chrono::seconds(1));//will be used with timed_mutex only

	if (lock1.owns_lock()) {
		while (cnt > 0)
		{
			cout << "Thread " << id << " : Cnt = " << cnt << endl;
			cnt--;
		}
	}
}

void Unique_Lock::Main()
{
	cout << "\nProject -> Unique Lock Starts...................\n";

	thread t1(func3, '1', 10);
	thread t2(func3, '2', 10);

	t1.join();
	t2.join();

	cout << "\nProject -> Unique Lock Ends.....................\n";
}
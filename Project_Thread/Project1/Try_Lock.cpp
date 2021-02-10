#include "Header.h"
#include "Try_Lock.h"

Try_Lock::Try_Lock()
{
	x = y = val = 0;
}

void Try_Lock::increment(int& xory, mutex& m)
{
	for (int i = 0; i < 5; i++)
	{
		m.lock();
		++xory;
		m.unlock();
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}

void Try_Lock::getandinit()
{
	int time = 5;
	while (time)
	{
		//this_thread::sleep_for(chrono::seconds(1));
		if (try_lock(m1, m2) == -1)
		{
			val += (x + y);
			cout << "\nx = " << x << ", y = " << y << ", val = " << val;
			x = 0;
			y = 0;
			m1.unlock();
			m2.unlock();
			time--;
		}
	}
}

void Try_Lock::Main()
{
	cout << "\nProject -> Try_Lock Starts............\n";

	Try_Lock obj;
	thread t1(&Try_Lock::increment, &obj, ref(obj.x), ref(obj.m1));
	thread t2(&Try_Lock::increment, &obj, ref(obj.y), ref(obj.m2));

	thread t3(&Try_Lock::getandinit, &obj);

	t1.join();
	t2.join();
	t3.join();
	
	cout << "\nProject -> Try_Lock Ends..............\n";
}
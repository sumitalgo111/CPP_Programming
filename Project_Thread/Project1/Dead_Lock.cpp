#include "Header.h"
#include "Dead_Lock.h"

extern mutex m1, m2;
int buffer = 0;

void fun1()
{
	m1.lock();
	this_thread::sleep_for(chrono::seconds(1));
	m2.lock();
	cout << "\nCritical section of func1\n";
	buffer++;
	m1.unlock();
	m2.unlock();
}

void fun2()
{
	m2.lock();
	this_thread::sleep_for(chrono::seconds(1));
	m1.lock();
	cout << "\nCritical section of func2\n";
	buffer++;
	m2.unlock();
	m1.unlock();
}

void Dead_Lock::Main()
{
	cout << "\Class -> Dead_Lock Starts.............\n";
	thread t1(fun1);
	thread t2(fun2);

	t1.join();
	t2.join();
	cout << "\Class -> Dead_Lock Ends...............\n";
}
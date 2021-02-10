#include "Header.h"
#include "Std_Lock.h"

extern mutex m1, m2;

void task1()
{
	cout << "\nEnter in Thread 1\n";
	std::lock(m1, m2);
	this_thread::sleep_for(chrono::seconds(1));
	//m2.lock();

	m1.unlock();
	m2.unlock();
}

void task2()
{
	cout << "\nEnter in Thread 2\n";
	std::lock(m2, m1);
	this_thread::sleep_for(chrono::seconds(1));
	//m1.lock();

	m2.unlock();
	m1.unlock();
}


void Std_Lock::Main()
{
	cout << "\nClass Std_Lock Starts.................................\n";

	thread t1(task1);
	thread t2(task2);

	t1.join();
	t2.join();
	cout << "\nClass Std_Lock Ends...................................\n";
}
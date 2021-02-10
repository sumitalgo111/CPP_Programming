#include "Header.h"
#include "Producer_Consumer_Prob.h"

std::mutex mt1;
std::condition_variable cv1;

deque<int> buffer;

long maxsize;


void producer(int val)
{
	while (val > 0)
	{
		std::unique_lock<mutex> lock1(mt1);
		cv1.wait(lock1, [] {return (buffer.size() < maxsize); });

		cout << "\nProduced = " << val;
		buffer.push_back(val);
		val-=10;

		lock1.unlock();
		cv1.notify_one();
	}
}

void consumer()
{
	while (true) {
		std::unique_lock<mutex> lock2(mt1);
		cv1.wait(lock2, [] {return (buffer.size() > 0); });

		cout << "\nConsumed = " << buffer.back();
		buffer.pop_back();

		lock2.unlock();
		cv1.notify_one();
	}
}

void Producer_Consumer_Prob::Main()
{
	cout << "\nClass -> Producer_Consumer_Prob Starts..................\n";

	maxsize = 5;

	thread t1(consumer);
	thread t2(producer, 80);

	t1.join();
	t2.join();

	cout << "\nClass -> Producer_Consumer_Prob Ends....................\n";
}
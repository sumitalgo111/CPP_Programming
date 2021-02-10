#include "Header.h"
#include "Async_Task.h"


long Async_Task::func(int num)
{
	long sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}

	return sum;
}


void Async_Task::Main()
{
	Async_Task obj;
	future<long> fvar = std::async(std::launch::async| std::launch::deferred, &Async_Task::func, &obj, 100);

	cout << "\nMain Thread is waiting\n";
	cout << "Sum = " << fvar.get();
}
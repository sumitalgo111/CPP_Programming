#include "Header.h"
#include "Promise_Future.h"


void Promise_Future::calOddSum(std::promise<long>&& promisevar, int cnt)
{
	long sum = 0;
	for (int i = 1; i <= cnt; i += 2)
	{
		sum += i;
	}
	this_thread::sleep_for(chrono::seconds(1));
	promisevar.set_value(sum);
}

void Promise_Future::calEvenSum(std::promise<long>& promisevar, int cnt)
{
	long sum = 0;
	for (int i = 2; i <= cnt; i += 2)
	{
		sum += i;
	}
	this_thread::sleep_for(chrono::seconds(1));
	promisevar.set_value(sum);
}

void Promise_Future::Main()
{
	cout << "\nClass -> Promise_Future Starts.................\n";

	std::promise<long> pvar1;
	std::future<long> fvar1 = pvar1.get_future();

	std::promise<long> pvar2;
	std::future<long> fvar2 = pvar2.get_future();

	Promise_Future obj;

	thread t1(&Promise_Future::calOddSum, &obj, std::move(pvar1), 10000);
	thread t2(&Promise_Future::calEvenSum, &obj, ref(pvar2), 10000);


	long sum1 = fvar1.get();
	long sum2 = fvar2.get();

	cout << "\nOdd Sum = " << sum1 << endl;
	cout << "\nEven Sum = " << sum2 << endl;
	cout << "\nTotal Sum = " << sum1 +sum2 << endl;

	if (t1.joinable())
		t1.join();
	if (t2.joinable())
		t2.join();

	cout << "\nClass -> Promise_Future Ends...................\n";
}
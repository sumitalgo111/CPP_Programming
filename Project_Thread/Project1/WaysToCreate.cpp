#include "Header.h"
#include "WaysToCreate.h"

//Using direct function

void func(int x, int y)
{
	while (x < y)
	{
		cout << endl << x++ << endl;
	}
}
//Using Lambda function
auto lfunc = [](int x, int y) {
	while (x < y)
	{
		cout << endl << x++ << endl;
	}
};
//Using Functors
class Ex
{
public:
	void operator () (int x, int y)
	{
		while (x < y)
		{
			cout << endl << x++ << endl;
		}
	}
};
//Using class non-static function
class CFunc
{
public:
	void myfunc(int x, int y)
	{
		while (x < y)
		{
			cout << endl << x++ << endl;
		}
	}
};
//Using class static function
class CStatFunc
{
public:
	static void myfunc(int x, int y)
	{
		while (x < y)
		{
			cout << endl << x++ << endl;
		}
	}
};


void WaysToCreate::Main()
{
	cout << "\nWaysToCreate Starts...\n";


	thread t1(func, 100, 200);
	thread t2(lfunc, 200, 300);
	thread t3(Ex(), 300, 400);
	CFunc obj;
	thread t4(&CFunc::myfunc, &obj, 400, 500);
	thread t5(&CStatFunc::myfunc, 500, 600);

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	cout << "\nWaysToCreate Ends...\n";
}
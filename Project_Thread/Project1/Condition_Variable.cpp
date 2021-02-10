#include "Header.h"
#include "Condition_Variable.h"

std::condition_variable cond;

extern mutex m1;

Condition_Variable* Condition_Variable::obj = NULL;

int Condition_Variable::balance = 0;

Condition_Variable::Condition_Variable()
{
	//balance = 0;
}


Condition_Variable& Condition_Variable::getObject()
{
	if (!obj)
		obj = new Condition_Variable();

	return *obj;
}

void Condition_Variable::deposit(int money)
{
	unique_lock<mutex> lock2(m1);
	balance += money;
	cout << "Deposit  = " << money << endl;
	cout << "Current Balance  = " << balance << endl;
	cond.notify_one();
}

void Condition_Variable::withdraw(int money)
{
	unique_lock<mutex> lock1(m1);
	cond.wait(lock1, [] { return (balance != 0); });

	if (balance < money)
		cout << "Not sufficient balance \n";
	else
	{
		balance -= money;
		cout << "Withdraw  = " << money << endl;
	}
	cout << "Current Balance  = " << balance << endl;
}

void Condition_Variable::Main()
{
	cout << "\nProject -> Unique Lock Starts...................\n";
	Condition_Variable& obj1 = Condition_Variable::getObject();

	thread t1(&Condition_Variable::withdraw, obj, 600);
	thread t2(&Condition_Variable::deposit, obj, 700);
	thread t3(&Condition_Variable::withdraw, obj, 600);
	thread t4(&Condition_Variable::withdraw, obj, 600);
	thread t5(&Condition_Variable::deposit, obj, 1300);

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();

	cout << "\nProject -> Unique Lock Ends.....................\n";
}
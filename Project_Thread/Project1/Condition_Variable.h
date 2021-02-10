#pragma once
class Condition_Variable
{

	static int balance;
	static Condition_Variable* obj;

	Condition_Variable();//hide to make singleton
	void deposit(int);
	void withdraw(int);
public :
	static void Main();
	static Condition_Variable& getObject();
};
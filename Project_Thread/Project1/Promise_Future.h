#pragma once
class Promise_Future
{
	void calOddSum(std::promise<long>&&, int);
	void calEvenSum(std::promise<long>&, int);
public:
	static void Main();
};
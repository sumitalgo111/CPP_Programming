#pragma once

class Try_Lock
{
	mutex m1, m2;
	int x, y, val;
	void increment(int& xory, mutex& m);
	void getandinit();

public:
	Try_Lock();
	static void Main();
};
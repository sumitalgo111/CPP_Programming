#pragma once


class SampleClass
{
private:
	int id;
	char* name;
public:
	SampleClass(const SampleClass&);
	SampleClass& operator = (const SampleClass&);
};
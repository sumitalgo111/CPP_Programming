#pragma once

template <typename T, typename T2=int>
class Smart_Ptr
{
private:
	T* ptr;
public:
	Smart_Ptr(T* tmp = NULL)
	{
		ptr = tmp;
	}
	~Smart_Ptr()
	{
		delete ptr;
	}

	T& operator * ()
	{
		return *ptr;
	}
	T* operator + (T2 increment)
	{
		return (ptr+increment);
	}
	unsigned int length()
	{
		return sizeof(ptr);
	}
};
#include "Header.h"
#include "Smart_Ptr.h"

int main()
{
	int* pint = new int[] {2, 4, 5, 7, 9, 12, 14};

	string str = "Hello brother\n";

	char* pchar = new char[size(str)+1];


	Smart_Ptr<int> ptr1 = Smart_Ptr<int>(pint);

	Smart_Ptr<char> ptr2(pchar);

	cout << *ptr2 << endl;

	unsigned int n = ptr1.length();

	for (int i = 0; i < n; i++)
	{
		cout << "\n" << *(ptr1+i);
	}

	return 0;
}


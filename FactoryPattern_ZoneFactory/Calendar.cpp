#include "Calendar.h"

Calendar::Calendar()
{
	pZone = NULL;
}

void Calendar::print()
{
	if (!pZone)
		return;
	cout << "\nTime Zone : " << pZone->getDisplayName()
		<< "\nOffset : GMT " << ((pZone->getOffset() < 0) ? "- " : "+ ") << abs(pZone->getOffset()) << endl;
}
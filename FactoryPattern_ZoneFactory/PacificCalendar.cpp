#include "PacificCalendar.h"

void PacificCalendar::createCalendar()
{
	pZone = ZoneFactory::createZone(ZoneIds::USPacific);
}

int main()
{
	PacificCalendar obj;
	obj.createCalendar();
	obj.print();
	return 0;
}
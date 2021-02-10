#include "Header.h"
#include "ObserverNews.h"
#include "SubjectNews.h"

int main()
{
	SubjectNews toi("Times of India");
	SubjectNews ht("Hindustan Times");

	ObserverNews sumit(&toi, "Sumit");
	ObserverNews rahul(&toi, "Rahul");
	ObserverNews rohit(&toi, "Rohit");


	ht.registerObserver(&sumit);

	ObserverNews rohan(&ht, "Rohan");

	ht.registerObserver(&rohit);

	ht.setState(10);
	toi.setState(5);

	return 0;
}
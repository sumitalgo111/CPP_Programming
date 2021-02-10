#include "Header.h"
#include "Drawing.h"

//Client code or driver program
int main()
{
	int choice;
	drawObjects type;
	Drawing* drawPtr;

	while (true)
	{
		cout << "\nDrawing Objects :\n1)Circle\n2)Suare\n3)Rectangle\n9)Exit";
		cout << "\nPlease enter object of your choice : ";
		cin >> choice;

		if (choice == 9)
			break;

		type = (drawObjects)(choice);

		drawPtr = Drawing::create(type);

		if (drawPtr)
			drawPtr->draw();
		else
		{
			cout << "\nInvalid choice\n";
		}
	}
}
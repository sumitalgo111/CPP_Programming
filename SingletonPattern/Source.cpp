#include "Header.h"
#include "Application.h"


int main()
{
	cout << "\nProject Singleton Starts.................\n";

	Application& pobj = *(Application::create());
	pobj.display();

	cout << "\nProject Singleton Ends...................\n";
}
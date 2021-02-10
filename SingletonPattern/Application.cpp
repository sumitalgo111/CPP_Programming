#include "Header.h"
#include "Application.h"

Application* Application::ptrObj = NULL;

Application::Application()
{}

Application* Application::create()
{
	if (ptrObj == NULL)
		return new Application();
	return ptrObj;
}

void Application::display()
{
	cout << "\nInside Application Object\n";
}
#pragma once

class Application
{
private:
	static Application* ptrObj;

	Application();

public:
	static Application* create();
	void display();
};
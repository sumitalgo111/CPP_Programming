#pragma once
#include <iostream>
using namespace std;

enum class drawObjects {dw_Circle = 1, dw_Square, dw_Rectangle, dw_Triangle};

class Drawing
{
public:
	virtual void draw() = 0;

	static Drawing* create(drawObjects);
};
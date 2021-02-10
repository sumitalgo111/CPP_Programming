#include "Drawing.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"


Drawing* Drawing::create(drawObjects type)
{
	Drawing* basePtr = NULL;
	switch (type)
	{
	case drawObjects::dw_Circle:
		basePtr = static_cast<Drawing*>(new Circle());//static_cast not required, just for testing purpose
		break;
	case drawObjects::dw_Square:
		basePtr = dynamic_cast<Drawing*>(new Square());//dynamic_cast not required, just for testing purpose
		break;
	case drawObjects::dw_Rectangle:
		basePtr = (new Rectangle());
		break;
	default:
		break;
	}
	return basePtr;
}

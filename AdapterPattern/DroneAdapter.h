#pragma once
#include "Duck.h"
#include "Drone.h"


class DroneAdapter : public Duck
{
private:
	Drone* pdrone;
public:
	DroneAdapter(Drone*);
	void quack();
	void fly();
};
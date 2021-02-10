#pragma once
#include "DroneAdapter.h"



DroneAdapter::DroneAdapter(Drone* ptr)
{
	pdrone = ptr;
}

void DroneAdapter::quack()
{
	pdrone->beep();
}

void DroneAdapter::fly()
{
	pdrone->start_rotors();
	pdrone->take_off();
}

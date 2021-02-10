#pragma once
class Drone
{
public:
	virtual void beep() = 0;
	virtual void start_rotors() = 0;
	virtual void take_off() = 0;
};

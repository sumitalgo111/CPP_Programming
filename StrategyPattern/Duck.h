
#include "FlyBehavior.h"
#include "QuackBehavior.h"

#pragma once
class Duck {
private:
	FlyBehavior* flyBehavior = nullptr;
	QuackBehavior* quackBehavior = nullptr;

public:
	Duck();
	Duck(FlyBehavior* fb1, QuackBehavior* qb1);
	void setFlyBehavior(FlyBehavior*);

	void setQuackBehavior(QuackBehavior*);

	void performFly();

	void performQuack();

	void swim();

	virtual void display() = 0;
};

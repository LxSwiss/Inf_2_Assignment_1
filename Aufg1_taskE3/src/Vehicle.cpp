#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(float pMaximumVelocity)
{
	maximumVelocity = pMaximumVelocity;
}

float Vehicle::getLength()
{
	return length;
}

float Vehicle::getMaximumVelocity()
{
	return maximumVelocity;
}

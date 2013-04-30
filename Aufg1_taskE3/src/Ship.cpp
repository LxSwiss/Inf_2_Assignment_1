#include <iostream>
#include "Ship.h"

Ship::Ship(): Vehicle(15) {
	engineLength = 2;
	length = 10;
}

int Ship::getNumberOfSeats()
{
	return 0;
}

float Ship::getLength()
{
	return Vehicle::getLength() + engineLength;return Vehicle::getLength() + engineLength;
}

#include <iostream>
#include "Car.h"

Car::Car(bool putSummerWheels)
{/*:Vehicle(10){
length = 10;
for (int i = 0; i<4;i++){
	wheels[i] = new Wheel(putSummerWheels);
}*/
}

Car::~Car() {

}

int Car::getNumberOfSeats()
{
	return number_of_seats;
}

bool Car::hasSummerWheels()
{
	return true;
}

float Car::getLength()
{
	return Vehicle::getLength();
}

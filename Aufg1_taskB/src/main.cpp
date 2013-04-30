//
//  main.cpp
//  House_Buying
//
//  Created by Fabian Hofstetter on 07.02.12.
//  Adapted and updated by Rafael Ballester on 09.01.13.
//  Copyright 2013 Universität Zürich. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "House.h"

struct Desires{
    int rooms;
    int squareMeters;
    double price;
};

bool checkRooms(House* myHouse, Desires myDesire);
bool checkSquareMeters(House* myHouse, Desires myDesire);
void printHouseDescription(House* myHouse);
bool checkPrice(House* myHouse, Desires myDesire);

int main (int argc, const char * argv[])
{

    House dreamHouse(5, 1200, 25000.55, "Musterstrasse", "4", "8050", "Zürich");
    printHouseDescription(&dreamHouse);

	Desires * myDesire = new Desires();
    myDesire->rooms = 2;
    myDesire->squareMeters = 1000;
    myDesire->price = 750000.00;
    
    if(
    checkRooms(&dreamHouse, *myDesire) &&
       checkPrice(&dreamHouse, *myDesire)){
        printHouseDescription(&dreamHouse);
    }

    delete myDesire;
    return 0;
    
}

bool checkRooms(House* myHouse, Desires myDesire){
    if(myHouse->getRooms() >= myDesire.rooms){
    	return true;
    }else{
    	return false;
    }
}

bool checkPrice(House* myHouse, Desires myDesire){
    return (myHouse->getPrice()<= myDesire.price);
}

float getPerimeter(House* myHouse){
	float perim = sqrt(myHouse->getSquareMeters())*4;
	return perim;
}

void printHouseDescription(House* myHouse){
	std::cout << "Address:" << std::endl;
		std::cout << myHouse->getAddress() << std::endl;
		std::cout << "Rooms: " << myHouse->getRooms() << std::endl;
		float perimeter = getPerimeter(myHouse);
		std::cout << "Space: " << myHouse->getSquareMeters() << " (Perimeter: " << perimeter << ")" << std::endl;
		std::cout << "Price: " << myHouse->getPrice() << std::endl;
}

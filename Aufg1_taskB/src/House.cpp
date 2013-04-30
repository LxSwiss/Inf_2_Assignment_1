//
//  house.cpp
//  House_Buying
//
//  Created by Fabian Hofstetter on 07.02.12.
//  Copyright 2012 Universität Zürich. All rights reserved.
//

#include <iostream>
#include "House.h"


/* TODO 5a)
 *
 * implement a constructor
 *
 * write your implementation here
 */

   House::House(int rooms_, int squareMeters_, double price_, std::string street_, std::string roadNumber_, std::string postalCode_, std::string city_){
    	rooms = rooms_;
    	squareMeters = squareMeters_;
    	price = price_;
    	street = street_;
    	roadNumber = roadNumber_;
    	postalCode = postalCode_;
    	city = city_;
    }

   House::~House() {
   }




int House::getRooms(){
    return rooms;
}

int House::getSquareMeters(){
    return squareMeters;
}

float House::getPrice(){
    return price;
}

std::string House::getAddress(){    
    std::string adr;

    adr += street + " " + roadNumber + "\n" + postalCode + " " + city + "\n";
    return adr;

}

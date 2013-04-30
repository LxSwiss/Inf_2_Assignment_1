//
//  main.cpp
//  ColorTable
//
//  Created by Mathias Thöny on 15.02.12.
//  Updated by Rafael Ballester on 09.01.13.
//  Copyright (c) 2013 Uni Zürich. All rights reserved.
//

#include <iostream>
#include "ColorTable.h"

int main (int argc, const char * argv[])

{
    ColorTable* colorTable = new ColorTable();
    colorTable->readColorTable("src/colors.txt");
    Color *foundColor = new Color();
    std::string input;
    while(input != "quit"){
    std::cout << "Please enter a color name: ";
    std::cin >> input;
    if(colorTable->getColor(input,foundColor)){
    std::cout<< foundColor->name << " = (" <<foundColor->r << ", "<< foundColor->g<< ", " << foundColor->b<< ")\n";
    }else{
    	if(input!="quit")
    	std::cout<< "Could not find Color \"" << input << "\" \n";
    }
    }
    std::cout << "Thanks and good bye!";

    delete colorTable;
    return 0;
}

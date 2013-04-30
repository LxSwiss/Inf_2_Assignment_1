/*
 *
 *  Created by Matthias Thöny.
 *  Updated by Rafael Ballester on 09.01.13.
 *  Copyright (c) 2013 Uni Zürich. All rights reserved.
 *
 */

#include "ColorTable.h"

ColorTable::ColorTable() {

}

/*
 * TODO 1: Implement reading a specific colortable given by a filename and put the color values in the color structure.
 */
void ColorTable::readColorTable(std::string filename) {

	const char * c = filename.c_str(); // char-Pointer, welcher auf die Speicheradresse von "filename" zeigt
	std::ifstream input;
	input.open(c, std::ifstream::in); // c= Char-Pointer auf filename,  Allow input operations on the stream.
	if ( ! input.is_open()  ) {
		std::cerr << "open failed" << std::endl;
	}


	for (int i = 0; i < 8; i++) {
		input >> colors[i].name >> colors[i].r >> colors[i].g >> colors[i].b;
	}

	input.close();
}

/*
 * TODO 2: look for a color
 */
bool ColorTable::getColor(std::string name, Color *foundColor) {
	for (int i = 0; i < 8; i++) {
		if (colors[i].name == name) {
			foundColor->name = colors[i].name;
			foundColor->r = colors[i].r;
			foundColor->g = colors[i].g;
			foundColor->b = colors[i].b;
			return true;
		}
	}
	return false;
}


#ifndef _RGBCOLOR_
#include "RGBColor.h"
#define _RGBCOLOR_
#endif

using namespace std;
/********************************************
Class:			RGBColor
Author:			Cooper
Purpose:		hold color information for shapes
Created:		02/12/2020
Dependencies:	RGBColor.h
*********************************************/
// Constructors
RGBColor::RGBColor() {
	red = 0.0;
	blue = 0.0;
	green = 0.0;
}

RGBColor::RGBColor(GLfloat red, GLfloat green, GLfloat blue) {
	this->red = red;
	this->blue = blue;
	this->green = green;
}

//set Methods
void RGBColor::setRed(GLfloat red) {
	this->red = red;
}
void RGBColor::setBlue(GLfloat blue) {
	this->blue = blue;
}
void RGBColor::setGreen(GLfloat green) {
	this->green = green;
}
void RGBColor::setColors(GLfloat red, GLfloat green, GLfloat blue) {
	setRed(red);
	setBlue(blue);
	setGreen(green);
}

// get methods
GLfloat RGBColor::getRed() { return red; }

GLfloat RGBColor::getBlue() { return blue; }
GLfloat RGBColor::getGreen() { return green; }
RGBColor* RGBColor::getColors() { return this; }

void RGBColor::toGLfloatArray(GLfloat * result) {
	result[0] = getRed();
	result[1] = getBlue();
	result[2] = getGreen();
}




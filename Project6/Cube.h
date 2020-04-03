#pragma once
#include <gl/glut.h>
#include "RGBColor.h"
#include "Location.h"
/*************************************************************************
Class:		Cube Class
Purpose:	Implement a simple reusable way to draw rectangular prisms
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/

class Cube
{
	Location loc;
	GLfloat length, width, height;
	RGBColor color;
public:
	Cube();

	Cube(GLfloat l, GLfloat w, GLfloat h, RGBColor col, Location location);

	void draw();

	~Cube();
};


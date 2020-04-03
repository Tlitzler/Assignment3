#include "Cake.h"

/*************************************************************************
Class:		Cake Class
Purpose:	Create a piece of cake
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/


Cake::Cake()
{
	//PIECE OF CAKE (Exactly what this assignment was not)
	objects.push_back(Cube(0.75, 0.75, 0.03125, RGBColor(0.66, 0.75, 1.0), Location(4, 1.58, -1.75)));
	objects.push_back(Cube(0.25, 0.25, 0.3, RGBColor(0.2, 0, 0), Location(4, 1.68, -1.75)));
	objects.push_back(Cube(0.26, 0.26, 0.0625, RGBColor(1.0, 1.0, 1.0), Location(4, 1.7, -1.75)));
	objects.push_back(Cube(0.26, 0.26, 0.03125, RGBColor(1.0, 1.0, 1.0), Location(4, 1.85, -1.75)));
}


Cake::~Cake()
{
}

void Cake::draw()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
}
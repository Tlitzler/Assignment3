#include "Fork.h"


/*************************************************************************
Class:		Fork Class
Purpose:	Create a fork
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/

Fork::Fork()
{
	//UTENSIL
	objects.push_back(Cube(0.5, 0.025, 0.025, RGBColor(0.57, .57, .57), Location(3, 1.59, 1.25 - 3.5)));
	objects.push_back(Cube(0.025, 0.125, 0.025, RGBColor(0.57, .57, .57), Location(3, 1.59, 1.5 - 3.5)));
	objects.push_back(Cube(0.1, 0.02, 0.025, RGBColor(0.57, .57, .57), Location(3.0525, 1.59, 1.55 - 3.5)));
	objects.push_back(Cube(0.1, 0.02, 0.025, RGBColor(0.57, .57, .57), Location(3, 1.59, 1.55 - 3.5)));
	objects.push_back(Cube(0.1, 0.02, 0.025, RGBColor(0.57, .57, .57), Location(3 - .0525, 1.59, 1.55 - 3.5)));

}


Fork::~Fork()
{
}

void Fork::draw()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
}
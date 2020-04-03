#include "Drink.h"


/*************************************************************************
Class:		Drink Class
Purpose:	Create a refreshing glass of fruit punch
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/

Drink::Drink()
{
	//GLASS OF DRINK
	//COASTER
	objects.push_back(Cube(0.35, 0.35, 0.03125, RGBColor(0.65, 0.65, 0.65), Location(3.125, 1.57, -1.5)));
	//CUP WITH DRINK
	objects.push_back(Cube(0.25, 0.25, 0.5, RGBColor(0.74, .8, 1), Location(3.125, 1.69, -1.5)));
	objects.push_back(Cube(0.2, 0.2, 0.5, RGBColor(0.86, .08, 0.24), Location(3.125, 1.7, 2 - 3.5)));

}


Drink::~Drink()
{
}

void Drink::draw()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
}
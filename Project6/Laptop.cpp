#include "Laptop.h"


/*************************************************************************
Class:		Laptop Class
Purpose:	Create a Laptop
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/

Laptop::Laptop()
{
	//LAPTOP
	objects.push_back(Cube(1, 1.25, 0.0625, RGBColor(0.5, 0.5, 0.5), Location(3.75, 1.6, 5.3 - 3.5)));
	objects.push_back(Cube(0.0625, 1.25, 1.125, RGBColor(0.5, 0.5, 0.5), Location(3.75, 2.125, 4.8 - 3.5)));
	objects.push_back(Cube(0.00001, 1.125, 1, RGBColor(0.0, 0.0, 0.0), Location(3.75, 2.125, 4.84 - 3.5)));

}


Laptop::~Laptop()
{
}

void Laptop::draw()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
}

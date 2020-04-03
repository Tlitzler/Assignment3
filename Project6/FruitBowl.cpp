#include "FruitBowl.h"


/*************************************************************************
Class:		FruitBowl Class
Purpose:	Create a bowl of fruit
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/

FruitBowl::FruitBowl()
{
	//BOWL OF FRUIT
	//BOWL
	objects.push_back(Cube(0.75, 0.75, 0.03125, RGBColor(0.5, 0.65, 0.5), Location(4, 1.58, 0)));
	objects.push_back(Cube(0.03125, 0.75, 0.25, RGBColor(0.5, 0.65, 0.5), Location(4, 1.7, 3.15 - 3.5)));
	objects.push_back(Cube(0.03125, 0.75, 0.25, RGBColor(0.5, 0.65, 0.5), Location(4, 1.7, 3.85 - 3.5)));
	objects.push_back(Cube(0.75, 0.03127, 0.25, RGBColor(0.5, 0.65, 0.5), Location(3.65, 1.7, 0)));
	objects.push_back(Cube(0.75, 0.03127, 0.25, RGBColor(0.5, 0.65, 0.5), Location(4.35, 1.7, 0)));
	//FRUIT

	fruit.push_back(Sphere(.15, RGBColor(1, .5, 0), Location(3.9, 1.65, 0)));
	fruit.push_back(Sphere(.2, RGBColor(1, .5, 0), Location(4.1, 1.85, 0.15)));
	fruit.push_back(Sphere(.16, RGBColor(1, .5, 0), Location(3.8, 1.85, .17)));
	fruit.push_back(Sphere(.13, RGBColor(1, .5, 0), Location(4.2, 1.65, -0.2)));
}


FruitBowl::~FruitBowl()
{
}

void FruitBowl::draw()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
	for (int i = 0; i < fruit.size(); i++)
	{
		fruit[i].draw();
	}
}

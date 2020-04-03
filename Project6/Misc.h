#pragma once
#include "Laptop.h"
#include "FruitBowl.h"
#include "Drink.h"
#include "Fork.h"
#include "Cake.h"
#include <vector>
/*************************************************************************
Class:		Misc Class
Purpose:	Compile all the misc items that will be dipslayed in the room
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/

class Misc
{
public:
	Laptop lap;
	FruitBowl bowl;
	Drink d;
	Fork f;
	Cake lie;
	std::vector<Cube> objects;
	std::vector<Sphere> fruit;

	Misc();
	~Misc();

	void draw();
};


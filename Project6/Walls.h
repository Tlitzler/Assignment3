#pragma once
#include "Cube.h"
#include <vector>
/*************************************************************************
Class:		Walls Class
Purpose:	Create walls and floor
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/
class Walls
{
public:
	std::vector<Cube> objects;
	Walls();
	~Walls();

	void draw();
};


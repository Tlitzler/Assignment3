#pragma once
#include "Cube.h"
#include <vector>
/*************************************************************************
Class:		Chairs Class
Purpose:	Create chairs
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/

class Chairs
{
public:
	std::vector<Cube> objects;
	Chairs();
	~Chairs();

	void draw();
};


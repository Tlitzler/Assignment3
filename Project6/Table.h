#pragma once
#include "Cube.h"
#include <vector>
/*************************************************************************
Class:		Table Class
Purpose:	Create table
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/
class Table
{
public:

	std::vector<Cube> objects;
	Table();
	~Table();

	void draw();
};


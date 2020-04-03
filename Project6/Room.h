#pragma once
#include "Walls.h"
#include "Table.h"
#include "Chairs.h"
#include "Misc.h"
/*************************************************************************
Class:		Room Class
Purpose:	Create the scene
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/
class Room
{
public:
	Walls walls;
	Table table;
	Chairs chairs;
	Misc misc;
	Room();
	~Room();

	void draw();
};


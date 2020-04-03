#include "Table.h"



Table::Table()
{
	//LEGS
	objects.push_back(Cube(0.125, 0.125, 1.5, RGBColor(0.54, 0.27, 0.075), Location(3, 0.75, -1.5)));
	objects.push_back(Cube(0.125, 0.125, 1.5, RGBColor(0.54, 0.27, 0.075), Location(5, 0.75, -1.5)));
	objects.push_back(Cube(0.125, 0.125, 1.5, RGBColor(0.54, 0.27, 0.075), Location(3, 0.75, 1.5)));
	objects.push_back(Cube(0.125, 0.125, 1.5, RGBColor(0.54, 0.27, 0.075), Location(5, 0.75, 1.5)));

	//TABLE TOP
	objects.push_back(Cube(5, 3, 0.125, RGBColor(0.54, 0.27, 0.075), Location(4, 1.5, 0)));
}


Table::~Table()
{
}

void Table::draw()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
}

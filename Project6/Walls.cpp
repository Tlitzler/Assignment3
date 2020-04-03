#include "Walls.h"



Walls::Walls()
{
	//FLOOR
	objects.push_back(Cube(7, 7, 0, RGBColor(0.7, 0.7, 0.7), Location(3.5, 0, 0)));
	//BACK WALL
	objects.push_back(Cube(7, 0, 6, RGBColor(0.96, 1.0, 0.97), Location(0, 3, 0)));

	//RIGHT WALL
	objects.push_back(Cube(0, 7, 6, RGBColor(0.96, 1.0, 0.97), Location(3.5, 3, -3.5)));

	//LEFT WALL
	objects.push_back(Cube(0, 7, 2, RGBColor(0.96, 1.0, 0.97), Location(3.5, 1, 3.5)));
	objects.push_back(Cube(0, 7, 2, RGBColor(0.96, 1.0, 0.97), Location(3.5, 5, 3.5)));
	objects.push_back(Cube(0, 3.1, 2.1, RGBColor(0.96, 1.0, 0.97), Location(1.5, 3, 3.51)));
	objects.push_back(Cube(0, 3.1, 2.1, RGBColor(0.96, 1.0, 0.97), Location(5.5, 3, 3.51)));

}


Walls::~Walls()
{
}


void Walls::draw()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
}

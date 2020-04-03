#include "Chairs.h"



Chairs::Chairs()
{
	//RIGHT CHAIR
	//LEGS
	objects.push_back(Cube(0.125, 0.125, 0.75, RGBColor(0.54, 0.27, 0.075), Location(3.25, 0.375, -2.5)));
	objects.push_back(Cube(0.125, 0.125, 0.75, RGBColor(0.54, 0.27, 0.075), Location(4, 0.375, -2.5)));
	objects.push_back(Cube(0.125, 0.125, 0.75, RGBColor(0.54, 0.27, 0.075), Location(3.25, 0.375, -3)));
	objects.push_back(Cube(0.125, 0.125, 0.75, RGBColor(0.54, 0.27, 0.075), Location(4, 0.375, -3)));
	//SEAT
	objects.push_back(Cube(0.75, 0.875, 0.125, RGBColor(0.54, 0.27, 0.075), Location(3.625, 0.75, 0.875 - 3.5)));
	//BACK
	objects.push_back(Cube(0.125, 0.125, 1.25, RGBColor(0.54, 0.27, 0.075), Location(3.25, 1.375, -3)));
	objects.push_back(Cube(0.125, 0.125, 1.25, RGBColor(0.54, 0.27, 0.075), Location(3.5, 1.375, -3)));
	objects.push_back(Cube(0.125, 0.125, 1.25, RGBColor(0.54, 0.27, 0.075), Location(3.75, 1.375, -3)));
	objects.push_back(Cube(0.125, 0.125, 1.25, RGBColor(0.54, 0.27, 0.075), Location(4, 1.375, -3)));
	objects.push_back(Cube(0.125, .875, 0.125, RGBColor(0.54, 0.27, 0.075), Location(3.625, 2, -3)));

	//LEFT CHAIR
	//LEGS
	objects.push_back(Cube(0.125, 0.125, 0.75, RGBColor(0.54, 0.27, 0.075), Location(3.25, 0.375, 6 - 3.5)));
	objects.push_back(Cube(0.125, 0.125, 0.75, RGBColor(0.54, 0.27, 0.075), Location(4, 0.375, 6 - 3.5)));
	objects.push_back(Cube(0.125, 0.125, 0.75, RGBColor(0.54, 0.27, 0.075), Location(3.25, 0.375, 6.5 - 3.5)));
	objects.push_back(Cube(0.125, 0.125, 0.75, RGBColor(0.54, 0.27, 0.075), Location(4, 0.375, 6.5 - 3.5)));
	//SEAT
	objects.push_back(Cube(0.75, 0.875, 0.125, RGBColor(0.54, 0.27, 0.075), Location(3.625, 0.75, 6.25 - 3.5)));
	//BACK
	objects.push_back(Cube(0.125, 0.125, 1.25, RGBColor(0.54, 0.27, 0.075), Location(3.25, 1.375, 6.5 - 3.5)));
	objects.push_back(Cube(0.125, 0.125, 1.25, RGBColor(0.54, 0.27, 0.075), Location(3.5, 1.375, 6.5 - 3.5)));
	objects.push_back(Cube(0.125, 0.125, 1.25, RGBColor(0.54, 0.27, 0.075), Location(3.75, 1.375, 6.5 - 3.5)));
	objects.push_back(Cube(0.125, 0.125, 1.25, RGBColor(0.54, 0.27, 0.075), Location(4, 1.375, 6.5 - 3.5)));
	objects.push_back(Cube(0.125, .875, 0.125, RGBColor(0.54, 0.27, 0.075), Location(3.625, 2, 6.5 - 3.5)));

}


Chairs::~Chairs()
{
}


void Chairs::draw()
{
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
}
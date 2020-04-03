#include "Misc.h"



Misc::Misc()
{
	lap = Laptop();
	bowl = FruitBowl();
	d = Drink();
	f = Fork();
	lie = Cake();
	
}


Misc::~Misc()
{
}

void Misc::draw()
{
	lap.draw();
	d.draw();
	f.draw();
	lie.draw();
	bowl.draw();
	for (int i = 0; i < objects.size(); i++)
	{
		objects[i].draw();
	}
	for (int r = 0; r < fruit.size(); r++)
	{
		fruit[r].draw();
	}
}

#pragma once
#include "Cube.h"
#include <vector>
class Drink
{
public:
	std::vector<Cube> objects;
	Drink();
	~Drink();

	void draw();
};
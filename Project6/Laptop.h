#pragma once
#include "Cube.h"
#include <vector>
class Laptop
{
public:
	std::vector<Cube> objects;
	Laptop();
	~Laptop();

	void draw();
};


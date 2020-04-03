#pragma once
#include "Cube.h"
#include <vector>
class Cake
{
public:
	std::vector<Cube> objects;
	Cake();
	~Cake();

	void draw();
};
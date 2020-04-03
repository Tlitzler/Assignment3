#pragma once
#include "Cube.h"
#include <vector>
class Fork
{
public:
	std::vector<Cube> objects;
	Fork();
	~Fork();

	void draw();
};
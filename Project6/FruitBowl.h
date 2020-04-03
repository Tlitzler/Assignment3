#pragma once
#include "Cube.h"
#include "Sphere.h"
#include <vector>
class FruitBowl
{
public:
	std::vector<Cube> objects;
	std::vector<Sphere> fruit;
	FruitBowl();
	~FruitBowl();

	void draw();
};
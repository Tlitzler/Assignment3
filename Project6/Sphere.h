

#include <GL/glut.h>
#include "RGBColor.h"
#include "Location.h"


class Sphere{
	float radius;
	RGBColor color;
	Location location;
public:
	Sphere();

	Sphere(GLfloat r, RGBColor c, Location l);


	//  member set methods
	void setRadius(GLfloat r);
	void setColor(RGBColor);
	void setLocation(Location l);


	//member get methods
	GLfloat getRadius();
	RGBColor getColor();
	Location getLocation();

	//  ball movement function
	void draw();
};
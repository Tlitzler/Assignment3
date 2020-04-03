#include "Sphere.h" 

/*************************************
Name        Sphere.cpp
Purpose:    Sphere class implementation file
Author:     Tyler Litzler, based on Dr. Cooper's modification of https://cs.lmu.edu/~ray/notes/openglexamples/
Date:       4/2/2020
*************************************/


//  Constructors
Sphere::Sphere() {
	{
		radius = 0.0;
		color.setRed(0); color.setGreen(0); color.setBlue(0);
		location.setX(0.0); location.setY(0.0), location.setZ(0.0);
	}
}

Sphere::Sphere(float r, RGBColor c, Location l) {
	radius = r;
	color.setRed(c.getRed()); color.setGreen(c.getGreen()); color.setBlue(c.getBlue());
	location.setX(l.getX()); location.setY(l.getY()), location.setZ(l.getZ());
}


//  member set methods
void Sphere::setRadius(float r) { radius = r; }
void Sphere::setColor(RGBColor c) { color.setRed(c.getRed()); color.setBlue(c.getBlue()); color.setGreen(c.getGreen()); }
void Sphere::setLocation(Location l) { location.setX(l.getX()); location.setY(l.getY()); location.setZ(l.getZ()); }

//  member get methods
float Sphere::getRadius() { return radius; }
RGBColor Sphere::getColor() { return color; }
Location Sphere::getLocation() { return location; }


/*************************************
Function:   update()
Purpose:    changes the current location and possible direction of ball movement
Author:      https://cs.lmu.edu/~ray/notes/openglexamples/
Date:   3/2/2020
*************************************/
void Sphere::draw() {

	GLfloat c[3] = {color.getRed(), color.getGreen(), color.getBlue()};
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, c);
	glTranslated(location.getX(), location.getY(), location.getZ());      
	glutSolidSphere(radius, 30, 30);                                    
	glPopMatrix();                                                      
}
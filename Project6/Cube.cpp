#include "Cube.h"


/*************************************************************************
Class:		Cube class implementation
Purpose:	Create rectangular prism with given parameters
Author: Tyler Litzler
Date:	4/3/2020
************************************************************************/

Cube::Cube()
{
}

Cube::Cube(GLfloat l, GLfloat w, GLfloat h, RGBColor col, Location location) : length(l), width(w), height(h), color(col), loc(location) {}


void Cube::draw()
{
	GLfloat col[3] = { color.getRed(), color.getGreen(), color.getBlue() };
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, col);
	glBegin(GL_QUADS);
	//TOP
	glVertex3f(loc.getX() + width / 2, loc.getY() + height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() + height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() + height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() + width / 2, loc.getY() + height / 2, loc.getZ() + length / 2);
	//BOTTOM
	glVertex3f(loc.getX() + width / 2, loc.getY() - height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() - height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() - height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() + width / 2, loc.getY() - height / 2, loc.getZ() - length / 2);
	//FRONT
	glVertex3f(loc.getX() + width / 2, loc.getY() + height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() + height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() - height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() + width / 2, loc.getY() - height / 2, loc.getZ() + length / 2);
	//BACK
	glVertex3f(loc.getX() + width / 2, loc.getY() - height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() - height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() + height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() + width / 2, loc.getY() + height / 2, loc.getZ() - length / 2);
	//LEFT
	glVertex3f(loc.getX() - width / 2, loc.getY() + height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() + height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() - height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() - width / 2, loc.getY() - height / 2, loc.getZ() + length / 2);
	//RIGHT
	glVertex3f(loc.getX() + width / 2, loc.getY() + height / 2, loc.getZ() - length / 2);
	glVertex3f(loc.getX() + width / 2, loc.getY() + height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() + width / 2, loc.getY() - height / 2, loc.getZ() + length / 2);
	glVertex3f(loc.getX() + width / 2, loc.getY() - height / 2, loc.getZ() - length / 2);

	glEnd();
	glFlush();

}

Cube::~Cube()
{
}

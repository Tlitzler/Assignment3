#include <cmath>
#include <GL/glut.h>

/*************************************************************************
Class:		Camera class
Purpose:	Create a controllable camera to navigate around the scene
Author: https://cs.lmu.edu/~ray/notes/openglexamples/ as modified by Cooper and again by Tyler Litzler
Date:	4/3/2020
************************************************************************/
class Camera {
	GLfloat x, y, z;			// camera height 
	GLfloat deltaY;		// camera height change

public:
	Camera();
	// camera location information
	GLfloat getX();
	GLfloat getY();
	GLfloat getZ();


	// Camera movement
	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
};
#include "Camera.h"

/*************************************************************************
Class:		Camera class implementation
Purpose:	Provide a persepctive on the sceene
Author https://cs.lmu.edu/~ray/notes/openglexamples/ as modified by Cooper and again by Tyler Litzler
Date:	4/3/2020
************************************************************************/
Camera::Camera() {	// Camera andle
	x = 10;
	y = 3;
	z = 0;	// Camera angle change 
	deltaY = 0.2;		// Camera height Change
}

// get camera information
GLfloat Camera::getX() { return x; }
GLfloat Camera::getY() { return y; }
GLfloat Camera::getZ() { return z; }


//Modify camera position
void Camera::moveRight() { z -= deltaY; }
void Camera::moveLeft() { z += deltaY; }
void Camera::moveUp() { y += deltaY; }
void Camera::moveDown() { y -= deltaY; }
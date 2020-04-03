
#include <windows.h>
#include <GL/glut.h>
#include "Location.h"
#include "RGBColor.h"
#include "Camera.h"
#include <cmath>
#include <iostream>
#include <random>
#include "Cube.h"
#include "Room.h"
using namespace std;

/*************************************************************************
Class:		Room Render Implementation
Purpose:	Render a room
Author:     Tyler Litzler, using Dr. Cooper's posted example as a base
Date:		4/3/2020
************************************************************************/

//Camera    
Camera camera;
RGBColor white(1, 1, 1);
GLfloat WHITE[3];
float focusZ = 0.0;
Room r = Room();



/*************************************
Function:   init()
Purpose:    set up 3-D lighting and colors
Author:      https://cs.lmu.edu/~ray/notes/openglexamples/ modified by Tyler Litzler
Date:   4/3/2020
*************************************/
void init() {
	white.toGLfloatArray(WHITE);
	glEnable(GL_DEPTH_TEST);
	//glLightfv(GL_LIGHT0, GL_DIFFUSE, WHITE);
	//glLightfv(GL_LIGHT0, GL_SPECULAR, WHITE);
	//LIGHT SOURCE FROM WINDOW
	float lightPosition[] = { 0, 1, -0.5, 0 };
	glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
	//LIGHT SOURCE FROM OVERHEAD LIGHT
	float lightPosition1[] = { 3, 0, 10, 0 };
	glLightfv(GL_LIGHT0, GL_POSITION, lightPosition1);
	glMaterialfv(GL_FRONT, GL_SPECULAR, WHITE);
	glMaterialf(GL_FRONT, GL_SHININESS, 30);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
}

void createMisc();
void keyboardInput();

/*************************************
Function:   initRoom()
Purpose:    set up the room
Author:     Tyler Litzler
Date:		4/3/2020
*************************************/
void initRoom()
{
	//objects.push_back(Cube(0, 0, 0, RGBColor(1.0, 1.0, 1.0), Location(0, 0, 0)));
}



/*************************************
Function:   keyboardInput()
Purpose:    Manage keyboard input for keys not managed by GLUT
Author:     Tyler Litzler
Date:		4/3/2020
*************************************/
void keyboardInput()
{

	if (GetAsyncKeyState('W') != 0)
	{
		glScalef(1.5f, 1.5f, 1.5f);
	}
	if (GetAsyncKeyState('S') != 0)
	{
		glScalef(.5f, .5f, .5f);
	}
	if (GetAsyncKeyState('Q') != 0)
	{
		focusZ += 0.5;
	}
	if (GetAsyncKeyState('E') != 0)
	{
		focusZ -= 0.5;
	}
}

/*************************************
Function:   display()
Purpose:    display room
Author:     Tyler Litzler
Date:       3/2/2020
*************************************/
void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(camera.getX(), camera.getY(), camera.getZ(),
		0, 0.0, focusZ,
		0.0, 1.0, 0.0);

	keyboardInput();

	r.draw();

	glFlush();
	glutSwapBuffers();
}

/*************************************
Function:   reshape()
Purpose:    scales image to window's aspect ratio
Author:     Tyler Litzler
Date:       4/3/2020
*************************************/
void reshape(GLint w, GLint h) {

	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(40.0, w / h, 1.0, 150.0);
	glMatrixMode(GL_MODELVIEW);
}

/*************************************
Function:   special()
Purpose:    enable user to manipulate camera with arrow keys
Author:     Tyler Litzler
Date:       4/3/2020
*************************************/
void special(int key, int, int) {
	switch (key) {
	case GLUT_KEY_LEFT: camera.moveLeft(); break;
	case GLUT_KEY_RIGHT: camera.moveRight(); break;
	case GLUT_KEY_UP: camera.moveUp(); break;
	case GLUT_KEY_DOWN: camera.moveDown(); break;
	}
	glutPostRedisplay();
}

/*************************************
Function:   timer()
Purpose:    constantly updates the view enabling smoother camera movement
Author:     Tyler Litzler
Date:       4/3/2020
*************************************/
void timer(int v) {
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, timer, v);
}
//GLUT main loop
int main(int argc, char** argv) {

	initRoom();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(80, 80);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Tyler Litzler");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutSpecialFunc(special);
	glutTimerFunc(100, timer, 0);

	init();
	glutMainLoop();
}
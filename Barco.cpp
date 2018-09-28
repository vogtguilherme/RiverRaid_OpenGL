#include "Barco.h"
#include "GL\glew.h"
#include "GL\freeglut.h"

void Barco::criabarco(float _px1, float _px2, float _px3, float _px4, float _py1, float _py2, float _py3, float _py4)
{
	px1 = _px1;
	px2 = _px2;
	px3 = _px3;
	px4 = _px4;

	py1 = _py1;
	py2 = _py2;
	py3 = _py3;
	py4 = _py4;
}

void Barco::desenhabarco()
{
	
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(px1 = 100, py1 = 300);
	glVertex2f(px2 = 600, py2 = 300);
	glVertex2f(px3 = 500, py3 = 100);
	glVertex2f(px4 = 200, py4 = 100);
	glEnd();
}



Barco::Barco()
{

}


Barco::~Barco()
{
}

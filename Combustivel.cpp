#include "Combustivel.h"
#include "GL\glew.h"
#include "GL\freeglut.h"


void Combustivel::criacombustivel(float _x, float _y)
{
<<<<<<< HEAD
	px1 = 0.1f + _x;
	px2 = 0.1f + _x;
	px3= 0.2f + _x;
	px4= 0.4f + _x;
	px5= 0.5f + _x;
	px6= 0.5f + _x;

	py1 = 0.4f + _y;
	py2 = 0.8f + _y;
	py3 = 0.9f + _y;
	py4 = 0.9f + _y;
	py5 = 0.8f + _y;
	py6 = 0.4f + _y;

=======
	px1 = _px1;
	px2 = _px2;
	px3= _px3;
	px4= _px4;
	px5= _px5;
	px6= _px6;

	py1 = _py1;
	py2 = _py2;
	py3 = _py3;
	py4 = _py4;
	py5 = _py5;
	py6 = _py6;
>>>>>>> parent of 3fd7416... mais um
}

void Combustivel::desenhacobustivel()
{
<<<<<<< HEAD
	if (paradowun)
	{
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2f(px1 = 0.1f, py1 = 0.4f);
		glVertex2f(px2 = 0.1f, py2 = 0.8f);
		glVertex2f(px3 = 0.2f, py3 = 0.9f);
		glVertex2f(px4 = 0.4f, py4 = 0.9f);
		glVertex2f(px5 = 0.5f, py5 = 0.8f);
		glVertex2f(px6 = 0.5f, py6 = 0.4f);
		glEnd();
	}
	
}

void Combustivel::movecombustivel(float _x, float _y)
{
	if (paradowun)extremodowm = py1 + 0.4f;
	else extremodowm = py3 - 0.9f;

	if(paradowun)extremoUP = py1 - 0.4f;
	else extremoUP = py3 + 0.9f;
=======
>>>>>>> parent of 3fd7416... mais um

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(px1 = 0.1f, py1 = 0.4f);
	glVertex2f(px2 = 0.1f, py2 = 0.8f);
	glVertex2f(px3 = 0.2f, py3 = 0.9f);
	glVertex2f(px4 = 0.4f, py4 = 0.9f);
	glVertex2f(px5 = 0.5f, py5 = 0.8f);
	glVertex2f(px6 = 0.5f, py6 = 0.4f);
	glEnd();
}

Combustivel::Combustivel()
{


}


Combustivel::~Combustivel()
{
}

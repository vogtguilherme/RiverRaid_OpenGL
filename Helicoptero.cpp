#include "Helicoptero.h"
#include "GL\glew.h"
#include "GL\freeglut.h"
void Helicoptero::Criahelecoptero(float _x, float _y)
{
	Px1 = 0.3f + _x;
	Px2 = 0.3f + _x;
	Px3 = 0.5f + _x;
	Px4 = 0.5f + _x;
	Px5 = 0.1f + _x;
	Px6 = 0.1f + _x;
	Px7 = 1.0f + _x;
	Px8 = 1.0f + _x;
	Px9 = 0.6f + _x;
	Px10 = 0.6f + _x;
	Px11 = 1.0f + _x;
	Px12 = 1.0f + _x;
	Px13 = 0.8f + _x;
	Px14 = 0.7f + _x;
	Px15 = 0.4f + _x;

	Py1 = 0.1f + _y;
	Py2 = 0.3f + _y;
	Py3 = 0.3f + _y;
	Py4 = 0.5f + _y;
	Py5 = 0.5f + _y;
	Py6 = 0.7f + _y;
	Py7 = 0.7f + _y;
	Py8 = 0.5f + _y;
	Py9 = 0.5f + _y;
	Py10 = 0.3f + _y;
	Py11 = 0.3f + _y;
	Py12 = 0.1f + _y;
	Py13 = 0.1f + _y;
	Py14 = 0.0f + _y;
	Py15 = 0.0f + _y;
}
void Helicoptero::Desenhahelecoptyero()
{
	if (paraLeft)
	{
		//helice
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(Px5 + 0.1f, Py5 + 0.5f);
		glVertex2f(Px6 + 0.1f, Py6 + 0.7f);
		glVertex2f(Px7 + 1.0f, Py7 + 0.7f);
		glVertex2f(Px8 + 1.0f, Py8 + 0.5f);
		glEnd();

		//tronco
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(Px3 + 0.5f, Py3 + 0.3f);
		glVertex2f(Px4 + 0.5f, Py4 + 0.5f);
		glVertex2f(Px9 + 0.6f, Py9 + 0.5f);
		glVertex2f(Px10 + 0.6f, Py10 + 0.3f);
		glEnd();

		//corpo
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(Px1 + 0.3f, Py1 + 0.1f);
		glVertex2f(Px2 + 0.3f, Py2 + 0.3f);
		glVertex2f(Px11 + 1.0f, Py11 + 0.3f);
		glVertex2f(Px12 + 1.0f, Py12 + 0.1f);
		glVertex2f(Px13 + 0.8f, Py13 + 0.1f);
		glVertex2f(Px14 + 0.7f, Py14 + 0.0f);
		glVertex2f(Px15 + 0.4f, Py15 + 0.0f);
		glVertex2f(Px1 + 0.3f, Py1 + 0.1f);
		glEnd();
	}
	else
	{		
		//helice
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(Px5 - 0.1f, Py5 + 0.5f);
		glVertex2f(Px6 - 0.1f, Py6 + 0.7f);
		glVertex2f(Px7 - 1.0f, Py7 + 0.7f);
		glVertex2f(Px8 - 1.0f, Py8 + 0.5f);
		glEnd();

		//tronco
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(Px3 - 0.5f, Py3 + 0.3f);
		glVertex2f(Px4 - 0.5f, Py4 + 0.5f);
		glVertex2f(Px9 - 0.6f, Py9 + 0.5f);
		glVertex2f(Px10 - 0.6f, Py10 + 0.3f);
		glEnd();

		//corpo
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(Px1 - 0.3f, Py1 + 0.1f);
		glVertex2f(Px2 - 0.3f, Py2 + 0.3f);
		glVertex2f(Px11 - 1.0f, Py11 + 0.3f);
		glVertex2f(Px12 - 1.0f, Py12 + 0.1f);
		glVertex2f(Px13 - 0.8f, Py13 + 0.1f);
		glVertex2f(Px14 - 0.7f, Py14 + 0.0f);
		glVertex2f(Px15 - 0.4f, Py15 + 0.0f);
		glVertex2f(Px1 - 0.3f, Py1 + 0.1f);
		glEnd();
	}
}

void Helicoptero::MoveHelecoptero(float _x, float _y)
{
	if(paraLeft) extremoLeft = Px6 + 0.1f;
	else extremoLeft = Px7 - 1.0f;

	if (paraLeft) extremoRight = Px7 + 1;
	else extremoRight = Px6 - 0.1;

	sizeX = 0.9f;
	sizeY = 0.7f;

	Px1 += _x;
	Px2 += _x;
	Px3 += _x;
	Px4 += _x;
	Px5 += _x;
	Px6 += _x;
	Px7 += _x;
	Px8 += _x;
	Px9 += _x;
	Px10 += _x;
	Px11 += _x;
	Px12 += _x;
	Px13 += _x;
	Px14 += _x;
	Px15 += _x;


	Py1 += _y;
	Py2 += _y;
	Py3 += _y;
	Py4 += _y;
	Py5 += _y;
	Py6 += _y;
	Py7 += _y;
	Py8 += _y;
	Py9 += _y;
	Py10 += _y;
	Py11 += _y;
	Py12 += _y;
	Py13 += _y;
	Py14 += _y;
	Py15 += _y;
}

Helicoptero::Helicoptero()
{
}


Helicoptero::~Helicoptero()
{
}

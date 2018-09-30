#include "Barco.h"
#include "GL\glew.h"
#include "GL\freeglut.h"


void Barco::CriaBarco(float _x, float _y)
{
	px1 = 0.1f + _x;
	px2 = 0.6f + _x;
	px3 = 0.5f + _x;
	px4 = 0.2f + _x;

	py1 = 0.3f + _y;
	py2 = 0.3f + _y;
	py3 = 0.1f + _y;
	py4 = 0.1f + _y;
}
//void Barco::criabarco(float _px1, float _px2, float _px3, float _px4, float _py1, float _py2, float _py3, float _py4)
//{
//	px1 = _px1;
//	px2 = _px2;
//	px3 = _px3;
//	px4 = _px4;
//
//	py1 = _py1;
//	py2 = _py2;
//	py3 = _py3;
//	py4 = _py4;
//}

void Barco::desenhabarco()
{
	if (paraLeft) {

		//base
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px1 + 0.1f, py1 + 0.3f);
		glVertex2f(px2 + 0.6f, py2 + 0.3f);
		glVertex2f(px3 + 0.5f, py3 + 0.1f);
		glVertex2f(px4 + 0.2f, py4 + 0.1f);
		glEnd();

		//tronco
		glColor3f(0.74, 0.56, 0.56);
		glBegin(GL_QUADS);
		glVertex2f(px1 + 0.3f, py1 + 0.3f);
		glVertex2f(px2 + 0.3f, py2 + 0.5f);
		glVertex2f(px3 + 0.4f, py3 + 0.5f);
		glVertex2f(px4 + 0.4f, py4 + 0.3f);
		glEnd();

		//velas
		glColor3f(0.75, 1.0, 0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(px1 + 0.4f, py1 + 0.3f);
		glVertex2f(px2 + 0.4f, py2 + 0.5f);
		glVertex2f(px3 + 0.6f, py3 + 0.3f);
		glEnd();

	}
	else
	{
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px1 - 0.1f, py1 + 0.3f);
		glVertex2f(px2 - 0.6f, py2 + 0.3f);
		glVertex2f(px3 - 0.5f, py3 + 0.1f);
		glVertex2f(px4 - 0.2f, py4 + 0.1f);
		glEnd();
	}
	
}

void Barco::MoveBarco(float _x, float _y)
{
	if (paraLeft) extremoLeft = px1 + 0.1f;
	else extremoLeft = px2 - 0.6f;

	if (paraLeft) extremoRight = px2 + 0.6;
	else extremoRight = px1 - 0.1;


	px1 += _x;
	px2 += _x;
	px3 += _x;
	px4 += _x;

	py1 += _y;
	py2 += _y;
	py3 += _y;
	py4 += _y;

}



Barco::Barco()
{

}


Barco::~Barco()
{
}

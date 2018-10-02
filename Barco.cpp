#include "Barco.h"
#include "GL\glew.h"
#include "GL\freeglut.h"


void Barco::CriaBarco(float _x, float _y)
{
	px = 0.1f + _x;
	py = 0.3f + _y;
}
void Barco::desenhabarco()
{
	if (paraLeft) {

		//base
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px + 0.1f, py + 0.3f);
		glVertex2f(px + 0.6f, py + 0.3f);
		glVertex2f(px + 0.5f, py + 0.1f);
		glVertex2f(px + 0.2f, py + 0.1f);
		glEnd();

		//tronco
		glColor3f(0.74, 0.56, 0.56);
		glBegin(GL_QUADS);
		glVertex2f(px + 0.3f, py + 0.3f);
		glVertex2f(px + 0.3f, py + 0.5f);
		glVertex2f(px + 0.4f, py + 0.5f);
		glVertex2f(px + 0.4f, py + 0.3f);
		glEnd();

		//velas
		glColor3f(0.75, 1.0, 0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(px + 0.4f, py + 0.3f);
		glVertex2f(px + 0.4f, py + 0.5f);
		glVertex2f(px + 0.6f, py + 0.3f);
		glEnd();

	}
	else
	{
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px - 0.1f, py + 0.3f);
		glVertex2f(px - 0.6f, py + 0.3f);
		glVertex2f(px - 0.5f, py + 0.1f);
		glVertex2f(px - 0.2f, py + 0.1f);
		glEnd();

		//tronco
		glColor3f(0.74, 0.56, 0.56);
		glBegin(GL_QUADS);
		glVertex2f(px - 0.3f, py + 0.3f);
		glVertex2f(px - 0.3f, py + 0.5f);
		glVertex2f(px - 0.4f, py + 0.5f);
		glVertex2f(px - 0.4f, py + 0.3f);
		glEnd();
	}
	
}

void Barco::MoveBarco(float _x, float _y)
{
	if (paraLeft) extremoLeft = px + 0.1f;
	else extremoLeft = px - 0.6f;

	if (paraLeft) extremoRight = px + 0.6;
	else extremoRight = px - 0.1;


	extremoUp = py + 0.1f;

	sizeX = 0.5f;
	sizeY = 0.4f;

	px += _x;

	py += _y;
}



Barco::Barco()
{

}


Barco::~Barco()
{
}

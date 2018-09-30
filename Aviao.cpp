#include "Aviao.h"
#include "GL\glew.h"
#include "GL\freeglut.h"


void Aviao::CriaAviao(float _x, float _y)
{
	//bico
	Px1 = 0.1f + _x;
	Px2 = 0.2f + _x;
	Px3 = 0.2f + _x;
	//bico
	Py1 = 0.3f + _y;
	Py2 = 0.4f + _y;
	Py3 = 0.2f + _y;

	//asa esquerda
	Px4 = 0.3f + _x;
	Px5 = 0.5f + _x;
	Px6 = 0.6f + _x;
	Px7 = 0.4f + _x;
	//asa esquerda
	Py4 = 0.2f + _y;
	Py5 = 0.2f + _y;
	Py6 = 0.1f + _y;
	Py7 = 0.1f + _y;


	//asa direita
	Px8 = 0.3f + _x;
	Px9 = 0.4f + _x;
	Px10 = 0.6f + _x;
	Px11 = 0.5f + _x;
	//asa direita
	Py8 = 0.4f + _y;
	Py9 = 0.5f + _y;
	Py10 = 0.5f + _y;
	Py11 = 0.4f + _y;

	//corpo
	Px12 = 0.2f + _x;
	Px13 = 0.2f + _x;
	Px14 = 0.7f + _x;
	Px15 = 0.7f + _x;
	//corpo
	Py12 = 0.2f + _y;
	Py13 = 0.4f + _y;
	Py14 = 0.4f + _y;
	Py15 = 0.2f + _y;

	//calda
	Px16 = 0.7f + _x;
	Px17 = 0.7f + _x;
	Px18 = 0.8f + _x;
	Px19 = 0.9f + _x;
	Px20 = 0.9 + _x;
	//calda
	Py16 = 0.2f + _y;
	Py17 = 0.4f + _y;
	Py18 = 0.5f + _y;
	Py19 = 0.5f + _y;
	Py20 = 0.5f + _y;
}

void Aviao::DesenhaAviao()
{
	//bico
	glColor3f(0.7, 0.13, 0.13);
	glBegin(GL_TRIANGLES);
	glVertex2f(Px1 = 0.1f, Py1 = 0.3f);
	glVertex2f(Px2 = 0.2f, Py2 = 0.4f);
	glVertex2f(Px3 = 0.2f, Py3 = 0.2f);
	glEnd();

	//asa esquerda
	glColor3f(0.7, 0.13, 0.13);
	glBegin(GL_QUADS);
	glVertex2f(Px4 = 0.3f, Py4 = 0.2f);
	glVertex2f(Px5 = 0.5f, Py5 = 0.2f);
	glVertex2f(Px6 = 0.6f, Py6 = 0.1f);
	glVertex2f(Px7 = 0.4f, Py7 = 0.1f);
	glEnd();

	//asa direita
	glColor3f(0.7, 0.13, 0.13);
	glBegin(GL_QUADS);
	glVertex2f(Px8 = 0.3f, Py8 = 0.4f);
	glVertex2f(Px9 = 0.4f, Py9 = 0.5f);
	glVertex2f(Px10 = 0.6f, Py10 = 0.5f);
	glVertex2f(Px11 = 0.5f, Py11 = 0.4f);
	glEnd();

	//corpo
	glColor3f(0.7, 0.13, 0.13);
	glBegin(GL_QUADS);
	glVertex2f(Px12 = 0.2f, Py12 = 0.2f);
	glVertex2f(Px13 = 0.2f, Py13 = 0.4f);
	glVertex2f(Px14 = 0.7f, Py14 = 0.4f);
	glVertex2f(Px15= 0.7f, Py15 = 0.2f);
	glEnd();

	//calda
	glColor3f(0.7, 0.13, 0.13);
	glBegin(GL_QUADS);
	glVertex2f(Px16 = 0.7f, Py16 = 0.2f);
	glVertex2f(Px17 = 0.7f, Py17 = 0.4f);
	glVertex2f(Px18 = 0.8f, Py18 = 0.5f);
	glVertex2f(Px19 = 0.9f, Py19 = 0.5f);
	glVertex2f(Px20 = 0.9f, Py20 = 0.5f);
	glEnd();
}

Aviao::Aviao()
{
}


Aviao::~Aviao()
{
}

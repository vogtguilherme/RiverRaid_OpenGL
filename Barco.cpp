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
	//glColor3f(1.0, 0.0, 0.0);
	//glBegin(GL_POLYGON);
	//glVertex2f(px1 + 101, py1 - 3);
	//glVertex2f(px2 - 25, py2 - 3);
	//glVertex2f(px2 - 20, py2 - 5);
	//glVertex2f(px3 - 20, py3 + 5);
	//glVertex2f(px3 - 25, py3 + 3);
	//glVertex2f(px4 + 101, py4 + 3);
	//glEnd();

	///*Caminhao: Parte da Frente cima 1*/
	//glColor3f(1.0, 0.0, 0.0);
	//glBegin(GL_LINES);
	//glVertex2f(px1 + 110, py1 - 10);
	//glVertex2f(px2 - 30, py2 - 10);
	//glEnd();

	///*Caminhao: Parte da Frente cima 2*/
	//glColor3f(1.0, 0.0, 0.0);
	//glBegin(GL_LINES);
	//glVertex2f(px3 - 30, py3 + 10);
	//glVertex2f(px4 + 110, py4 + 10);
	//glEnd();

	///*Caminhao: Retrovisor 1*/
	//glLineWidth(2);
	//glColor3f(1.0, 0.0, 0.0);
	//glBegin(GL_LINES);
	//glVertex2f(px1 + 126, py1 - 1);
	//glVertex2f(px1 + 126, py1 - 4);
	//glEnd();

	///*Caminhao: Retrovisor 2*/
	//glLineWidth(2);
	//glColor3f(0.6, 0.6, 0.6);
	//glBegin(GL_LINES);
	//glVertex2f(px1 + 126, py4 + 4);
	//glVertex2f(px1 + 126, py4 + 1);
	//glEnd();

	///*Caminhao: Vidro 1*/
	//glColor3f(0.6, 0.6, 0.6);
	//glBegin(GL_POLYGON);
	//glVertex2f(px1 + 126, py1 - 5);
	//glVertex2f(px2 - 24, py2 - 5);
	//glVertex2f(px2 - 20, py2 - 6);
	//glVertex2f(px3 - 20, py3 + 6);
	//glVertex2f(px3 - 24, py3 + 5);
	//glVertex2f(px4 + 126, py4 + 5);
	//glEnd();

	///*Caminhao: Parte da Frente 2*/
	//glColor3f(0.6, 0.6, 0.6);
	//glBegin(GL_POLYGON);
	//glVertex2f(px1 + 130, py1 - 5);
	//glVertex2f(px2 - 6, py2 - 6);
	//glVertex2f(px2 - 3, py2 - 7);
	//glVertex2f(px3 - 3, py3 + 7);
	//glVertex2f(px3 - 6, py3 + 6);
	//glVertex2f(px4 + 130, py4 + 5);
	//glEnd();

	///*Caminhao: Parte de tras 1*/
	//glColor3f(0.6, 0.6, 0.6);
	//glBegin(GL_QUADS);
	//glVertex2f(px1 + 1, py1 - 1);
	//glVertex2f(px2 - 50, py2 - 1);
	//glVertex2f(px3 - 50, py3 + 1);
	//glVertex2f(px4 + 1, py4 + 1);
	//glEnd();

	///*Caminhao: Parte de tras 2*/
	//glColor3f(0.6, 0.6, 0.6);
	//glBegin(GL_QUADS);
	//glVertex2f(px1 + 3, py1 - 3);
	//glVertex2f(px2 - 52, py2 - 3);
	//glVertex2f(px3 - 52, py3 + 3);
	//glVertex2f(px4 + 3, py4 + 3);
	//glEnd();

	///*Caminhao: Parte de traz cima 1*/
	//glColor3f(0.5, 0.5, 0.5);
	//glBegin(GL_LINES);
	//glVertex2f(px1 + 2, py1 - 9);
	//glVertex2f(px2 - 52, py2 - 9);
	//glEnd();

	///*Caminhao: Parte de traz cima 2*/
	//glColor3f(0.5, 0.5, 0.5);
	//glBegin(GL_LINES);
	//glVertex2f(px1 + 2, py1 - 31);
	//glVertex2f(px2 - 52, py2 - 31);
	//glEnd();


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

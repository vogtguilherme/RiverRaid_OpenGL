#include "Muro.h"


void Muro::Criamuro()
{
	Px1 = 3.0f;
	Px2 = 3.0f;
	Px3 = 5.0f;
	Px4 = 5.0f;

	Py1 = -5.0f;
	Py2 = 5.0f;
	Py3 = 5.0f;
	Py4 = -5.0f;

	extremoLeft = -Px1;
	extremoRight = Px1;
}

void Muro::Desenhamuro()
{
	//LADO DIREITO
	glColor3f(0.43, 0.21, 0.1);
	//glBegin(GL_LINE_LOOP);
	glBegin(GL_QUADS);
	glVertex2f(Px1, Py1);
	glVertex2f(Px2, Py2);
	glVertex2f(Px3, Py3);
	glVertex2f(Px4, Py4);
	glEnd();

	//LADO ESQUERDO
	glColor3f(0.43, 0.21, 0.1);
	//glBegin(GL_LINE_LOOP);
	glBegin(GL_QUADS);
	glVertex2f(-Px1, Py1);
	glVertex2f(-Px2, Py2);
	glVertex2f(-Px3, Py3);
	glVertex2f(-Px4, Py4);
	glEnd();

}
Muro::Muro()
{
}


Muro::~Muro()
{
}

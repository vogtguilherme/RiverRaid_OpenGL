#include "Muro.h"


void Muro::Criamuro(float x, float y)
{
	Px1 = 3.0f + x;
	Px2 = 3.0f + x;
	Px3 = 5.0f + x;
	Px4 = 5.0f + x;

	Py1 = 0.0f + y;
	Py2 = 5.0f + y;
	Py3 = 5.0f + y;
	Py4 = 0.0f + y;

}

void Muro::Desenhamuro()
{
	////LADO DIREITO
	//glColor3f(0.43, 0.21, 0.1);
	////glBegin(GL_LINE_LOOP);
	//glBegin(GL_QUADS);
	//glVertex2f(Px1 + 3.0f, Py1 -5.0f);
	//glVertex2f(Px2 + 3.0f, Py2 + 5.0f);
	//glVertex2f(Px3 + 5.0f, Py3 + 5.0f);
	//glVertex2f(Px4 + 5.0f, Py4 - 5.0f);
	//glEnd();

	//LADO ESQUERDO
	glColor3f(0.43, 0.21, 0.1);
	//glBegin(GL_LINE_LOOP);
	glBegin(GL_QUADS);
	glVertex2f(Px1 - 3.0f, Py1 + 5.0f);
	glVertex2f(Px2 - 3.0f, Py2 - 5.0f);
	glVertex2f(Px3 - 5.0f, Py3 - 5.0f);
	glVertex2f(Px4 - 5.0f, Py4 + 5.0f);
	glEnd();

}
Muro::Muro()
{
}


Muro::~Muro()
{
}

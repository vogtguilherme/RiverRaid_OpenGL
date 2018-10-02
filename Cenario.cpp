#include "Cenario.h"

Cenario::Cenario()
{	
}

Cenario::~Cenario()
{
}

void Cenario::addVertex(float x, float y)
{
	pontos.push_back(posicoes(x, y));
}

void Cenario::desenharElemento(float red, float green, float blue)
{
	glPushMatrix();

	glColor3f(red, green, blue);
	
	glBegin(GL_POLYGON);

	for (int i = 0; i < pontos.size(); i++)
	{
		glVertex2f(pontos[i].x, pontos[i].y);
	}
	glEnd();
	glPopMatrix();
}

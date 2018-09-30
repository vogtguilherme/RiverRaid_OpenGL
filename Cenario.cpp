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

void Cenario::desenharElemento(int vertices, float red, float green, float blue)
{
	glPushMatrix();

	glColor3f(red, green, blue);
	if (vertices == 4)
		glBegin(GL_QUADS);
	else if (vertices == 3)
		glBegin(GL_TRIANGLES);
	else
		glBegin(GL_LINE);
	for (int i = 0; i < pontos.size(); i++)
	{
		glVertex2f(pontos[i].x, pontos[i].y);
	}
	glEnd();
	glPopMatrix();
}

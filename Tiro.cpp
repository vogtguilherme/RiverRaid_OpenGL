#include "Tiro.h"



void Tiro::CriaTiro(float x, float y)
{

	px =0.4f+ x;
	py = 1.3f+y;

}

void Tiro::DesenhaTiro()
{

	if (atirando)
	{
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2f(px + 0.4f, py + 1.3f);
		glVertex2f(px + 0.4f, py + 1.4f);
		glVertex2f(px + 0.5f, py + 1.4f);
		glVertex2f(px + 0.5f, py + 1.3f);
		glEnd();
	}
}

void Tiro::MoveBala(float x,float y)
{
	if (atirando) tirocima = py + 1.4f;
	
	
	sizeY = 0.1f;

	py += y;
}

Tiro::Tiro()
{
}


Tiro::~Tiro()
{
}

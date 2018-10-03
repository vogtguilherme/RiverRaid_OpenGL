#include "Tiro.h"

void Tiro::CriaTiro(Jato player)
{
	px = player.pontos.at(0).x;
	py = player.pontos.at(0).y;

	collider.deslocarElemento(px, -4.5f);
}

void Tiro::criapontostiro(float _px1, float _px2, float _px3, float _px4, float _py1, float _py2, float _py3, float _py4)
{
}

void Tiro::DesenhaTiro()
{
	if (atirando)
	{
		glColor3f(1.0f, 1.0f, 0.0f);
		glBegin(GL_QUADS);

		glVertex2f(px + 0.0f / 2, py + 0.5f /2);
		glVertex2f(px + 0.15f / 2, py + 0.5f / 2);
		glVertex2f(px + 0.15f / 2, py + 0.0f / 2);
		glVertex2f(px + 0.0f / 2, py + 0.0f / 2);
		
		glEnd();

		collider.desenharElemento(1.0f, 1.0f, 1.0f, 1.0f);
	}	
}

void Tiro::MoveBala(float x,float y)
{
	if (atirando) 
		tirocima = py + 1.4f;	
	
	sizeY = 0.1f;

	py += y;

	collider.deslocarElemento(0, y);
}

void Tiro::Colisao(Helicoptero _helicoptero, Barco _barco)
{
	if (atirando)
	{
		
	}
}



Tiro::Tiro()
{
	collider.addVertex(px + 0.0f / 2, py + 0.5f / 2);
	collider.addVertex(px + 0.15f / 2, py + 0.5f / 2);
	collider.addVertex(px + 0.15f / 2, py + 0.0f / 2);
	collider.addVertex(px + 0.0f / 2, py + 0.0f / 2);
}


Tiro::~Tiro()
{
}

#include "Tiro.h"



void Tiro::CriaTiro(Player player)
{

	px=player.Px1+ 0.0f ;
	py =player.Py1 +0.0f;

}

void Tiro::criapontostiro(float _px1, float _px2, float _px3, float _px4, float _py1, float _py2, float _py3, float _py4)
{


}

void Tiro::DesenhaTiro()
{

	if (atirando)
	{
		glColor3f(1.0, 0.15, 0.25);
		glBegin(GL_QUADS);
		glVertex2f(px + 0.4f, py + 1.3f);
		glVertex2f(px + 0.4f, py + 1.4f);
		glVertex2f(px + 0.5f, py + 1.4f);
		glVertex2f(px + 0.5f, py + 1.3f);
		glEnd();
	}
	else
	{

	}
}

void Tiro::MoveBala(float x,float y)
{
	if (atirando) tirocima = py + 1.4f;
	
	
	sizeY = 0.1f;

	py += y;
}

void Tiro::Colisao(Helicoptero _helicoptero, Barco _barco)
{
	if (atirando)
	{
		
	}


}



Tiro::Tiro()
{
}


Tiro::~Tiro()
{
}

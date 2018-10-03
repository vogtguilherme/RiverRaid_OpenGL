#include "Helicoptero.h"

void Helicoptero::Criahelecoptero(float _x, float _y)
{
	px =  _x;
	
	py =  _y;
	
}
void Helicoptero::Desenhahelecoptyero()
{
	if (paraLeft)
	{
		//helice
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px + 0.1f, py + 0.5f);
		glVertex2f(px + 0.1f, py + 0.7f);
		glVertex2f(px + 1.0f, py + 0.7f);
		glVertex2f(px + 1.0f, py + 0.5f);
		glEnd();

		//tronco
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px + 0.5f, py + 0.3f);
		glVertex2f(px + 0.5f, py + 0.5f);
		glVertex2f(px + 0.6f, py + 0.5f);
		glVertex2f(px + 0.6f, py + 0.3f);
		glEnd();

		//corpo
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px + 0.3f, py + 0.1f);
		glVertex2f(px + 0.3f, py + 0.3f);
		glVertex2f(px + 1.0f, py + 0.3f);
		glVertex2f(px + 1.0f, py + 0.1f);
		glVertex2f(px + 0.8f, py + 0.1f);
		glVertex2f(px + 0.7f, py + 0.0f);
		glVertex2f(px + 0.4f, py + 0.0f);
		glVertex2f(px + 0.3f, py + 0.1f);
		glEnd();
	}
	else
	{		
		//helice
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px - 0.1f, py + 0.5f);
		glVertex2f(px - 0.1f, py + 0.7f);
		glVertex2f(px - 1.0f, py + 0.7f);
		glVertex2f(px - 1.0f, py + 0.5f);
		glEnd();

		//tronco
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px - 0.5f, py + 0.3f);
		glVertex2f(px - 0.5f, py + 0.5f);
		glVertex2f(px - 0.6f, py + 0.5f);
		glVertex2f(px - 0.6f, py + 0.3f);
		glEnd();

		//corpo
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(px - 0.3f, py + 0.1f);
		glVertex2f(px - 0.3f, py + 0.3f);
		glVertex2f(px - 1.0f, py + 0.3f);
		glVertex2f(px - 1.0f, py + 0.1f);
		glVertex2f(px - 0.8f, py + 0.1f);
		glVertex2f(px - 0.7f, py + 0.0f);
		glVertex2f(px - 0.4f, py + 0.0f);
		glVertex2f(px - 0.3f, py + 0.1f);
		glEnd();
	}
}

void Helicoptero::MoveHelecoptero(float _x, float _y)
{
	if(paraLeft) extremoLeft = px + 0.1f;
	else extremoLeft = px - 1.0f;

	if (paraLeft) extremoRight = px + 1;
	else extremoRight = px - 0.1;

	sizeX = 0.9f;
	sizeY = 0.7f;

	px += _x;

	py += _y;
	
}

void Helicoptero::detectou(Bloco colisao, float velocidade)
{

	if (extremoLeft <= colisao.extremoLeft && paraLeft == true)
	{
		paraLeft = false;
		MoveHelecoptero(sizeX, 0);
	}
	else if (extremoRight >= colisao.extremoRight && paraLeft == false)
	{
		paraLeft = true;
		MoveHelecoptero(-sizeX, 0);
	}

	if (paraLeft == true) MoveHelecoptero(-velocidade * 1.5, 0);
	else if (paraLeft == false) MoveHelecoptero(velocidade * 1.5, 0);
}

Helicoptero::Helicoptero()
{

	Colider.addVertex(0.0f,0.8f);
	Colider.addVertex(1.1f,0.8f);
	Colider.addVertex(1.1f,0.0);
	Colider.addVertex(0.0f,0.1f);


}


Helicoptero::~Helicoptero()
{
}

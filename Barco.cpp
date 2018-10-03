#include "Barco.h"



void Barco::CriaBarco(float _x, float _y)
{
	px = _x;
	py = _y;
}
void Barco::desenhabarco()
{
	if (destruiu)
	{
		if (paraLeft)
		{
			//base
			glColor3f(1.0, 0.0, 0.0);
			glBegin(GL_QUADS);
			glVertex2f(px + 0.1f, py + 0.3f);
			glVertex2f(px + 0.6f, py + 0.3f);
			glVertex2f(px + 0.5f, py + 0.1f);
			glVertex2f(px + 0.2f, py + 0.1f);
			glEnd();

			//tronco
			glColor3f(0.74, 0.56, 0.56);
			glBegin(GL_QUADS);
			glVertex2f(px + 0.3f, py + 0.3f);
			glVertex2f(px + 0.3f, py + 0.5f);
			glVertex2f(px + 0.4f, py + 0.5f);
			glVertex2f(px + 0.4f, py + 0.3f);
			glEnd();

			//velas
			glColor3f(0.75, 1.0, 0.0);
			glBegin(GL_TRIANGLES);
			glVertex2f(px + 0.4f, py + 0.3f);
			glVertex2f(px + 0.4f, py + 0.5f);
			glVertex2f(px + 0.6f, py + 0.3f);
			glEnd();
		}
		else
		{
			glColor3f(1.0, 0.0, 0.0);
			glBegin(GL_QUADS);
			glVertex2f(px - 0.1f, py + 0.3f);
			glVertex2f(px - 0.6f, py + 0.3f);
			glVertex2f(px - 0.5f, py + 0.1f);
			glVertex2f(px - 0.2f, py + 0.1f);
			glEnd();

			//tronco
			glColor3f(0.74, 0.56, 0.56);
			glBegin(GL_QUADS);
			glVertex2f(px - 0.3f, py + 0.3f);
			glVertex2f(px - 0.3f, py + 0.5f);
			glVertex2f(px - 0.4f, py + 0.5f);
			glVertex2f(px - 0.4f, py + 0.3f);
			glEnd();
		}

	}
	else
	{

	}

}

void Barco::MoveBarco(float _x, float _y)
{
	if (paraLeft) extremoLeft = px + 0.1f;
	else extremoLeft = px - 0.6f;

	if (paraLeft) extremoRight = px + 0.6;
	else extremoRight = px - 0.1;

	
	

	sizeX = 0.5f;
	sizeY = 0.4f;

	px += _x;

	py += _y;
}

void Barco::detectar(Bloco colisao,float velocidade)
{
	if (extremoLeft <= colisao.extremoLeft && paraLeft == true)
	{
		paraLeft = false;
		MoveBarco(sizeX, 0);

	}
	else if (extremoRight >= colisao.extremoRight && paraLeft == false)
	{
		paraLeft = true;
		MoveBarco(-sizeX, 0);
	}

	if (paraLeft == true) 
	{
		MoveBarco(-velocidade * 1.0, 0);


	}
		
	else if (paraLeft == false)MoveBarco(velocidade * 1.0, 0);


}



Barco::Barco()
{
	colisor.addVertex(0.0f, 0.5f);
	colisor.addVertex(0.6f, 0.5f);
	colisor.addVertex(0.6f, 0.1f);
	colisor.addVertex(0.0f, 0.1f);

	//colisor.deslocarElemento( - 4.5f, 0.0f);
	//px0 py5 ponto o
	//px6 py5 ponto 1
	//px6 py1 ponto 2
	//px0 py1 ponto 3

	
}


Barco::~Barco()
{
}

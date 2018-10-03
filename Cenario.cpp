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
	//glTranslatef(800.f / 2.f, 600.f / 2.f, 0.f);

	debugPosicoesVertices();
}

void Cenario::detectarColisao(Cenario objeto)
{
	if ((this->pontos.at(0).x >= objeto.pontos.at(0).x && this->pontos.at(0).x <= objeto.pontos.at(1).x) || 
		(this->pontos.at(2).x >= objeto.pontos.at(0).x && this->pontos.at(2).x <= objeto.pontos.at(1).x))
	{
		if ((this->pontos.at(0).y >= objeto.pontos.at(3).y && this->pontos.at(0).y <= objeto.pontos.at(0).y) ||
			(this->pontos.at(2).y >= objeto.pontos.at(3).y && this->pontos.at(2).y <= objeto.pontos.at(0).y))	
		{
			cout << "GLORIA A DEUX" << endl;

			//return true;
		}
		else
		{
			cout << "NAO COLIDIU" << endl;

			//return false;
		}
	}
	else
	{
		cout << "NAO COLIDIU" << endl;

		//return false;
	}
}

void Cenario::debugPosicoesVertices()
{
	/*for (int i = 0; i < pontos.size; i++)
	{
		std::cout << "Ponto" << i << ": X = " << pontos[i].x << ", Y = " << pontos[i].y << std::endl;
	}*/
}

void Cenario::deslocarElemento(float eixoX, float eixoY)
{
	glPushMatrix();

	glTranslatef(eixoX, eixoY, 0);

	glPopMatrix();
}

#include "Objeto.h"

Objeto::Objeto()
{
}

Objeto::~Objeto()
{
}

void Objeto::addVertex(float x, float y)
{
	pontos.push_back(posicoes(x, y));
}

void Objeto::desenharElemento(float red, float green, float blue, float alpha)
{
	glPushMatrix();

	glColor4f(red, green, blue, alpha);
	
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

bool Objeto::detectarColisao(Objeto objeto)
{
	if ((this->pontos.at(0).x >= objeto.pontos.at(0).x && this->pontos.at(0).x <= objeto.pontos.at(1).x) || 
		(this->pontos.at(2).x >= objeto.pontos.at(0).x && this->pontos.at(2).x <= objeto.pontos.at(1).x))
	{
		if ((this->pontos.at(0).y >= objeto.pontos.at(3).y && this->pontos.at(0).y <= objeto.pontos.at(0).y) ||
			(this->pontos.at(2).y >= objeto.pontos.at(3).y && this->pontos.at(2).y <= objeto.pontos.at(0).y))	
		{
			cout << "GLORIA A DEUX" << endl;
			return true;
		}
		else
		{
			cout << "NAO COLIDIU" << endl;
			return false;
		}
	}
	else
	{
		cout << "NAO COLIDIU" << endl;
		return false;
	}
}

void Objeto::debugPosicoesVertices()
{
	/*for (int i = 0; i < pontos.size; i++)
	{
		std::cout << "Ponto" << i << ": X = " << pontos[i].x << ", Y = " << pontos[i].y << std::endl;
	}*/
}

void Objeto::deslocarElemento(float eixoX, float eixoY)
{
	for (int i = 0; i < pontos.size(); i++)
	{
		pontos[i].x += eixoX, pontos[i].y += eixoY;
	}	
}

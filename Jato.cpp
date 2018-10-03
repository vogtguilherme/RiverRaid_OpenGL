#include "Jato.h"

Jato::Jato()
{	
	//Menor valor de X: -0.5 / Y: 0.0f
	//Maior valor de X: 0.5 / Y: 2.0f

	addVertex(0.f, 1.f);
	addVertex(0.25f, 0.f);
	addVertex(0.f, 0.15f);
	addVertex(-0.25f, 0.f);

	RegistrarPosInicial(0.f, 1.f);
	RegistrarPosInicial(0.25f, 0.f);
	RegistrarPosInicial(0.f, 0.15f);
	RegistrarPosInicial(-0.25f, 0.f);

	deslocarElemento(0.0f, -3.5f);

	collider.addVertex(-.2f, 1.f);
	collider.addVertex(.2f, 1.f);
	collider.addVertex(.25f, 0.f);
	collider.addVertex(-.25f, 0.f);

	RegistrarColPosInicial(-.2f, 1.f);
	RegistrarColPosInicial(.2f, 1.f);
	RegistrarColPosInicial(.25f, 0.f);
	RegistrarColPosInicial(-.25f, 0.f);

	collider.deslocarElemento(0.0f, -3.5f);
}

Jato::~Jato()
{
}

int Jato::getVidas()
{
	return vidas;
}

void Jato::setVida(int value)
{
	vidas = value;
}

void Jato::RegistrarPosInicial(float x, float y)
{
	posInicial.push_back(posicoes(x, y));	
}

void Jato::RegistrarColPosInicial(float x, float y)
{	
	colisorPosInicial.push_back(posicoes(x, y));
}

void Jato::ResetarJato(float yPos)
{	
	cout << "RESETAR JATOOOOO" << endl;	

	/*if (collider.pontos.at(0).x > 0)
	{
		deslocarElemento(-4.0f, yPos);
	}
	else
	{
		deslocarElemento(4.0f, yPos);
	}*/

	for (int i = 0; i < pontos.size(); i++)
	{
		pontos[i].x = posInicial[i].x, pontos[i].y = posInicial[i].y + yPos/2;
	}

	for (int i = 0; i < pontos.size(); i++)
	{
		collider.pontos[i].x = colisorPosInicial[i].x, collider.pontos[i].y = colisorPosInicial[i].y + yPos/2;
	}

	//collider.deslocarElemento(0.0f, yPos);

	colisaoDetectada = false;
}

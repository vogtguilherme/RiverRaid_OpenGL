#pragma once

#include "bibliotecas.h"

struct posicoes
{
	float x;
	float y;

	posicoes(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
};

class Objeto
{
public:
	Objeto();
	~Objeto();

	vector<posicoes> pontos;
	
	void addVertex(float x, float y);
	void desenharElemento(float red, float green, float blue, float alpha);

	void detectarColisao(Objeto objeto);
	void debugPosicoesVertices();

	void deslocarElemento(float eixoX, float eixoY);

	/*void desenhaRetangulo();
	void desenhaTriangulo();
	
	void moverElemento();*/
private:

};


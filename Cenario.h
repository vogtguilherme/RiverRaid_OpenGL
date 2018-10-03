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

class Cenario
{
public:
	Cenario();
	~Cenario();

	vector<posicoes> pontos;
	
	void addVertex(float x, float y);
	void desenharElemento(float red, float green, float blue);

	void detectarColisao(Cenario objeto);
	void debugPosicoesVertices();

	void deslocarElemento(float eixoX, float eixoY);

	/*void desenhaRetangulo();
	void desenhaTriangulo();
	
	void moverElemento();*/
private:

};


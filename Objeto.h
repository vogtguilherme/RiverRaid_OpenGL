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

	vector<posicoes> pontosIniciais;
	
	void addVertex(float x, float y);
	void desenharElemento(float red, float green, float blue, float alpha);

	bool detectarColisao(Objeto objeto);
	bool detectarColisaoWithPositions(float er, float el, float eu, float ed);
	void debugPosicoesVertices();

	void deslocarElemento(float eixoX, float eixoY);

	/*void desenhaRetangulo();
	void desenhaTriangulo();
	
	void moverElemento();*/
private:

};


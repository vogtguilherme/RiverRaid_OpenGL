#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include <vector>

using namespace std;

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

	/*void desenhaRetangulo();
	void desenhaTriangulo();
	
	void moverElemento();*/
private:

};


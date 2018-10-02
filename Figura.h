#pragma once

#include "GL\glew.h"
#include "GL\freeglut.h"
#include <vector>

using namespace std;

struct posicoes
{
	float x, y;

	posicoes(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
};

class Figura
{
public:
	Figura();
	~Figura();

	vector<posicoes> pontos;
	void addVertex(float x, float y);
};


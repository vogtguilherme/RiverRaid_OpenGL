#include "Figura.h"



Figura::Figura()
{
}


Figura::~Figura()
{
}

void Figura::addVertex(float x, float y)
{
	pontos.push_back(posicoes(x, y));
}

#include "Jato.h"



Jato::Jato()
{	
	//Menor valor de X: -0.5 / Y: 0.0f
	//Maior valor de X: 0.5 / Y: 2.0f

	addVertex(0.f, 1.f);
	addVertex(0.25f, 0.f);
	addVertex(0.f, 0.15f);
	addVertex(-0.25f, 0.f);

	deslocarElemento(0.0f, -4.5f);

	collider.addVertex(-.25f, 1.f);
	collider.addVertex(.25f, 1.f);
	collider.addVertex(.25f, 0.f);
	collider.addVertex(-.25f, 0.f);

	collider.deslocarElemento(0.0f, -4.5f);
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

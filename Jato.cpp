#include "Jato.h"



Jato::Jato()
{	
	//Menor valor de X: -0.5 / Y: 0.0f
	//Maior valor de X: 0.5 / Y: 2.0f

	addVertex(0.f, 2.f);
	addVertex(0.5f, 0.f);
	addVertex(0.f, 0.35f);
	addVertex(-0.5f, 0.f);

	deslocarElemento(0.0f, -4.5f);

	collider.addVertex(-.5f, 2.f);
	collider.addVertex(.5f, 2.f);
	collider.addVertex(.5f, 0.f);
	collider.addVertex(-.5f, 0.f);

	collider.deslocarElemento(0.0f, -4.5f);
}

Jato::~Jato()
{
}

#include "Bloco.h"

Bloco::Bloco()
{
	CriarBordasCenario();
}

Bloco::~Bloco()
{
}

void Bloco::CriarBordasCenario()
{
	agua.addVertex(-10, 100);
	agua.addVertex(10, 100);
	agua.addVertex(10, -10);
	agua.addVertex(-10, -10);
	
	montanhaEsquerda.addVertex(-5.0, 100.0f);
	montanhaEsquerda.addVertex(-4.0, 100.0f);
	montanhaEsquerda.addVertex(-4.0, -10.0f);
	montanhaEsquerda.addVertex(-5.0, -10.0f);

	montanhaDireita.addVertex(4.0, 100.0f);
	montanhaDireita.addVertex(5.0, 100.0f);
	montanhaDireita.addVertex(5.0, -10.0f);
	montanhaDireita.addVertex(4.0, -10.0f);

	extremoLeft = -3.8f;
	extremoRight = 3.8f;
}

void Bloco::DesenhaBloco()
{	
	agua.desenharElemento(0, 0, 0.55f, 1.f);
	montanhaDireita.desenharElemento(0, 0.6f, 0, 1.f);
	montanhaEsquerda.desenharElemento(0, 0.6f, 0, 1.f);
}
#pragma once

#include "Objeto.h"

class Bloco
{
public:
	float extremoLeft, extremoRight;

	Bloco();
	~Bloco();

	void DesenhaBloco();
	
	void CriarBordasCenario();

	Objeto agua;
	Objeto montanhaEsquerda, montanhaDireita;
};

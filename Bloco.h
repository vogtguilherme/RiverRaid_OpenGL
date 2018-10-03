#pragma once

#include "Objeto.h"

class Bloco
{
public:
	Bloco();
	~Bloco();

	void DesenhaBloco();
	
	void CriarBordasCenario();

	Objeto agua;
	Objeto montanhaEsquerda, montanhaDireita;
};

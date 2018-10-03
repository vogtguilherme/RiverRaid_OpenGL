#pragma once

#include "Objeto.h"

class Bloco
{
public:
	Bloco();
	~Bloco();

	void DesenhaBloco();
private:
	
	void CriarBordasCenario();

	Objeto agua;
	Objeto montanhaEsquerda, montanhaDireita;
};

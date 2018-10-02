#pragma once

#include "Cenario.h"

class Bloco
{
public:
	Bloco();
	~Bloco();

	void DesenhaBloco();
private:
	
	void CriarBordasCenario();

	Cenario agua;
	Cenario montanhaEsquerda, montanhaDireita;
};

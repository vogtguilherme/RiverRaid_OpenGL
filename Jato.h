#pragma once
#include "Objeto.h"

class Jato :
	public Objeto
{
public:

	Objeto collider;	

	Jato();
	~Jato();

	int getVidas();
	void setVida(int value);

private:

	int vidas = 3;
};


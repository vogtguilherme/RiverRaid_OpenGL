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

	void RegistrarPosInicial(float x, float y);

	void RegistrarColPosInicial(float x, float y);

	bool colisaoDetectada = false;

	void ResetarJato(float yPos);

private:

	int vidas = 3;

	vector<posicoes> posInicial;
	vector<posicoes> colisorPosInicial;
};


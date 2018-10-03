#pragma once
#include "bibliotecas.h"

#include "Jato.h"
#include "Player.h"
#include "Aviao.h"
#include "Barco.h"
#include "Combustivel.h"
#include "Helicoptero.h"


class Tiro
{
public:
	bool atirando = false;
	bool Colidiu;
	float sizeY;
	float tirocima;
	float px, py;
	void CriaTiro(Jato player);
	float px1, px2, px3, px4, py1, py2, py3, py4;
	void criapontostiro(float _px1, float _px2, float _px3, float _px4, float _py1, float _py2, float _py3, float _py4);
	void DesenhaTiro();
	void MoveBala(float x,float y);
	void Colisao(Helicoptero _helicoptero, Barco _barco);

	Objeto collider;
	
	Tiro();
	~Tiro();
};
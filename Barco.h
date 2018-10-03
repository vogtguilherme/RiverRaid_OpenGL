#pragma once
#include"bibliotecas.h"
#include "Bloco.h"
#include "Objeto.h"

class Barco
{
	


public:
	Objeto colisor;
	float extremoLeft, extremoRight;
	bool paraLeft = true;
	bool destruiu=true;
	float px1, px2, px3, px4,  py1, py2, py3, py4;
	float px, py;
	float sizeX, sizeY;
	void CriaBarco(float x, float y);
	void desenhabarco();
	
	void Barco::MoveBarco(float _x, float _y);

	void detectar(Bloco colisao, float velocidade);
	//void Animacao(int valor);


	Barco();
	~Barco();
};


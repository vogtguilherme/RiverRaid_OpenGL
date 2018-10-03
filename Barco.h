#pragma once
#include"bibliotecas.h"
#include "Bloco.h"
#include "Objeto.h"

class Barco
{
	


public:
	Objeto colisor;
	float extremoLeft, extremoRight,extremoUP,extremoDown;
	bool paraLeft = true;
	bool destruiu = false;
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


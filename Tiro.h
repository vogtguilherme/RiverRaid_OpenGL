#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
#include"Player.h"
#include "Aviao.h"
#include"Barco.h"
#include"Combustivel.h"
#include"Helicoptero.h"
class Tiro
{
public:
	bool atirando =true;
	bool Colidiu;
	float sizeY;
	float tirocima;
	float px, py;
	void CriaTiro(Player player);
	void DesenhaTiro();
	void MoveBala(float x,float y);
	void Colisao(Helicoptero _helicoptero, Barco _barco);
	
	Tiro();
	~Tiro();
};


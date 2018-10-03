#pragma once
#include"Bloco.h"



class Helicoptero
{

	
public:
	Objeto Colider;

	float extremoLeft, extremoRight, extremoUP, extremoDown;
	bool paraLeft = true;
	float px, py;
	/*float Px1,Px2,Px3,Px4,Px5,Px6,Px7,Px8,Px9,Px10,Px11,Px12,Px13,Px14,Px15;
	float Py1,Py2,Py3,Py4,Py5,Py6,Py7,Py8,Py9,Py10,Py11,Py12,Py13,Py14,Py15;*/
	float x, y;
	float sizeX, sizeY;
	void Criahelecoptero(float x, float y);
	void Desenhahelecoptyero();
	void Helicoptero::MoveHelecoptero(float _x, float _y);

	bool destruiu = false;

	void  detectou(Bloco colisao, float velocidade);


	Helicoptero();
	~Helicoptero();
};


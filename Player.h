#pragma once
#include "bibliotecas.h"
#include "Objeto.h"

class Player	
{
public:

	Objeto colisor;

	float Px1, Px2, Px3, Px4, Px5, Px6, Px7, Px8, Px9, Px10, Px11, Px12, Px13, Px14, Px15, Px16;
	float Py1, Py2, Py3, Py4, Py5, Py6, Py7, Py8, Py9, Py10, Py11, Py12, Py13, Py14, Py15, Py16;
	float px, py;
	void CriaPlayer(float x,float y);
	void Desenhodois(float x, float y);

	void DesenhaPlayer();


	Player();
	~Player();
};


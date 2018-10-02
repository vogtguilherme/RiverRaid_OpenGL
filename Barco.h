#pragma once

class Barco
{


public:
	float extremoLeft, extremoRight, extremoUp;
	bool paraLeft = true;
	float px1, px2, px3, px4,  py1, py2, py3, py4;
	float px, py;
	float sizeX, sizeY;
	void CriaBarco(float x, float y);
	void desenhabarco();
	
	void Barco::MoveBarco(float _x, float _y);
	
	//void Animacao(int valor);


	Barco();
	~Barco();
};


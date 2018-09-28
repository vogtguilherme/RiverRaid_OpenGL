#pragma once



class Barco
{


public:

	float px1, px2, px3, px4,  py1, py2, py3, py4;
	void criabarco(float px1, float px2, float px3, float px4, float py1, float py2, float py3, float py4 );
	void desenhabarco();
	
	//void Animacao(int valor);


	Barco();
	~Barco();
};


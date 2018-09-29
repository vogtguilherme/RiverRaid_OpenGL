#pragma once
class Combustivel
{
public:
	//extremidade do local
	float extremodowm , extremoUP;
	bool paradowun = true;

	float px1, px2, px3, px4, px5, px6, py1, py2, py3, py4, py5, py6;
	void criacombustivel(float _x, float _y);
	//float x, y;
	void desenhacobustivel();
	void Combustivel:: movecombustivel(float _x,float _y);


	Combustivel();
	~Combustivel();
};


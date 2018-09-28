#pragma once
class Combustivel
{
public:
	//extremidade do local
	float extremodowm , extremoUP;
	bool paradowun = true;

	float px1, px2, px3, px4, px5, px6, py1, py2, py3, py4, py5, py6;
	void criacombustivel(float _px1, float _px2, float _px3, float _px4, float _px5, float _px6, float _py1, float _py2, float _py3, float _py4, float _py5, float _py6);
	//float x, y;
	void desenhacobustivel();
	void Combustivel:: movecombustivel(float _x,float _y);


	Combustivel();
	~Combustivel();
};


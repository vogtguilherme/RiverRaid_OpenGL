#pragma once
class Combustivel
{
public:
	bool paradowun = true;
	float px1, px2, px3, px4, px5, px6, py1, py2, py3, py4, py5, py6;
	float extremodowm, extremoUP;
	void criacombustivel(float _x, float _y);
	//float x, y;

	//void criacombustivel(float px1, float px2, float px3, float px4, float px5, float px6, float py1, float py2, float py3, float py4, float py5, float py6);
	void Combustivel::movecombustivel(float _x, float _y);
	void desenhacobustivel();

	Combustivel();
	~Combustivel();
};


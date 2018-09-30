#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
class Player
{
public:

	float Px1, Px2, Px3, Px4, Px5, Px6, Px7, Px8, Px9, Px10, Px11, Px12, Px13, Px14, Px15, Px16;
	float Py1, Py2, Py3, Py4, Py5, Py6, Py7, Py8, Py9, Py10, Py11, Py12, Py13, Py14, Py15, Py16;

	//void CriaPlayer(float _Px1, float _Px2, float _Px3, float _Px4, float _Px5, float _Px6, float _Px7, float _Px8, float _Px9, float _Px10, float _Px11, float _Px12, float _Px13, float _Px14, float _Px15, float _Px16, float _Py1, float _Py2, float _Py3, float _Py4, float _Py5, float _Py6, float _Py7, float _Py8, float _Py9, float _Py10, float _Py11, float _Py12, float _Py13, float _Py14, float _Py15, float _Py16);
	void Desenhodois(float x, float y);

	void DesenhaPlayer();


	Player();
	~Player();
};


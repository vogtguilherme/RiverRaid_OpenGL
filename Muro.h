#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
class Muro
{
public:
	float Px1, Px2, Px3, Px4;
	float Py1, Py2, Py3, Py4;
	void Desenhamuro();
	void Criamuro(float x,float y);
	Muro();
	~Muro();
};


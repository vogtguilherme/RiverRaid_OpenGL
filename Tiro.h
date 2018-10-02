#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"
class Tiro
{
public:
	bool atirando =true;
	float sizeY;
	float tirocima;
	float px, py;
	void CriaTiro(float x,float y);
	void DesenhaTiro();
	void MoveBala(float x,float y);


	Tiro();
	~Tiro();
};


#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"

#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

class TelaJogo
{
private:
	string textoPontos;
	string pontos;
	string vidas;
	string combustivel;
public:

	TelaJogo();

	void Texto(const char *text, int length, int x, int y);
	void DesenhaTexto(Tiro &tiroPonto);
};

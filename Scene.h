#pragma once
#include "GL\glew.h"
#include "GL\freeglut.h"

#include "Player.h"
#include "Cenario.h"
#include "Bloco.h"

#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

class Scene
{
	//Eixos meuEixo;

	int width;
	int height;
	string title;
	void start();
	static void update(void);
	static void TeclasEspeciais(int key, int x, int y);
	static void GerenciaMouse(int button, int state, int x, int y);
	static void GerenciaTeclado(unsigned char key, int x, int y);
	static void AlteraTamanhoJanela(GLsizei w, GLsizei h);

public:
	//static vector<Object*> objetos;
	Scene(int argc, char **argv, string title, int width = 600, int height = 600);
	~Scene();
};

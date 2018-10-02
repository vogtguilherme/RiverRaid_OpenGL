#pragma once

#include "bibliotecas.h"

#ifndef CONFIGURACAO_H
#define CONFIGURACAO_H

//Variaveis da tela
const int LARGURA_TELA = 800;
const int ALTURA_TELA = 600;
const int FPS = 60;

bool Setup();

void Start();

void Render();

void Update();

void Input(unsigned char key, int x, int y);

#endif
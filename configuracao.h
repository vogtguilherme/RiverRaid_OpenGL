#pragma once

#include <time.h>

#include "bibliotecas.h"

#include "Bloco.h"
#include "Player.h"
#include "Cenario.h"

#ifndef CONFIGURACAO_H
#define CONFIGURACAO_H

//Variaveis da tela
const int LARGURA_TELA = 800;
const int ALTURA_TELA = 600;
const int FPS = 10;

bool Setup();

void Start();

void Render();

void Update();

void Input(unsigned char key, int x, int y);

#endif
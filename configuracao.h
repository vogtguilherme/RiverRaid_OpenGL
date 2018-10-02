#pragma once

#ifndef CONFIGURACAO_H
#define CONFIGURACAO_H

#include "bibliotecas.h"

//Variaveis da tela
const int LARGURA_TELA = 800;
const int ALTURA_TELA = 600;
const int FPS = 60;

bool Setup();

bool Start();

void Render();

void Update();

void Input();

#endif
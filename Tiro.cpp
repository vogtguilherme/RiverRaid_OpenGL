#pragma once
#include "Tiro.h"
#include "Inimigo.h"
#include "Jogador.h"


using namespace std;

Tiro::Tiro()
{
	setPosicaoX(0);
	setPosicaoY(0);
	setTamanho(0.1);
}

void Tiro::Colisao(Inimigo &inimigo, Jogador &jogador)
{
	if (_playerAtirando)
	{
		if (-inimigo.getTamanho() + inimigo.getPosicaoX() <= getTamanho() + getPosicaoX() &&
			inimigo.getTamanho() + inimigo.getPosicaoX() >= -getTamanho() + getPosicaoX() &&
			-inimigo.getTamanho() + inimigo.getPosicaoY() <= getTamanho() + getPosicaoY() &&
			getAtirando() == true)
		{
			setAtirando(false);
			colidiu = true;
			pontos = pontos + 1;
		}
	}

	else if (_inimigoAtirando)
	{
		if (-jogador.getTamanho() + jogador.getPosicaoX() <= getTamanho() + getPosicaoX() &&
			jogador.getTamanho() + jogador.getPosicaoX() >= -getTamanho() + getPosicaoX() &&
			jogador.getTamanho() + jogador.getPosicaoY() >= -getTamanho() + getPosicaoY() &&
			getAtirando() == true && colidiu == false)
		{
			setAtirando(false);
			colidiu = true;
		}
	}

	if (colidiu && _playerAtirando)
	{
		inimigo.Spawn(colidiu);
		//_playerAtirando = false;
	}

	if (!getAtirando() && _inimigoAtirando && colidiu)
	{
		jogador.setVida(jogador.getVida() - 1);
		setInimigoAtirando(false);
		colidiu = false;
	}
}

void Tiro::Desenha()
{
	if (_playerAtirando)
		glColor3f(0.0, 1.0, 1.0);

	if (_inimigoAtirando)
		glColor3f(1.0, 0.0, 1.0);

	glBegin(GL_QUADS);
	glVertex2f(-getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY()); //Inferior Esquerdo
	glVertex2f(-getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY()); //Superior Esquerdo
	glVertex2f(getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());  //Superior Direito
	glVertex2f(getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY());  //Inferior Direito
	glEnd();

	if (_playerAtirando)
	{
		setPosicaoY(getPosicaoY() + 0.0025);
	}

	else if (_inimigoAtirando)
	{
		setPosicaoY(getPosicaoY() - 0.0025);
	}


	if (isDistante()) setAtirando(false);
}


bool Tiro::isDistante() {
	return  getPosicaoX() > 5.0 || getPosicaoX() < -5.0 ||
		getPosicaoY() > 5.0 || getPosicaoY() < -5.0;
}

void Tiro::CriarTiro(Jato nave) 
{
	setPosicaoX(nave.getPosicaoX());
	setPosicaoY(nave.getPosicaoY());
}

//Getters e Setters
void Tiro::setInimigoAtirando(bool inimigo)
{
	_inimigoAtirando = inimigo;
}

bool Tiro::getInimigoAtirando()
{
	return _inimigoAtirando;
}

void Tiro::setPlayerAtirando(bool player)
{
	_playerAtirando = player;
}

float Tiro::getTamanho()
{
	return tamanho;
}

void Tiro::setTamanho(float t)
{
	tamanho = t;
}

float Tiro::getPosicaoX() {
	return posicaoX;
}

float Tiro::getPosicaoY() {
	return posicaoY;
}

void Tiro::setPosicaoX(float tx) {
	posicaoX = tx;
}

void Tiro::setPosicaoY(float ty) {
	posicaoY = ty;
}

bool Tiro::getAtirando()
{
	return atirando;
}

void Tiro::setPontos(float _pontos) {
	pontos = _pontos;
}

int Tiro::getPontos()
{
	return pontos;
}

void Tiro::setAtirando(bool status) {
	atirando = status;
}
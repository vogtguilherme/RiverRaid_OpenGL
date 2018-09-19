#include "Jato.h"

float posicaoX, posicaoY;
float sentidoX, sentidoY;
float tamanho;
float velocidadeMov;
int	Vida;

Jato::Jato() {
}

//Getters e Setters

void Jato::Desenha() 
{

}

float Jato::getTamanho()
{
	return tamanho;
}

void Jato::setTamanho(float t)
{
	tamanho = t;
}

int Jato::getVida()
{
	return Vida;
}

void Jato::setVida(int vida)
{
	Vida = vida;
}

float Jato::getPosicaoX() {
	return posicaoX;
}

float Jato::getPosicaoY() {
	return posicaoY;
}

void Jato::setPosicaoX(float tx) {
	posicaoX += tx;
}

void Jato::setPosicaoInicialX(float spawn) {
	posicaoX = spawn;
}

void Jato::setPosicaoY(float ty) {
	posicaoY += ty;
}

void Jato::setPosicaoY() {
	posicaoY = 4.5;
}

float Jato::getSentidoX() {
	return sentidoX;
}

float Jato::getSentidoY() {
	return sentidoY;
}

void Jato::setSentidoX(float sx) {
	sentidoX *= sx;
}

void Jato::setSentidoY(float sy) {
	sentidoY *= sy;
}
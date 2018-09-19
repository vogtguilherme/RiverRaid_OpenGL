#pragma once
#include "Jogador.h"

Jogador::Jogador()
{
	setPosicaoX(0);
	setPosicaoY(-4.5);
	setSentidoX(0);
	setSentidoY(0);
	setTamanho(0.3);
	setVida(4);
}

struct QuadradoVida
{
private:
	float tamanho = 0.15,
		posicaoX = -3.8,
		posicaoY = (4.6);

public:
	void DesenhaQuadrado(int aux)
	{
		for (int i = 0; i < aux; i++)
		{
			glColor3f(0.0, 1.0, 0.0);
			glBegin(GL_QUADS);
			glVertex2f(-tamanho + posicaoX, -tamanho + posicaoY); //Inferior Esquerdo
			glVertex2f(-tamanho + posicaoX, tamanho + posicaoY);	//Superior Esquerdo
			glVertex2f(tamanho + posicaoX, tamanho + posicaoY);	//Superior Direito
			glVertex2f(tamanho + posicaoX, -tamanho + posicaoY);	//Inferior Direito
			glEnd();
			posicaoX += 0.45;
		}
	}
};

void Jogador::Desenha() {

	QuadradoVida qrdVida;
	qrdVida.DesenhaQuadrado(getVida());

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(-getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY()); //Inferior Esquerdo
	glVertex2f(-getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());	//Superior Esquerdo
	glVertex2f(getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());	//Superior Direito
	glVertex2f(getTamanho() + getPosicaoX(), -getTamanho() + getPosicaoY());	//Inferior Direito
	glEnd();
}

void Jogador::Colisao(Inimigo &inimigo)
{
	if (-inimigo.getTamanho() + inimigo.getPosicaoX() <= getTamanho() + getPosicaoX() &&
		inimigo.getTamanho() + inimigo.getPosicaoX() >= -getTamanho() + getPosicaoX() &&
		-inimigo.getTamanho() + inimigo.getPosicaoY() <= getTamanho() + getPosicaoY()
		&& colidiu == false)
	{
		colidiu = true;
		inimigo.Spawn(colidiu);
		setVida(getVida() - 1);
	}

	if (colidiu)
	{
		inimigo.Spawn(colidiu);
	}
}
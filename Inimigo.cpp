#pragma once
#include "Inimigo.h"


using namespace std;

Inimigo::Inimigo()
{
	setPosicaoX(0);
	setPosicaoY(4.5);
	setSentidoX(0);
	setSentidoY(0);
	setTamanho(0.3);
	timer = 0;
	reset = false;
}

bool Inimigo::reset = false;


//get and set pro atirando
bool Inimigo::getAtirando() {
	return atirando;
}

void Inimigo::setAtirando(bool &_atirando) {
	atirando = _atirando;
}


void Inimigo::MovimentacaoAcao()
{
	//teste para movimentar o inimigo
	srand(time(NULL));
	auxMovimentacao = rand() % 2;

	if (auxMovimentacao == 0)
	{
		deslocamento = 0.0002;
		setPosicaoX(deslocamento);
	}

	else
	{
		deslocamento = -0.0002;
		setPosicaoX(deslocamento);
	}
	
	if (getTamanho() >= 0.3 && getTamanho() <= 0.35 && timer > 1900.0)
	{
		//teste para inimigo atirar...
		srand(time(NULL));
		auxRand = rand() % 2;

		if (auxRand == 0 && atirando == false)
		{
			atirando = true;
		}

		else
		{
			timer = 0;
			atirando = false;
		}

	}
	else
	{
		timer++;
	}
}

void Inimigo::Spawn(bool &colidiu)
{
	reset = false;

	if (!reset)
	{
		srand(time(NULL));
		auxRand = rand() % 2;

		if (auxRand == 0)
		{
			srand(time(NULL));
			auxRand = rand() % 10 + 1;
		}

		else
		{
			srand(time(NULL));
			auxRand = (rand() % 10 + 1) - 11;
		}

		posicaoRand = (float)auxRand / 10;


		setTamanho(0.0);
		setPosicaoInicialX(posicaoRand);
		setPosicaoX(posicaoRand);
		setPosicaoY();
		reset = true;
	}

	if (temporizador > 1500.0)
	{
		temporizador = 0.0;
		setTamanho(0.3);
		colidiu = false;
		limite_mapa = false;
	}

	else
	{
		temporizador += 1;

	}
}

void Inimigo::Desenha()
{
	if (getPosicaoY() < -5.4)
	{
		limite_mapa = true;
	}

	if (limite_mapa == true)
	{
		Spawn(limite_mapa);
	}

	MovimentacaoAcao();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);

	glVertex2f((-getTamanho() + getPosicaoX() + 0.1f), (getTamanho() + getPosicaoY() + 0.3f)); //Superior Esquerdo
	glVertex2f((getTamanho() + getPosicaoX() - 0.1f), (getTamanho() + getPosicaoY() + 0.3f));  //Superior Direito
	glVertex2f((getTamanho() + getPosicaoX() - 0.1f), (-getTamanho() + getPosicaoY() + 0.3f));	//Inferior Direito
	glVertex2f((-getTamanho() + getPosicaoX() + 0.1f), (-getTamanho() + getPosicaoY() + 0.3f)); //inferioresquerdo
	glVertex2f(-getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());	//Superior Esquerdo
	glVertex2f(getTamanho() + getPosicaoX(), getTamanho() + getPosicaoY());	//Superior Direito
	glVertex2f((getTamanho() + getPosicaoX() - 0.1f), -getTamanho() + getPosicaoY());	//Inferior Direito
	glVertex2f((-getTamanho() + getPosicaoX() + 0.1f), -getTamanho() + getPosicaoY()); //inferioresquerdo
	glEnd();

}

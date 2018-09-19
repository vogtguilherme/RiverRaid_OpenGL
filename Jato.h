#pragma once

class Jato
{
private:
	float posicaoX, posicaoY;
	float sentidoX, sentidoY;
	float tamanho;
public:
	Jato();

	virtual void Desenha();

	//Getters e Setters
	float getTamanho();

	void setTamanho(float t);

	int getVida();
	void setVida(int vida);

	float getPosicaoX();
	void setPosicaoX(float tx);
	void setPosicaoInicialX(float spawn);

	float getPosicaoY();
	void setPosicaoY(float ty);
	void setPosicaoY();

	float getSentidoX();

	float getSentidoY();

	void setSentidoX(float sx);

	void setSentidoY(float sy);
};



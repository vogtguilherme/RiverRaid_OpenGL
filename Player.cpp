#include "Player.h"



//void Player::CriaPlayer(float _Px1, float _Px2, float _Px3, float _Px4, float _Px5, float _Px6, float _Px7, float _Px8, float _Px9, float _Px10, float _Px11, float _Px12, float _Px13, float _Px14, float _Px15, float _Px16, float _Py1, float _Py2, float _Py3, float _Py4, float _Py5, float _Py6, float _Py7, float _Py8, float _Py9, float _Py10, float _Py11, float _Py12, float _Py13, float _Py14, float _Py15, float _Py16)
//{
//
//	
//
//}

void Player::Desenhodois(float x, float y)
{

	Px1 = 0.2f + x;
	Px2 = 0.2f + x;
	Px3 = 0.8f + x;
	Px4= 0.8f + x;
	Px5 = 0.6f + x;
	Px6 = 0.4f + x;
	Px7= 0.4f + x;
	Px8 = 0.2f + x;
	Px9 = 0.3f + x;
	Px10 = 0.3f + x;
	Px11 = 0.7f + x;
	Px12 = 0.7f + x;
	Px13 = 0.8f + x;
	Px14 = 0.3f + x;
	Px15 = 0.5f + x;
	Px16 = 0.7f + x;

	Py1 = 0.1f + y;
	Py2 = 0.3f + y;
	Py3 = 0.3f + y;
	Py4 = 0.1f + y;
	Py5 = 0.2f + y;
	Py6 = 0.2f + y;
	Py7 = 0.1f + y;
	Py8 = 0.3f + y;
	Py9 = 0.5f + y;
	Py10 = 0.7f + y;
	Py11 = 0.7f + y;
	Py12 = 0.5f + y;
	Py13 = 0.3f + y;
	Py14 = 0.7f + y;
	Py15 = 0.9f + y;
	Py16 = 0.7f + y;
}

void Player::DesenhaPlayer()
{
	//parte de baixo
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(Px1 + 0.5f, Py1 + 0.1f);
	glVertex2f(Px2 + 0.5f, Py2 + 0.3f);
	glVertex2f(Px3 + 1.1f, Py3 + 0.3f);
	glVertex2f(Px4 + 1.1f, Py4 + 0.1f);
	glVertex2f(Px5 + 0.9f, Py5 + 0.1f);
	glVertex2f(Px6 + 0.9f, Py6 + 0.2f);
	glVertex2f(Px7 + 0.7f, Py7 + 0.2f);
	glVertex2f(Px8 + 0.7f, Py8 + 0.1f);
	glEnd();

	//parte DO MEIO
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(Px1 + 0.5f, Py1 + 0.3f);
	glVertex2f(Px2 + 0.6f, Py2 + 0.5f);
	glVertex2f(Px3 + 0.6f, Py3 + 0.7f);
	glVertex2f(Px4 + 1.0f, Py4 + 0.7f);
	glVertex2f(Px5 + 1.0f, Py5 + 0.5f);
	glVertex2f(Px6 + 1.1f, Py6 + 0.3f);
	glEnd();

	//parte de cima
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(Px1 + 0.6f, Py1 + 0.7f);
	glVertex2f(Px2 + 0.6f, Py2 + 1.1f);
	glVertex2f(Px3 + 1.0f, Py3 + 1.1f);
	glVertex2f(Px3 + 1.0f, Py3 + 0.7f);
	glEnd();

	//asa esquerda
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(Px1 + 0.0f, Py1 + 0.9f);
	glVertex2f(Px2 + 0.2f, Py2 + 1.1f);
	glVertex2f(Px3 + 0.6f, Py3 + 1.1f);
	glVertex2f(Px3 + 0.6f, Py3 + 0.5f);
	glEnd();

	//asa direita
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(Px1 + 1.6f, Py1 + 0.9f);
	glVertex2f(Px2 + 1.0f, Py2 + 0.5f);
	glVertex2f(Px3 + 1.0f, Py3 + 1.1f);
	glVertex2f(Px3 + 1.4f, Py3 + 1.1f);
	glEnd();

	//asa canhao esquerdo
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(Px1 + 0.3f, Py1 + 1.1f);
	glVertex2f(Px2 + 0.3f, Py2 + 1.4f);
	glVertex2f(Px3 + 0.5f, Py3 + 1.4f);
	glVertex2f(Px3 + 0.5f, Py3 + 1.1f);
	glEnd();

	//asa canhao diureito
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(Px1 + 1.3f, Py1 + 1.1f);
	glVertex2f(Px2 + 1.1f, Py2 + 1.1f);
	glVertex2f(Px3 + 1.1f, Py3 + 1.4f);
	glVertex2f(Px3 + 1.3f, Py3 + 1.4f);
	glEnd();


}

Player::Player()
{
}


Player::~Player()
{
}

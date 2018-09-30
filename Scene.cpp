#include "Scene.h"
#include"Barco.h"
#include "Muro.h"
#include "Aviao.h"
#include"Player.h"
#include "Combustivel.h"
#include"Helicoptero.h"
#include <time.h>
#include <windows.h>
#include <gl\glut.h>
#include <iostream>
#include <stdio.h>
#include <string.h>


//vector<Object*> Scene::objetos = vector<Object*>();

Barco barquinho;
Helicoptero copter;
Combustivel gasolina;
Muro paredes;
Aviao aviao;
Player jogador;
//Criação de variáveis
//Velocidade das linhas
float speedl1 = 0.0001f;
float speedY = 0.0001f;
void Desenhos(void)
{
	// Limpa a janela com a cor especificada como cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-5, 5, -5, 5);


	copter.Desenhahelecoptyero();
	barquinho.desenhabarco();
	gasolina.desenhacobustivel();
	paredes.Desenhamuro();
	jogador.DesenhaPlayer();

	glutSwapBuffers();
	//função que solicita o redesenho da DesenhaCena, incorporando as modificações de variáveis
	glutPostRedisplay();
}

Scene::Scene(int argc, char **argv, string title, int width, int height)
{

	glutInit(&argc, argv);
	// Indica que deve ser usado um unico buffer para armazenamento da imagem e representacao de cores RGB
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowPosition(250, 50);
	glutInitWindowSize(800, 600);

	// Cria uma janela com o titulo especificado
	glutCreateWindow(title.c_str());
	// Especifica para a OpenGL que funcao deve ser chamada para geracao da imagem
	glutDisplayFunc(update);
	glutIdleFunc(update);


	glutReshapeFunc(AlteraTamanhoJanela);
	glutKeyboardFunc(GerenciaTeclado);
	glutMouseFunc(GerenciaMouse);


	//glutSpecialFunc(TeclasEspeciais);
	glutDisplayFunc(Desenhos);
	start();
	// Dispara a "maquina de estados" de OpenGL
	glutMainLoop();

}

// Função callback chamada quando o tamanho da janela é alterado
void Scene::AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
	// Especifica as dimensões da Viewport
	glViewport(0, 0, w, h);
	// Inicializa o sistema de coordenadas
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluOrtho2D(-win, win, -win, win);
}

// Função callback chamada para gerenciar eventos de teclado
void Scene::GerenciaTeclado(unsigned char key, int x, int y)
{
	switch (key) {
	case 'R':
	case 'r':
		//PLAYER SE MOVENDO PARA A DIREITA		
		jogador.Px1 += 0.1f;
		jogador.Px2 += 0.1f;
		jogador.Px3 += 0.1f;
		jogador.Px4 += 0.1f;
		jogador.Px5 += 0.1f;
		jogador.Px6 += 0.1f;
		jogador.Px7 += 0.1f;
		jogador.Px8 += 0.1f;
		jogador.Px9 += 0.1f;
		jogador.Px10 += 0.1f;
		jogador.Px11 += 0.1f;
		jogador.Px12 += 0.1f;
		jogador.Px13 += 0.1f;
		jogador.Px14 += 0.1f;
		jogador.Px15 += 0.1f;
		jogador.Px16 += 0.1f;
		break;

		//PLAYER SE MOVENDO PARA ESQUERDA
	case 'G':
	case 'g':
		jogador.Px1 += -0.1f;
		jogador.Px2 += -0.1f;
		jogador.Px3 += -0.1f;
		jogador.Px4 += -0.1f;
		jogador.Px5 += -0.1f;
		jogador.Px6 += -0.1f;
		jogador.Px7 += -0.1f;
		jogador.Px8 += -0.1f;
		jogador.Px9 += -0.1f;
		jogador.Px10 += -0.1f;
		jogador.Px11 += -0.1f;
		jogador.Px12 += -0.1f;
		jogador.Px13 += -0.1f;
		jogador.Px14 += -0.1f;
		jogador.Px15 += -0.1f;
		jogador.Px16 += -0.1f;
		break;

		//MOVE PARA CIMA
	case 'B':
	case 'b':
		jogador.Py1 += 0.1f;
		jogador.Py2 += 0.1f;
		jogador.Py3 += 0.1f;
		jogador.Py4 += 0.1f;
		jogador.Py5 += 0.1f;
		jogador.Py6 += 0.1f;
		jogador.Py7 += 0.1f;
		jogador.Py8 += 0.1f;
		jogador.Py9 += 0.1f;
		jogador.Py10 += 0.1f;
		jogador.Py11 += 0.1f;
		jogador.Py12 += 0.1f;
		jogador.Py13 += 0.1f;
		jogador.Py14 += 0.1f;
		jogador.Py15 += 0.1f;
		jogador.Py16 += 0.1f;
		break;

		//MOVE PARA BAIXO
	case'W':
	case'w':
		jogador.Py1 += -0.1f;
		jogador.Py2 += -0.1f;
		jogador.Py3 += -0.1f;
		jogador.Py4 += -0.1f;
		jogador.Py5 += -0.1f;
		jogador.Py6 += -0.1f;
		jogador.Py7 += -0.1f;
		jogador.Py8 += -0.1f;
		jogador.Py9 += -0.1f;
		jogador.Py10 += -0.1f;
		jogador.Py11 += -0.1f;
		jogador.Py12 += -0.1f;
		jogador.Py13 += -0.1f;
		jogador.Py14 += -0.1f;
		jogador.Py15 += -0.1f;
		jogador.Py16 += -0.1f;
		break;
	}
	glutPostRedisplay();

}

// Função callback chamada para gerenciar eventos do mouse
void Scene::GerenciaMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {
			// comandos quando pressionar o botão esquerdo do mouse 
		}
	glutPostRedisplay();
}
// Função callback chamada para gerenciar eventos do teclado
void Teclas(int tecla, int x, int y)
{
	
	glutPostRedisplay();
}
//void Scene::TeclasEspeciais(int tecla, int x, int y)
//{
//	if (tecla == GLUT_KEY_RIGHT) {
//		
//	}
//	if (tecla == GLUT_KEY_LEFT) {
//		
//	}
//	glutPostRedisplay();
//}
void Scene::update(void)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);

	/*for (int i = 0; i < objetos.size(); i++)
	{
		objetos[i]->draw();
	}*/


	//gasolina.desenhacobustivel();



	//TESTANDO COLISAO POR PONTO
	/*if (copter.Px7 >= paredes.Px1 && copter.Px7 <= paredes.Px3)
	{
		if (copter.Py7 >= paredes.Py2 && copter.Py7 <= paredes.Py1)
		{


		}
	}*/


	//movimentação copter
	if (copter.extremoRight <= -5 && copter.paraLeft == true) copter.paraLeft = false;
	else if (copter.extremoLeft >= 5 && copter.paraLeft == false) copter.paraLeft = true;

	if (copter.paraLeft == true) copter.MoveHelecoptero(-speedl1 * 20, -speedY);
	else if (copter.paraLeft == false) copter.MoveHelecoptero(speedl1 * 20, -speedY);

	copter.Desenhahelecoptyero();





	//movimentacao barquinho
	if (barquinho.extremoRight <= -5 && barquinho.paraLeft == true)barquinho.paraLeft = false;
	else if (barquinho.extremoLeft >= 5 && barquinho.paraLeft == false)barquinho.paraLeft = true;

	if (barquinho.paraLeft == true)barquinho.MoveBarco(-speedl1 * 10, -speedY);
	else if (barquinho.paraLeft == false)barquinho.MoveBarco(-speedl1 * 10, -speedY);

	barquinho.desenhabarco();

	//movimentacao gasolina
	if (gasolina.extremodowm <= -5 && gasolina.paradowun == true)gasolina.paradowun = false;
	else if (gasolina.extremoUP >= 5 && gasolina.paradowun == false)gasolina.paradowun = true;

	if (gasolina.paradowun == true)gasolina.movecombustivel(0.0f, -speedY * 20);
	else if (gasolina.paradowun == false)gasolina.movecombustivel(0, -speedY * 20);

	gasolina.desenhacobustivel();


	jogador.DesenhaPlayer();
	paredes.Desenhamuro();


	glutSwapBuffers();
	//função que solicita o redesenho da DesenhaCena, incorporando as modificações de variáveis
	glutPostRedisplay();
}
// Inicializa aspectos do rendering
void Scene::start()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // cor de fundo da janela

	//copter.Criahelecoptero();
	glutPostRedisplay();
}

void Animacao(int valor)
{
	speedl1 += 0.08f;

	barquinho.px1 += speedl1;
	barquinho.px2 += speedl1;
	barquinho.px3 += speedl1;
	barquinho.px4 += speedl1;
	barquinho.py1 += speedl1;
	barquinho.py2 += speedl1;
	barquinho.py3 += speedl1;
	barquinho.py4 += speedl1;
	if (barquinho.px1 < -75)
	{
		barquinho.px1 = 800;
		barquinho.px2 = 875;
		barquinho.px3 = 875;
		barquinho.px4 = 800;
	}
	//if (barquinho.px1 > 800)
	//{
	//	barquinho.px1 = -150;
	//	barquinho.px2 = 0;
	//	barquinho.px3 = 0;
	//	barquinho.px4 = -150;
	//}
	glutPostRedisplay();
	glutTimerFunc(1, Animacao, 1);
}

Scene::~Scene()
{

}

/*Scene::Scene()
{
	textoPontos = "Defeated Enemies:";
	vidas = "Lives:";
}

void Scene::Texto(const char *text, int length, int x, int y)
{
	glMatrixMode(GL_PROJECTION);
	double *matrix = new double[16];
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 600);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glRasterPos2i(x, y);
	for (int i = 0; i < length; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, (int)text[i]);
	}
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);
}*/


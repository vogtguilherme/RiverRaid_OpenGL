#include "Scene.h"
#include"Barco.h"
#include "Aviao.h"
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
Aviao aviao;
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
	//aviao.DesenhaAviao();
	//gasolina.desenhacobustivel();
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
	//glutTimerFunc(50, Animacao, 1);
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
	case 'r':// muda a cor corrente para vermelho
		glColor3f(1.0f, 0.0f, 0.0f);
		break;
	case 'G':
	case 'g':// muda a cor corrente para verde
		glColor3f(0.0f, 1.0f, 0.0f);
		break;
	case 'B':
	case 'b':// muda a cor corrente para azul
		glColor3f(0.0f, 0.0f, 1.0f);
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
// para teclas especiais, tais como F1, PgDn e Home
void Teclas(int tecla, int x, int y )
{
	if (tecla == GLUT_KEY_DOWN)
	{

		//nao serve 
		/*sapo.sx1 += 40;
		sapo.sx2 += 40;
		sapo.sx3 += 40;
		sapo.sx4 += 40;*/

		
			/*barquinho.px1 += 600.0f;
			barquinho.px2 += 600.0f;
			barquinho.px3  += 600.0f;
			barquinho.px4  += 600.0f;
			barquinho.py1  += 600.0f;
			barquinho.py2  += 600.0f;
			barquinho.py3  += 600.0f;
			barquinho.py4  += 600.0f;*/
		
		
	}
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
	
	glutSpecialFunc(Teclas);
	//gasolina.desenhacobustivel();
	if (copter.extremoRight <= -5 && copter.paraLeft == true) copter.paraLeft = false;
	else if (copter.extremoLeft >= 5 && copter.paraLeft == false) copter.paraLeft = true;

	if (copter.paraLeft == true) copter.MoveHelecoptero(-speedl1 * 20, -speedY);
	else if (copter.paraLeft == false) copter.MoveHelecoptero(speedl1 * 20, -speedY);

	copter.Desenhahelecoptyero();
	//aviao.DesenhaAviao();
	
	glutSwapBuffers();
	//função que solicita o redesenho da DesenhaCena, incorporando as modificações de variáveis
	glutPostRedisplay();
}
// Inicializa aspectos do rendering
void Scene::start()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // cor de fundo da janela
	barquinho.criabarco(500, 650, 650, 500, 110, 110, 70, 70);
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


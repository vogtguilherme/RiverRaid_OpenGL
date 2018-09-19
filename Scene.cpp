#include "Scene.h"

Scene::Scene()
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
}

void Scene::DesenhaTexto(Tiro &tiroPonto)
{

	//converte int para string, para contar os inimigos derrotados;
	ostringstream converter;
	converter << tiroPonto.getPontos();
	string numero = converter.str();
	pontos = numero;


	glColor3f(1.0, 1.0, 1.0);
	Texto(vidas.data(), vidas.size(), 20, 570);

	glColor3f(1.0, 10.0, 1.0);
	Texto(textoPontos.data(), textoPontos.size(), 545, 570);
	Texto(pontos.data(), pontos.size(), 710, 570);
}


#include "Scene.h"

#include <time.h>

//vector<Object*> Scene::objetos = vector<Object*>();

Player djongador;
Cenario agua, montanhaEsquerda, montanhaDireita;

int initialTime = time(NULL), finalTime, frameCount = 0;

Scene::Scene(int argc, char **argv, string title, int width, int height)
{

	glutInit(&argc, argv);
	// Indica que deve ser usado um unico buffer para armazenamento da imagem e representacao de cores RGB
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(width, height);
	glutInitWindowPosition(250, 50);

	// Cria uma janela com o titulo especificado
	glutCreateWindow(title.c_str());
	// Especifica para a OpenGL que funcao deve ser chamada para geracao da imagem
	glutDisplayFunc(update);
	glutIdleFunc(update);

	glutReshapeFunc(AlteraTamanhoJanela);
	glutKeyboardFunc(GerenciaTeclado);
	glutMouseFunc(GerenciaMouse);
	glutSpecialFunc(TeclasEspeciais);

	montanhaEsquerda.addVertex(-1.0f, 10.0f);
	montanhaEsquerda.addVertex(-0.6f, 10.0f);
	montanhaEsquerda.addVertex(-0.6f, -10.0f);
	montanhaEsquerda.addVertex(-1.0f, -10.0f);

	montanhaDireita.addVertex(0.6f, 10.0f);
	montanhaDireita.addVertex(1.0, 10.0f);
	montanhaDireita.addVertex(1.0, -10.0f);
	montanhaDireita.addVertex(0.6f, -10.0f);

	agua.addVertex(-0.8f, 10.0f);
	agua.addVertex(0.8f, 10.0f);
	agua.addVertex(0.8f, -10.0f);
	agua.addVertex(-0.8f, -10.0f);

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
	gluOrtho2D(-1, 1, -1, 1);	
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
void Scene::TeclasEspeciais(int key, int x, int y)
{
	if (key == GLUT_KEY_UP) {

	}
	if (key == GLUT_KEY_DOWN) {

	}
	glutPostRedisplay();
}
void Scene::update(void)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT);

	//AlteraTamanhoJanela(240, 180);	
	//AlteraTamanhoJanela(800, 600);
	gluOrtho2D(-5, 5, -5, 5);

	/*for (int i = 0; i < objetos.size(); i++)
	{
		objetos[i]->draw();
	}*/

	agua.desenharElemento(4, 0, 0, 0.75);
	montanhaEsquerda.desenharElemento(4, 0, 0.6f, 0);
	montanhaDireita.desenharElemento(4, 0, 0.6f, 0);

	//djongador.DesenhaPlayer();	

	glutSwapBuffers();

	frameCount++;
	finalTime = time(NULL);
	if (finalTime - initialTime > 0)
	{
		cout << "FPS: " << frameCount / (finalTime - initialTime) << endl;
		frameCount = 0;
		initialTime = finalTime;
	}
}
// Inicializa aspectos do rendering
void Scene::start()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // cor de fundo da janela	

	glutSwapBuffers();
}


Scene::~Scene()
{
}

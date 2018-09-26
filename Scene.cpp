#include "Scene.h"

//vector<Object*> Scene::objetos = vector<Object*>();

void Desenhos(void)
{
	glutSwapBuffers();
	//fun��o que solicita o redesenho da DesenhaCena, incorporando as modifica��es de vari�veis
	glutPostRedisplay();
}

Scene::Scene(int argc, char **argv, string title, int width, int height)
{

	glutInit(&argc, argv);
	// Indica que deve ser usado um unico buffer para armazenamento da imagem e representacao de cores RGB
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	//glutInitWindowSize(width, height);
	//glutInitWindowPosition(0, 0);
	glutInitWindowPosition(250, 50);
	glutInitWindowSize(800, 600);
	/*glutInitWindowSize(300, 300);
	glutInitWindowPosition(100, 0);*/

	// Cria uma janela com o titulo especificado
	glutCreateWindow(title.c_str());
	// Especifica para a OpenGL que funcao deve ser chamada para geracao da imagem
	glutDisplayFunc(update);
	glutIdleFunc(update);

	glutDisplayFunc(Desenhos);

	glutReshapeFunc(AlteraTamanhoJanela);
	glutKeyboardFunc(GerenciaTeclado);
	glutMouseFunc(GerenciaMouse);
	glutSpecialFunc(TeclasEspeciais);
	
	start();
	
	// Dispara a "maquina de estados" de OpenGL
	glutMainLoop();

}

// Fun��o callback chamada quando o tamanho da janela � alterado
void Scene::AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
	// Especifica as dimens�es da Viewport
	glViewport(0, 0, w, h);
	// Inicializa o sistema de coordenadas
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluOrtho2D(-win, win, -win, win);
}

// Fun��o callback chamada para gerenciar eventos de teclado
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

// Fun��o callback chamada para gerenciar eventos do mouse
void Scene::GerenciaMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {
			// comandos quando pressionar o bot�o esquerdo do mouse 
		}
	glutPostRedisplay();
}
// Fun��o callback chamada para gerenciar eventos do teclado
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

	/*for (int i = 0; i < objetos.size(); i++)
	{
		objetos[i]->draw();
	}*/
	
	glutSwapBuffers();
	//fun��o que solicita o redesenho da DesenhaCena, incorporando as modifica��es de vari�veis
	glutPostRedisplay();
}
// Inicializa aspectos do rendering
void Scene::start()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // cor de fundo da janela
	
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


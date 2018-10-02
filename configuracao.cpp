#include "configuracao.h"

int tempoInicial = time(NULL), tempoFinal, contagemFrames = 0;

GLfloat velocidadeMovimento = 0.05f;

GLfloat cameraX, cameraY;
GLfloat cameraPosY;

Bloco cenarioBase;

bool Setup()
{
	cout << "Configurando Cena" << endl;
	cout << "..." << endl;
	
	//Set the viewport
	glViewport(0.f, 0.f, LARGURA_TELA, ALTURA_TELA);

	//Initialize Projection Matrix
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-5, 5, -5, 5);

	//Initialize Modelview Matrix
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//Save the default modelview matrix
	glPushMatrix();

	//Initialize clear color
	glClearColor(0.f, 0.f, 0.f, 1.f);

	//Check for error
	GLenum error = glGetError();
	if (error != GL_NO_ERROR)
	{
		printf("Error initializing OpenGL! %s\n", gluErrorString(error));
		return false;
	}

	return true;
}

void Start()
{	
	cout << "Start" << endl;

	cameraPosY = cameraY;
}

void Render()
{
	//Clear color buffer
	glClear(GL_COLOR_BUFFER_BIT);

	//Pop default matrix onto current matrix
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();

	//Save default matrix again
	glPushMatrix();

	//Move to center of the screen
	//glTranslatef(LARGURA_TELA / 2.f, ALTURA_TELA / 2.f, 0.f);

	cenarioBase.DesenhaBloco();

	contagemFrames++;
	tempoFinal = time(NULL);
	if (tempoFinal - tempoInicial > 0)
	{
		cout << "FPS: " << contagemFrames / (tempoFinal - tempoInicial) << endl;
		contagemFrames = 0;
		tempoInicial = tempoFinal;
	}

	//Update screen
	glutSwapBuffers();
}

void Update()
{		
	cameraPosY += velocidadeMovimento;
	
	//Take saved matrix off the stack and reset it
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
	glLoadIdentity();

	//Move camera to position
	glTranslatef(0.f, cameraY + cameraPosY, 0.f);

	//Save default matrix again with camera translation
	glPushMatrix();
}

void Input(unsigned char key, int x, int y)
{	
	//Comportamentos diferentes para cada tecla que o jogador pressionar

	//Se a tecla for W o Jato deve avançar mais rapidamente, e a câmera subir junto
	if (key == 'w')
	{
		cameraY -= 1.f;
	}
	else if (key == 's')
	{
		cameraY += 1.f;
	}
	else if (key == 'a')
	{
		cameraX -= 1.f;
	}
	else if (key == 'd')
	{
		cameraX += 1.f;
	}

	//Take saved matrix off the stack and reset it
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
	glLoadIdentity();

	//Move camera to position
	glTranslatef(0, -cameraY, 0.f);

	//Save default matrix again with camera translation
	glPushMatrix();
}

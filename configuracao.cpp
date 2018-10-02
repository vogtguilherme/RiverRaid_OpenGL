#include "configuracao.h"

int tempoInicial = time(NULL), tempoFinal, contagemFrames = 0;

GLfloat cameraX, cameraY;

Bloco cenarioBase;

bool Setup()
{
	printf("Configurando Cena");
	
	//Set the viewport
	glViewport(0.f, 0.f, LARGURA_TELA, ALTURA_TELA);

	//Initialize Projection Matrix
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10.0, 10.0, -10.0, 10.0);	

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
}

void Input(unsigned char key, int x, int y)
{	
	//If the user pressed w/a/s/d, change camera position
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
	glTranslatef(-cameraX, -cameraY, 0.f);

	//Save default matrix again with camera translation
	glPushMatrix();
}

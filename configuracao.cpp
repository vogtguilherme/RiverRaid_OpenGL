#include "configuracao.h"

GLfloat cameraX, cameraY;

bool Setup()
{
	printf("Configurando Cena");
	
	//Set the viewport
	glViewport(0.f, 0.f, LARGURA_TELA, ALTURA_TELA);

	//Initialize Projection Matrix
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, LARGURA_TELA, ALTURA_TELA, 0.0, 1.0, -1.0);

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
	glTranslatef(LARGURA_TELA / 2.f, ALTURA_TELA / 2.f, 0.f);
	
	
	//Red quad
	glBegin(GL_QUADS);
	glColor3f(1.f, 0.f, 0.f);
	glVertex2f(-LARGURA_TELA / 4.f, -ALTURA_TELA / 4.f);
	glVertex2f(LARGURA_TELA / 4.f, -ALTURA_TELA / 4.f);
	glVertex2f(LARGURA_TELA / 4.f, ALTURA_TELA / 4.f);
	glVertex2f(-LARGURA_TELA / 4.f, ALTURA_TELA / 4.f);
	glEnd();

	//Move to the right of the screen
	glTranslatef(LARGURA_TELA, 0.f, 0.f);

	//Green quad
	glBegin(GL_QUADS);
	glColor3f(0.f, 1.f, 0.f);
	glVertex2f(-LARGURA_TELA / 4.f, -ALTURA_TELA / 4.f);
	glVertex2f(LARGURA_TELA / 4.f, -ALTURA_TELA / 4.f);
	glVertex2f(LARGURA_TELA / 4.f, ALTURA_TELA / 4.f);
	glVertex2f(-LARGURA_TELA / 4.f, ALTURA_TELA / 4.f);
	glEnd();

	//Move to the lower right of the screen
	glTranslatef(0.f, ALTURA_TELA, 0.f);
	/*
	//Blue quad
	glBegin(GL_QUADS);
	glColor3f(0.f, 0.f, 1.f);
	glVertex2f(-SCREEN_WIDTH / 4.f, -SCREEN_HEIGHT / 4.f);
	glVertex2f(SCREEN_WIDTH / 4.f, -SCREEN_HEIGHT / 4.f);
	glVertex2f(SCREEN_WIDTH / 4.f, SCREEN_HEIGHT / 4.f);
	glVertex2f(-SCREEN_WIDTH / 4.f, SCREEN_HEIGHT / 4.f);
	glEnd();

	//Move below the screen
	glTranslatef(-SCREEN_WIDTH, 0.f, 0.f);

	//Yellow quad
	glBegin(GL_QUADS);
	glColor3f(1.f, 1.f, 0.f);
	glVertex2f(-SCREEN_WIDTH / 4.f, -SCREEN_HEIGHT / 4.f);
	glVertex2f(SCREEN_WIDTH / 4.f, -SCREEN_HEIGHT / 4.f);
	glVertex2f(SCREEN_WIDTH / 4.f, SCREEN_HEIGHT / 4.f);
	glVertex2f(-SCREEN_WIDTH / 4.f, SCREEN_HEIGHT / 4.f);
	glEnd();

	*/

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
		cameraY -= 16.f;
	}
	else if (key == 's')
	{
		cameraY += 16.f;
	}
	else if (key == 'a')
	{
		cameraX -= 16.f;
	}
	else if (key == 'd')
	{
		cameraX += 16.f;
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

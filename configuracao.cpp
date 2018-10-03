#include "configuracao.h"

int tempoInicial = time(NULL), tempoFinal, contagemFrames = 0;

GLfloat velocidadeMovimento = 0.015f;

GLfloat cameraX, cameraY;
GLfloat cameraPosY;

Bloco cenarioBase;
Objeto hud;
Barco navio;
Helicoptero coptero;
Jato player;
Tiro tiro;



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

	hud.addVertex(-5.f, -4.f);
	hud.addVertex(5.f, -4.f);
	hud.addVertex(5.f, -5.f);
	hud.addVertex(-5.f, -5.f);

	cameraPosY = cameraY;

	navio.CriaBarco(0.0, 0.0);
	coptero.Criahelecoptero(1.5, 4.5);
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

	cenarioBase.DesenhaBloco();	
	
	tiro.DesenhaTiro();
	navio.desenhabarco();
	coptero.Desenhahelecoptyero();
	player.desenharElemento(1.f, .75f,.0f, 1.f);
	
	//player.collider.desenharElemento(1.f, 1.f, 1.f, 0.1f);

	coptero.Colider.desenharElemento(0.75, 0.75, 0.75, 0);
	//navio.colisor.desenharElemento(0.75, 0.75, 0.75, 0);
	if (tiro.atirando)
		tiro.MoveBala(0, 0.5f);

	//DebugFPS
	FrameCount();

	hud.desenharElemento(0.5f, 0.5f, 0.5f, 1.0f);
	EscreveVidas();

	//Update screen
	glutSwapBuffers();
}

void Update()
{		
	cameraPosY += velocidadeMovimento;	
	
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
	glLoadIdentity();

	//Desloca a camera verticalmente em velocidade constante
	glTranslatef(0.f, (cameraY - cameraPosY), 0.f);
	//Desloca o jogador da mesma maneira
	player.deslocarElemento(0.f, velocidadeMovimento);
	//Desloca o colisor do jogador
	player.collider.deslocarElemento(0.f, velocidadeMovimento);

	hud.deslocarElemento(0.f, velocidadeMovimento);


	//detectar colisao com a nave e o barco
	if (navio.paraLeft == true) 
	{
		navio.colisor.deslocarElemento(-velocidadeMovimento, 0);
	}
	else if(navio.paraLeft==false)
	{
		navio.colisor.deslocarElemento(velocidadeMovimento, 0);
	}
	

	//detectacolisao com o coptero
	if (coptero.paraLeft == true){
		coptero.Colider.deslocarElemento(-velocidadeMovimento*1.5, 0);
	}
	else if(coptero.paraLeft==false)
	{
		coptero.Colider.deslocarElemento(velocidadeMovimento*1.5, 0);
	}
	

	//Movimentacao barquinho
	navio.detectar(cenarioBase, velocidadeMovimento);
	
	coptero.detectou(cenarioBase, velocidadeMovimento);

	if (player.collider.detectarColisao(cenarioBase.montanhaDireita))
	{
		player.colisaoDetectada = true;
	}
	else if (player.collider.detectarColisao(cenarioBase.montanhaEsquerda))
	{
		player.colisaoDetectada = true;
	}
	else
		player.colisaoDetectada = false;

	player.collider.detectarColisao(coptero.Colider);
	player.collider.detectarColisao(navio.colisor);
	player.collider.detectarColisao(cenarioBase.montanhaEsquerda);
	player.collider.detectarColisao(cenarioBase.montanhaDireita);
	if (player.colisaoDetectada)
	{
		player.ResetarJato(cameraPosY);
	}

	//Save default matrix again with camera translation
	glPushMatrix();
}

void Input(unsigned char key, int x, int y)
{		
	//Comportamentos diferentes para cada tecla que o jogador pressionar

	//Se a tecla for W o Jato deve avan�ar mais rapidamente, e a c�mera subir junto
	if (key == 'w')
	{
		//cameraY += 1.5f;
	}
	else if (key == 's')
	{
		//cameraY += .025f;
	}
	else if (key == 'a')
	{		
		player.deslocarElemento(-.1f, 0);
		player.collider.deslocarElemento(-.1f, 0);
	}
	else if (key == 'd')
	{		
		player.deslocarElemento(.1f, 0);
		player.collider.deslocarElemento(.1f, 0);
	}

	if (key == 't')
	{
		tiro.CriaTiro(player);
		tiro.atirando = true;
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

void FrameCount()
{
	contagemFrames++;
	tempoFinal = time(NULL);
	if (tempoFinal - tempoInicial > 0)
	{
		cout << "FPS: " << contagemFrames / (tempoFinal - tempoInicial) << endl;
		contagemFrames = 0;
		tempoInicial = tempoFinal;
	}
}

void EscreveVidas(void)
{
	char texto[8] = "VIDAS:";
	char teste[20];
	int i = 0;

	//Conversão de inteiro para string, pois a OpenGL só escreve string ou char
	sprintf_s(teste, "%d", player.getVidas());

	//Cor da fonte
	glColor3ub(255, 255, 255);
	//glColor3f(1,0,0);
	//Posição da palavra
	glRasterPos3f(-4.0, -4.5 + cameraPosY, 0.0);

	//Uso do "for" para escrever mais de um caracter
	for (i = 0; i <= strlen(texto); i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, texto[i]);

	for (i = 0; i <= strlen(teste); i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, teste[i]);
}

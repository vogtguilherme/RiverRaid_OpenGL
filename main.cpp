/*#include "Scene.h"

void main(int argc, char **argv)
{
	Scene minhaCena(argc, argv, "River Raid", 800, 600);
}*/

#include "configuracao.h"

void runMainLoop(int val);
/*
Pre Condition:
-Initialized freeGLUT
Post Condition:
-Calls the main loop functions and sets itself to be called back in 1000 / SCREEN_FPS milliseconds
Side Effects:
-Sets glutTimerFunc
*/

int main(int argc, char* args[])
{
	//Initialize FreeGLUT
	glutInit(&argc, args);

	//Create OpenGL 2.1 context
	glutInitContextVersion(2, 1);

	//Create Double Buffered Window
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(LARGURA_TELA, ALTURA_TELA);
	glutCreateWindow("River Raid");

	//Do post window/context creation initialization
	if (!Setup())
	{
		printf("Unable to initialize graphics library!\n");
		return 1;
	}

	Start();

	//Set keyboard handler
	glutKeyboardFunc(Input);

	//Set rendering function
	glutDisplayFunc(Render);

	//glutIdleFunc(Update);

	//Set main loop
	glutTimerFunc(1000 / FPS, runMainLoop, 0);

	//Start GLUT main loop
	glutMainLoop();

	return 0;
}

void runMainLoop(int val)
{	
	Render();	
	//Frame logic
	Update();

	//Run frame one more time
	glutTimerFunc(1000 / FPS, runMainLoop, val);
}

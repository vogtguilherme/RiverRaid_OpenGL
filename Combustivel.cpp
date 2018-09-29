#include "Combustivel.h"
#include "GL\glew.h"
#include "GL\freeglut.h"


void Combustivel::criacombustivel(float _x, float _y)
{
	px1 = 0.1f + _x;
	px2 = 0.1f + _x;
	px3= 0.2f + _x;
	px4= 0.4f + _x;
	px5= 0.5f + _x;
	px6= 0.5f + _x;

	py1 = 0.4f + _y;
	py2 = 0.8f + _y;
	py3 = 0.9f + _y;
	py4 = 0.9f + _y;
	py5 = 0.8f + _y;
	py6 = 0.4f + _y;

}

void Combustivel::desenhacobustivel()
{
	if (paradowun)
	{
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_LINE_LOOP);
		glVertex2f(px1 = 0.1f, py1 = 0.4f);
		glVertex2f(px2 = 0.1f, py2 = 0.8f);
		glVertex2f(px3 = 0.2f, py3 = 0.9f);
		glVertex2f(px4 = 0.4f, py4 = 0.9f);
		glVertex2f(px5 = 0.5f, py5 = 0.8f);
		glVertex2f(px6 = 0.5f, py6 = 0.4f);
		glEnd();
	}
	
}

void Combustivel::movecombustivel(float _x, float _y)
{
	if (paradowun)extremodowm = py1 + 0.4f;
	else extremodowm = py3 - 0.9f;

	if(paradowun)extremoUP = py1 - 0.4f;
	else extremoUP = py3 + 0.9f;

	px1 += _x;
	px2 += _x;
	px3 += _x;
	px4 += _x;
	px5 += _x;
	px6 += _x;

	py1 += _y;
	py2 += _y;
	py3 += _y;
	py4 += _y;
	py5 += _y;
	py6 += _y;
}
Combustivel::Combustivel()
{


}


Combustivel::~Combustivel()
{
}

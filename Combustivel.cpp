#include "Combustivel.h"
#include "GL\glew.h"
#include "GL\freeglut.h"


void Combustivel::criacombustivel(float _px1, float _px2, float _px3, float _px4, float _px5, float _px6, float _py1, float _py2, float _py3, float _py4, float _py5, float _py6)
{
	px1 = 0.1f + _px1;
	px2 = 0.1f + _px2;
	px3= 0.2f + _px3;
	px4= 0.4f + _px4;
	px5= 0.5f + _px5;
	px6= 0.5f + _px6;

	py1 = 0.4f + _py1;
	py2 = 0.8f + _py2;
	py3 = 0.9f + _py3;
	py4 = 0.9f + _py4;
	py5 = 0.8f + _py5;
	py6 = 0.4f + _py6;

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
	if (paradowun)extremodowm = px1 + 0.1f;
	else extremodowm = px5 - 0.5f;

	if(paradowun)extremoUP = px1 - 0.1f;
	else extremoUP = px5 + 0.5f;

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

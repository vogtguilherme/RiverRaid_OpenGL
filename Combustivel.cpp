#include "Combustivel.h"
#include "GL\glew.h"
#include "GL\freeglut.h"


void Combustivel::criacombustivel(float _px1, float _px2, float _px3, float _px4, float _px5, float _px6, float _py1, float _py2, float _py3, float _py4, float _py5, float _py6)
{
	px1 = _px1;
	px2 = _px2;
	px3= _px3;
	px4= _px4;
	px5= _px5;
	px6= _px6;

	py1 = _py1;
	py2 = _py2;
	py3 = _py3;
	py4 = _py4;
	py5 = _py5;
	py6 = _py6;
}

void Combustivel::desenhacobustivel()
{

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(px1 = 0.1f, py1 = 0.4f);
	glVertex2f(px2 = 0.1f, py2 = 0.6f);
	glVertex2f(px3 = 0.2f, py3 = 0.7f);
	glVertex2f(px4 = 0.3f, py4 = 0.6f);
	glVertex2f(px5 = 0.3f, py5 = 0.4f);
	glVertex2f(px6 = 0.2f, py6 = 0.3f);
	glEnd();
}

Combustivel::Combustivel()
{


}


Combustivel::~Combustivel()
{
}

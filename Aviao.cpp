#include "Aviao.h"
#include "GL\glew.h"
#include "GL\freeglut.h"


void Aviao::CriaAviao(float _Px1, float _Px2, float _Px3, float _Px4, float _Px5, float _Px6, float _Px7, float _Px8, float _Px9, float _Px10, float _Px11, float _Px12, float _Px13, float _Px14, float _Px15, float _Px16, float _Px17, float _Px18, float _Py1, float _Py2, float _Py3, float _Py4, float _Py5, float _Py6, float _Py7, float _Py8, float _Py9, float _Py10, float _Py11, float _Py12, float _Py13, float _Py14, float _Py15, float _Py16, float _Py17, float _Py18)
{
	Px1 = _Px1;
	Px2 = _Px2;
	Px3 = _Px3;
	Px4 = _Px4;
	Px5 = _Px5;
	Px6 = _Px6;
	Px7 = _Px7;
	Px8 = _Px8;
	Px9 = _Px9;
	Px10 = _Px10;
	Px11 = _Px11;
	Px12 = _Px12;
	Px13 = _Px13;
	Px14 = _Px14;
	Px15 = _Px15;
	Px16 = _Px16;
	Px17 = _Px17;
	Px18 = _Px18;

	Py1 = _Py1;
	Py2 = _Py2;
	Py3 = _Py3;
	Py4 = _Py4;
	Py5 = _Py5;
	Py6 = _Py6;
	Py7 = _Py7;
	Py8 = _Py8;
	Py9 = _Py9;
	Py10 = _Py10;
	Py11 = _Py11;
	Py12 = _Py12;
	Py13 = _Py13;
	Py14 = _Py14;
	Py15 = _Py15;
	Py16 = _Py16;
	Py17 = _Py17;
	Py18 = _Py18;

}

void Aviao::DesenhaAviao()
{
	glColor3f(1.0, 0.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(Px1 = 0.2f, Py1 = 0.6f);
	glVertex2f(Px2 = 0.2f, Py2 = 0.8f);
	glVertex2f(Px3 = 0.5f, Py3 = 0.9f);
	glVertex2f(Px4 = 0.5f, Py4 = 1.0f);
	glVertex2f(Px5 = 0.7f, Py5 = 1.0f);
	glVertex2f(Px6 = 0.7f, Py6 = 0.9f);
	glVertex2f(Px7 = 0.9f, Py7 = 0.8f);
	glVertex2f(Px8 = 0.9f, Py8 = 0.6f);
	glVertex2f(Px9 = 0.7f, Py9 = 0.7f);
	glVertex2f(Px10 = 0.7f, Py10 = 0.5f);
	glVertex2f(Px11 = 0.9f, Py11 = 0.4f);
	glVertex2f(Px12 = 0.9f, Py12 = 0.3f);
	glVertex2f(Px13 = 0.7f, Py13 = 0.4f);
	glVertex2f(Px14 = 0.5f, Py14 = 0.4f);
	glVertex2f(Px15 = 0.3f, Py15 = 0.3f);
	glVertex2f(Px16 = 0.3f, Py16 = 0.4f);
	glVertex2f(Px17 = 0.5f, Py17 = 0.5f);
	glVertex2f(Px18 = 0.5f, Py18 = 0.7f);
	glEnd();

}

Aviao::Aviao()
{
}


Aviao::~Aviao()
{
}

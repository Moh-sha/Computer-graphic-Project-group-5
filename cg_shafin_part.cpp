#include<bits/stdc++.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>
#include<cstdio>
#include<time.h>

# define PI           3.14159265358979323846
using namespace std;
bool stop = 1;
bool temp =0;
bool rainday = false;
GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
GLfloat e = 0.0f;
float _move2= 0.0;
float _move = 0.0;
float _move1=0.0;
float _move3=0.0;
float _move4=0.0;
float _move5=0.0;
float _move6=0.0;




void night(int n);
void night1();


GLfloat q = 0.0f;
GLfloat position =0.0f;
GLfloat position2=0.0f;
GLfloat position3=0.0f;
GLfloat speed = 0.009f;

int r = 0;

void init() {
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2);
}

void update(int value) {
    if(position > 1.0)
        position = -1.0f;

    position+= speed;

    glutPostRedisplay();

    glutTimerFunc(100, update, 0);
}


void update2(int value){

    _move +=0.005f;
    if(_move-1.966 > 1.0)
    {
        _move = -1.0;
    }

    _move1 +=0.002f;
    if(_move1-1.993 > 1.0)
    {
        _move1 = -1.0;
    }

    if(stop==1)
    {
        _move2 -=0.01f;
        if(_move2+1.5 < -1.0)
        {
            _move2 = 1.0;
        }

    }


    _move3 -=0.01f;
    if(_move3+1.966 < -1.0)
    {
        _move3 = 1.0;
    }

    _move4 +=0.0005f;
    if(_move4-1.39 > 1.0)
    {
        _move4 = -1.4;
    }

    _move5 +=0.0006f;
    if(_move5-0.79>1.0)
    {
        _move5 = -1.4;
    }


    _move6 +=0.01f;
    if(_move6-1.663 > 1.0)
    {
        _move6 = -1.0;
    }

    glutPostRedisplay();

    glutTimerFunc(25, update2, 0);
}



void cloud() {

    glPushMatrix();
    glTranslatef(position,0.0,0.0);
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * 3.1416;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			       y + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),
                   b + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),
                   d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),
                   f + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),
                   h + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    glPopMatrix();
}

void cloud2()
{
    glPushMatrix();
    glTranslatef(position,0.0,0.0);
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * 3.1416;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
			       y + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),
                   b + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),
                   d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),
                   f + (radius * sin(i * twicePi / triangleAmount)));
    }

	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 255, 255);

    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),
                   h + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
	glPopMatrix();
}




void tree(){
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslated(0.6,0.05,0);
	glScalef(.4,.5,0);


    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(-0.1f,-0.33f,0.0f);
    glVertex3f(-0.066f,-0.33f,0.0f);
    glVertex3f(-0.066f,0.166f,0.0f);
    glVertex3f(-0.1f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.4f,-0.33f,0.0f);
    glVertex3f(0.433f,-0.33f,0.0f);
    glVertex3f(0.433f,0.166f,0.0f);
    glVertex3f(0.4f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.9f,-0.33f,0.0f);
    glVertex3f(0.933f,-0.33f,0.0f);
    glVertex3f(0.933f,0.166f,0.0f);
    glVertex3f(0.9f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(-0.15f,-0.166f,0.0f);
    glVertex3f(-0.016f,-0.166f,0.0f);
    glVertex3f(-0.0833f,-0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.35f,-0.166f,0.0f);
    glVertex3f(0.483f,-0.166f,0.0f);
    glVertex3f(0.4166f,0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.85f,-0.166f,0.0f);
    glVertex3f(0.983f,-0.166f,0.0f);
    glVertex3f(0.9166f,0.0f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(-0.15f,-0.05f,0.0f);
    glVertex3f(-0.016f,-0.05f,0.0f);
    glVertex3f(-0.0833f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.35f,-0.05f,0.0f);
    glVertex3f(0.483f,-0.05f,0.0f);
    glVertex3f(0.4166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();

    glPopMatrix();
}
void tree2(){
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslated(-1,0.05,0);
	glScalef(.4,.5,0);

    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(-0.1f,-0.33f,0.0f);
    glVertex3f(-0.066f,-0.33f,0.0f);
    glVertex3f(-0.066f,0.166f,0.0f);
    glVertex3f(-0.1f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.4f,-0.33f,0.0f);
    glVertex3f(0.433f,-0.33f,0.0f);
    glVertex3f(0.433f,0.166f,0.0f);
    glVertex3f(0.4f,0.166f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6,0.298,0.0);
    glVertex3f(0.9f,-0.33f,0.0f);
    glVertex3f(0.933f,-0.33f,0.0f);
    glVertex3f(0.933f,0.166f,0.0f);
    glVertex3f(0.9f,0.166f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(-0.15f,-0.166f,0.0f);
    glVertex3f(-0.016f,-0.166f,0.0f);
    glVertex3f(-0.0833f,-0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.35f,-0.166f,0.0f);
    glVertex3f(0.483f,-0.166f,0.0f);
    glVertex3f(0.4166f,0.0f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.4,0.0);
    glVertex3f(0.85f,-0.166f,0.0f);
    glVertex3f(0.983f,-0.166f,0.0f);
    glVertex3f(0.9166f,0.0f,0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(-0.15f,-0.05f,0.0f);
    glVertex3f(-0.016f,-0.05f,0.0f);
    glVertex3f(-0.0833f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.35f,-0.05f,0.0f);
    glVertex3f(0.483f,-0.05f,0.0f);
    glVertex3f(0.4166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4,0.8,0.0);
    glVertex3f(0.85f,-0.05f,0.0f);
    glVertex3f(0.983f,-0.05f,0.0f);
    glVertex3f(0.9166f,0.33f,0.0f);
    glEnd();

    glPopMatrix();
}






int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("National Martyrs Memorial");
    init();


    glutTimerFunc(10, update, 0);
    glutTimerFunc(10, update2, 0);


    glutMainLoop();
    return 0;
}

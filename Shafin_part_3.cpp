#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>

using namespace std;

GLfloat q = 0.0f;
GLfloat position =0.0f;
GLfloat position2=0.0f;
GLfloat position3=0.0f;
GLfloat speed = 0.009f;


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
	glFlush();
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Cloud2");
    //init();
    glutDisplayFunc(cloud2);



   glutMainLoop();
    return 0;
}

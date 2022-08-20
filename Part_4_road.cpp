#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>

using namespace std;

void road() {

    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
    glTranslatef(0,-.7,0);
      glBegin(GL_POLYGON);
      glColor3f(0.698, 0.745, 0.7098);
      glVertex3f(-1.0f, -0.33f, 0.0f);
      glVertex3f(1.0f, -0.33f, 0.0f);
      glVertex3f(1.0f, 0.0f, 0.0f);
      glVertex3f(-1.0f, 0.0f, 0.0f);

//////////// Roadline
      glBegin(GL_QUADS);
      glColor3f(1.0, 1.0, 1.0);
      glVertex3f(-0.33f, -0.166f, 0.0f);
      glVertex3f(-0.166f, -0.166f, 0.0f);
      glVertex3f(-0.166f, -0.13f, 0.0f);
      glVertex3f(-0.33f, -0.13f, 0.0f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3f(1.0, 1.0, 1.0);
      glVertex3f(0.33f, -0.166f, 0.0f);
      glVertex3f(0.833f, -0.166f, 0.0f);
      glVertex3f(0.833f, -0.13f, 0.0f);
      glVertex3f(0.33f, -0.13f, 0.0f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3f(1.0, 1.0, 1.0);
      glVertex3f(0.833f, -0.166f, 0.0f);
      glVertex3f(1.0f, -0.166f, 0.0f);
      glVertex3f(1.0f, -0.13f, 0.0f);
      glVertex3f(0.833f, -0.13f, 0.0f);
      glEnd();
      glPopMatrix();
      glFlush();

}





int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("road");
    //init();
    glutDisplayFunc(road);



   glutMainLoop();
    return 0;
}


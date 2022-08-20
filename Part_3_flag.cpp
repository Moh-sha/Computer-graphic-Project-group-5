#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>


using namespace std;


void flag() {
    glPushMatrix();
    glTranslatef(0.09,0.0,0.0);

    glBegin(GL_QUADS);
    glColor3ub(150, 40, 27);

    glVertex2f(-0.1f, -1.0f);
    glVertex2f(0.1f, -1.0f);
    glVertex2f(0.05f, -0.9f);
    glVertex2f(-0.05f, -0.9f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(242, 242, 242);

    glVertex2f(-0.01f, -1.0f);
    glVertex2f(0.01f, -1.0f);
    glVertex2f(0.01f, 0.05f);
    glVertex2f(-0.01f, 0.05f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 153, 51);

    glVertex2f(0.01f, 0.05f);
    glVertex2f(0.37f, 0.05f);
    glVertex2f(0.37f, -0.2f);
    glVertex2f(0.01f, -0.2f);

    glEnd();

    float x = 0.19f, y = -0.07f, r = 0.07;
    float twicePie = 2.0 * 3.1416;
    int trainglePoints = 20;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 0, 0);

    for(int i = 0; i<=trainglePoints; i++){
        glVertex2f(x + r * cos(i * twicePie / trainglePoints),
                   y + r * sin(i * twicePie / trainglePoints));


    }

    glEnd();
    glFlush();
    glPopMatrix();
}







int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Flag");
    glutDisplayFunc(flag);



   glutMainLoop();
    return 0;
}


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

void sky() {
    glBegin(GL_QUADS);
    glColor3ub(98, 154, 214);

    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);

    glEnd();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("National Martyrs Memorial");
    init();
    glutDisplayFunc(national_memorialN);
    glutDisplayFunc(national_memorialD);
    glutTimerFunc(10, update, 0);
    glutTimerFunc(10, update2, 0);
    glutMouseFunc(handleMouse);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}


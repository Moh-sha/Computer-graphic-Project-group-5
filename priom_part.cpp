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

void borderPool()
{


    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);

    glVertex2f(-0.4f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.5f, -1.0f);
    glVertex2f(-0.5f, -1.0f);

    glEnd();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("National Martyrs Memorial");
    init();
    glutDisplayFunc(borderPool);
    glutMainLoop();
    return 0;
}



















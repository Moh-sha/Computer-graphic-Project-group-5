#include<bits/stdc++.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>

using namespace std;

void pool()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 255);

    glVertex2f(-0.3f,-0.4f);
    glVertex2f(0.3f,-0.4f);
    glVertex2f(0.4f,-1.0f);
    glVertex2f(-0.4f,-1.0f);

    glEnd();
    glFlush();

}

int main(int argc,char** argv)
{
    glutglutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Pool");
    glutDisplayFunc(pool);





    glutMainLoop();
    return 0;
}










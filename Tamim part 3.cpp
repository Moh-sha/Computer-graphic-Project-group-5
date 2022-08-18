#include<bits/stdc++.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>

using namespace std;

void init() {
    glClearColor(0.0f,0.0f,0.0f,1.0f);   //set background color
    glClear(GL_COLOR_BUFFER_BIT);   //Clear the color buffer (background)
    glLineWidth(2);
}

void point(GLfloat c1,GLfloat c2){
         glPointSize(1.5);
    glBegin(GL_POINTS);

    glColor3ub(255,255,255);
    glVertex2f(c1, c2);
    glEnd();
}

void star1()/// Tamim's Part
{
      point(-.93,.83);
      point(-.85,.77);
      point(-.72,.70);
      point(-.74,.90);
      point(-.67,.86);
      point(-.61,.67);
      point(-.55,.59);
      point(-.51,.66);
      point(-.47,.84);
      point(-.43,.95);
      point(-.39,.75);
      point(-.33,.55);
      point(-.25,.68);
      point(-.20,.81);
      point(-.17,.74);
      point(-.12,.93);
      point(-.08,.67);
      point(-.04,.97);
      point(.06,.73);
      point(.02,.55);
      point(.93,.83);
      point(.85,.77);
      point(.72,.70);
      point(.74,.90);
      point(.67,.86);
      point(.61,.67);
      point(.55,.59);
      point(.51,.66);
      point(.47,.84);
      point(.43,.95);
      point(.39,.75);
      point(.33,.55);
      point(.25,.68);
      point(.20,.81);
      point(.17,.74);
      point(.12,.93);
      glFlush();

}







int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 720);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Star");
    init();
    glutDisplayFunc(star1);




    glutMainLoop();
    return 0;
}

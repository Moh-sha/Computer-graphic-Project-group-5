void field() {
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);

    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glEnd();
}

#include <windows.h>
#include <GL/glut.h>

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-320, 320, -240, 240);
}

void drawLines() {
    // Atur warna garis
    glColor3f(0.0, 0.0, 0.0);

    // Gambar garis pertama
    glBegin(GL_LINES);
    glVertex2f(-100.0, 0.0);
    glVertex2f(100.0, 0.0);
    glEnd();

    // Gambar garis kedua
    glBegin(GL_LINES);
    glVertex2f(0.0, -100.0);
    glVertex2f(0.0, 100.0);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    drawLines();
    glPopMatrix();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Dua Garis Titik Potong OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
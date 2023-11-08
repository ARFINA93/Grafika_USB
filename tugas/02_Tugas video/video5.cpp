#include <windows.h>
#include <GL/glut.h>
#include <cmath>

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-320, 320, -240, 240);
}

void drawShapes() {
    // Atur warna garis
    glColor3f(0.0, 0.0, 0.0);

    // Gambar segi enam dengan faktor skala 1.0
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 6; i++) {
        float angle = 2.0 * 3.14159265 * float(i) / 6;
        float x = 100.0 * cosf(angle);
        float y = 100.0 * sinf(angle);
        glVertex2f(x, y);
    }
    glEnd();

    // Gambar segi lima dengan faktor skala 0.8 (lebih kecil)
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 5; i++) {
        float angle = 2.0 * 3.14159265 * float(i) / 5;
        float x = 80.0 * cosf(angle);
        float y = 80.0 * sinf(angle);
        glVertex2f(x, y);
    }
    glEnd();

    // Gambar segiempat dengan faktor skala 0.6 (lebih kecil)
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 4; i++) {
        float angle = 2.0 * 3.14159265 * float(i) / 4;
        float x = 60.0 * cosf(angle);
        float y = 60.0 * sinf(angle);
        glVertex2f(x, y);
    }
    glEnd();

    // Gambar segitiga dengan faktor skala 0.4 (lebih kecil)
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 3; i++) {
        float angle = 2.0 * 3.14159265 * float(i) / 3;
        float x = 40.0 * cosf(angle);
        float y = 40.0 * sinf(angle);
        glVertex2f(x, y);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    drawShapes();
    glPopMatrix();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Menggambar di OpenGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
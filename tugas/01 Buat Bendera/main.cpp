#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Mendapatkan lebar dan tinggi jendela
    int windowWidth = glutGet(GLUT_WINDOW_WIDTH);
    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);

    // Menggambar persegi panjang hitam di tengah
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.3, -0.1); 
    glVertex2f(0.3, -0.1);
    glVertex2f(0.3, 0.1);
    glVertex2f(-0.3, 0.1);
    glEnd();

    // Menggambar persegi panjang putih di tengah
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.3, -0.3); 
    glVertex2f(0.3, -0.3);
    glVertex2f(0.3, -0.1);
    glVertex2f(-0.3, -0.1);
    glEnd();

    // Menggambar persegi panjang hijau di tengah
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.3, -0.5); 
    glVertex2f(0.3, -0.5);
    glVertex2f(0.3, -0.3);
    glVertex2f(-0.3, -0.3);
    glEnd();

    // Menggambar segitiga merah di tengah
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.3, 0.1);   // Titik kiri bawah
    glVertex2f(0.0, -0.2);   // Titik tengah atas
    glVertex2f(-0.3, -0.5);  // Titik kanan bawah
    glEnd();

    glFlush();
}

void myinit() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bendera Palestina");

    glutDisplayFunc(display);
    myinit();

    glutMainLoop();

    return 0;
}

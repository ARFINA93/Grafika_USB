#include <windows.h>
#include <GL/glut.h>

void init() {
    // Atur warna latar belakang layar menjadi putih
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-320, 320, -240, 240);
}

// Fungsi untuk menampilkan gambar segitiga
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 100.0f);
    glVertex2f(-100.0f, -100.0f);
    glVertex2f(100.0f, -100.0f);

    glEnd();
    glFlush();
}

// Fungsi utama
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Menggambar segitiga di OpenGL");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

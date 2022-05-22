#include <GL/glut.h>
#include <stdlib.h>

int ombro = -50, cotovelo = 20;

void display(void){
  glClear(GL_COLOR_BUFFER_BIT);

  glPushMatrix();{ // empilhando

    glTranslatef(-1, 0, 0); // voltando os pontos antes da rotação
    glRotatef(ombro, 0, 0, 1); // rotação
    glTranslatef(1, 0, 0); // translação de retorno do desenho

    glPushMatrix();{ // empilhando nova matriz para desenhar
      glColor3f(0.5,0.0,0.0);
      glScalef(2.0, 0.4, 1.0);
      glutWireCube(1.0);
    }
    glPopMatrix(); // desempilhando a matriz de desenho

    glTranslatef(2.0, 0.0, 0.0); // translação para desenhar mais à fernte
    glPushMatrix();{ // empilhando nova matriz
        glTranslatef(-1, 0, 0); // voltando os pontos antes da rotação
        glRotatef(cotovelo, 0, 0, 1); // rotação
        glTranslatef(1, 0, 0); // voltando os pontos para desenhar 
        glColor3f(0.0,0.0,0.5);
        glScalef(2.0, 0.4, 1.0);
        glutWireCube(1.0);
    }
    glPopMatrix(); // desempilhando a matriz

  }
  glPopMatrix(); // desempilhando todas as matrizes
  glutSwapBuffers();
}

void reshape (int w, int h){
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(75.0, w/(h*1.0), 1.0, 20.0);
  gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}

void keyboard (unsigned char key, int x, int y){
  switch (key) {
    case 'a':
      if(ombro <= 50){
        ombro = (ombro + 5) % 360;
        glutPostRedisplay();
      }
      break;
      
    case 'd':
      if(ombro >= -50){
        ombro = (ombro - 5) % 360;
        glutPostRedisplay();
      }
      break;

    case 's':
      if(cotovelo <= 50){
        cotovelo = (cotovelo + 5) % 360;
        glutPostRedisplay();
      }
      break;

    case 'w':
      if(cotovelo >= 20){
        cotovelo = (cotovelo - 5) % 360;
        glutPostRedisplay();
      }
      break;

    case 27:
      exit(0);
      break;

    default:
      break;
    }
}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(500, 500);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glClearColor(1,1,1,1);
  glutMainLoop();
  return 0;
}
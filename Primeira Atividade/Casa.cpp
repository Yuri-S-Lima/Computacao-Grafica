#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>

void frente();
void lateral();

void display(void) {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // definindo a cor de fundo da cena
	glClear(GL_COLOR_BUFFER_BIT); // Iniciando o buffer de cores antes da sua inicialzação

	glMatrixMode(GL_MODELVIEW); // Especificando que as operações serão feitas na matrix modelview
	glLoadIdentity(); // Carregando a matrix identidade

	frente();
	lateral();

	glFlush(); // Informamdo que as operações devem ser processadas imediatamente e exibidas na tela
}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv); // Inicializando a OpenGl
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Configurando os modos de exibição
	glutInitWindowSize(700, 700); // Definindo o tamanho da janela em pixels
	glutInitWindowPosition(0, 0); // Definindo a posição inicial da janela
	glutCreateWindow("CASA"); // Definindo o nome da janela
	glutDisplayFunc(display); // Especificando a função de rendering (exibe a cena no loop)

	glutMainLoop(); //Executa o loop de renderização
	return 0;
}

void paredeFrente() {
	glLineWidth(5);// Frente
	glBegin(GL_QUADS); {// Desenhando somente pontos

		glColor3f(0.0f, 0.0f, 1.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(-0.4f, 0); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(-1, 0);

		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(-1, 0.5f);

		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(-0.4, 0.5f);

		glEnd(); // Encerrando a criação de pontos
	}
}

void entrada() {
	glLineWidth(5); // Entrada
	glBegin(GL_QUADS); {

		glColor3f(0.0f, 0.0f, 0.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(-0.9f, 0); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(-1, -0.25f);

		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(-0.6f, -0.25f);

		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(-0.5f, 0);

		glEnd(); // Encerrando a criação de pontos
	}
}

void abertura() {
	glLineWidth(5); // Abertura
	glBegin(GL_QUADS); {

		glColor3f(1.5f, 1.5f, 1.5f); // Definindo a cor do desenho em formato RGB
		glVertex2f(-0.85f, 0.15f); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(1.5f, 1.5f, 1.5f);
		glVertex2f(-0.8f, 0.15f);

		glColor3f(1.5f, 1.5f, 1.5f);
		glVertex2f(-0.8f, 0.2f);

		glColor3f(1.5f, 1.5f, 1.5f);
		glVertex2f(-0.85f, 0.2f);

		glEnd(); // Encerrando a criação de pontos
	}
}

void porta() {
	glLineWidth(5); // Porta
	glBegin(GL_QUADS); {// Desenhando somente pontos

		glColor3f(1.0f, 0.0f, 1.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(-0.5f, 0); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(-0.9f, 0);

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(-0.9f, 0.3f);

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(-0.5f, 0.3f);

		glEnd(); // Encerrando a criação de pontos
	}
}

void telhadoFrente() {
	glLineWidth(5); // Telhado Frente
	glBegin(GL_TRIANGLES); { // Desenhando somente pontos

		glColor3f(0.0f, 1.0f, 0.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(-1, 0.5f); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex2f(-0.4f, 0.5f);

		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex2f(-0.7f, 1);

		glEnd(); // Encerrando a criação de pontos
	}
}

void linhasEsquerda() {
	glLineWidth(5); // Janela Esquerda - Linhas
	glBegin(GL_LINES); {

		glColor3f(1.0f, 0.0f, 1.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(-0.1f, 0.4f); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(-0.1f, 0.2f);

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(-0.3f, 0.3f);

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(0.1f, 0.3f);

		glEnd(); // Encerrando a criação de pontos
	}
}

void linhasDireita() {
	glLineWidth(5); // Janela Direita - Linhas
	glBegin(GL_LINES); {

		glColor3f(1.0f, 0.0f, 1.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(0.7f, 0.3f); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(0.3f, 0.3f);

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(0.5f, 0.4f);

		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(0.5f, 0.2f);

		glEnd(); // Encerrando a criação de pontos
	}
}

void janelaEsquerda() {
	glLineWidth(5); // Janela Esquerda
	glBegin(GL_QUADS); {

		glColor3f(1.0f, 1.0f, 0.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(-0.3f, 0.4f); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.1, 0.4f);

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.1, 0.2f);

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(-0.3f, 0.2f);

		glEnd(); // Encerrando a criação de pontos
	}
}

void janelaDireita() {
	glLineWidth(5); // Janela Direita
	glBegin(GL_QUADS); {

		glColor3f(1.0f, 1.0f, 0.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(0.7f, 0.4f); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.3f, 0.4f);

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.3f, 0.2f);

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.7f, 0.2f);

		glEnd(); // Encerrando a criação de pontos
	}
}

void paredeLateral() {
	glLineWidth(5); // Parede Lateral
	glBegin(GL_QUADS); {

		glColor3f(1.0f, 0.0f, 0.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(-0.4f, 0.5f); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(0.8f, 0.5f);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(0.8f, 0);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(-0.4f, 0);

		glEnd(); // Encerrando a criação de pontos
	}
}

void telhadoLateral() {
	glLineWidth(5); // Telhado Lateral
	glBegin(GL_QUADS); {

		glColor3f(0.0f, 1.0f, 1.0f); // Definindo a cor do desenho em formato RGB
		glVertex2f(0.5f, 1); // Especificando pontos no espaço bidimensional (pixels)

		glColor3f(0.0f, 1.0f, 1.0f);
		glVertex2f(-0.7f, 1);

		glColor3f(0.0f, 1.0f, 1.0f);
		glVertex2f(-0.4f, 0.5f);

		glColor3f(0.0f, 1.0f, 1.0f);
		glVertex2f(0.8f, 0.5f);

		glEnd();
	}
}

void frente() {
	paredeFrente();
	porta();
	abertura();
	telhadoFrente();
	entrada();
}

void lateral() {
	paredeLateral();
	janelaEsquerda();
	linhasEsquerda();
	janelaDireita();
	linhasDireita();
	telhadoLateral();
}
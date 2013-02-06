#include "graphics.h"
#include <gl\glut.h>

bool* Keystates = new bool[4];// handle multiply input by changing [?] to number of keys you want to handle
void RenderScene(void);
void HandleTimer(int ID);
void particles2(void);
void ChangeSize(GLsizei w, GLsizei h);
void keyPressed (unsigned char key, int x, int y);

int main(){
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB );
	glutInitWindowSize(500, 500);
	glutCreateWindow("This is the window title");
	//glutReshapeFunc(ChangeSize);
	glutDisplayFunc(RenderScene);
	//glutKeyboardFunc(keyPressed);
	//glutTimerFunc(1000,HandleTimer,1);
	glutMainLoop();
}

void RenderScene(void){
	glClear(GL_COLOR_BUFFER_BIT);//Clears the screen
	 /*GLuint texture = "risk map.png";
glEnable(GL_TEXTURE_2D);
glBindTexture( GL_TEXTURE_2D, texture );*/
	//p->Render();
	glFlush(); //Shove everything through the "pipeline"
	glutSwapBuffers();
	glShadeModel(GL_SMOOTH);
}

graphics::graphics(void)
{
}


graphics::~graphics(void)
{
}

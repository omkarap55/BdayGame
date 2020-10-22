#pragma once

//Happy Birthday


//variable declarations


/*glColor3f()*/

GLfloat TopColor_R = 0.9f;
GLfloat TopColor_G = 0.5f;
GLfloat TopColor_B = 0.0f;

GLfloat MidColor_R = 0.94f;
GLfloat MidColor_G = 0.72f;
GLfloat MidColor_B = 0.43f;

GLfloat BottomColor_R = 1.0f;
GLfloat BottomColor_G = 1.0f;
GLfloat BottomColor_B = 1.0f;

/*GLfloat TopColor_R = 0.15f;
GLfloat TopColor_G = 0.78f;
GLfloat TopColor_B = 0.78f;

GLfloat MidColor_R = 0.58f;
GLfloat MidColor_G = 0.9f;
GLfloat MidColor_B = 0.9f;

GLfloat BottomColor_R = 1.0f;
GLfloat BottomColor_G = 1.0f;
GLfloat BottomColor_B = 1.0f;*/


/*glScalef()*/

GLfloat AllLettersSize_X = 0.8f;
GLfloat AllLettersSize_Y = 0.8f;


/*glTranslatef()*/

GLfloat H1_Translate_X = -0.6f;
GLfloat H1_Translate_Y = 0.3f;

GLfloat A1_Translate_X = -0.3f;
GLfloat A1_Translate_Y = 0.3f;

GLfloat P1_Translate_X = 0.0f;
GLfloat P1_Translate_Y = 0.3f;

GLfloat P2_Translate_X = 0.3f;
GLfloat P2_Translate_Y = 0.3f;

GLfloat Y1_Translate_X = 0.6f;
GLfloat Y1_Translate_Y = 0.3f;



GLfloat B_Translate_X = -1.05f;
GLfloat B_Translate_Y = -0.3f;

GLfloat I_Translate_X = -0.75f;
GLfloat I_Translate_Y = -0.3f;

GLfloat R_Translate_X = -0.45f;
GLfloat R_Translate_Y = -0.3f;

GLfloat T_Translate_X = -0.15f;
GLfloat T_Translate_Y = -0.3f;

GLfloat H2_Translate_X = 0.15f;
GLfloat H2_Translate_Y = -0.3f;

GLfloat D_Translate_X = 0.45f;
GLfloat D_Translate_Y = -0.3f;

GLfloat A2_Translate_X = 0.75f;
GLfloat A2_Translate_Y = -0.3f;

GLfloat Y2_Translate_X = 1.05f;
GLfloat Y2_Translate_Y = -0.3f;
GLfloat alphaScaleFactor = 1.4141f;



void H1(GLfloat xPos, GLfloat yPos)
{
	//H1
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);	
	glBegin(GL_LINES);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(- 0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glVertex3f( 0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f( - 0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f( -0.1f * alphaScaleFactor,  -0.2f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f( 0.1f * alphaScaleFactor,  0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f( 0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void A1(GLfloat xPos, GLfloat yPos)
{
	//A1
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	//glTranslatef(A1_Translate_X, A1_Translate_Y, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);
	glTranslatef(xPos, yPos, 0.0f);
	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.05f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glVertex3f(0.05f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void P1(GLfloat xPos, GLfloat yPos)
{
	//P1
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 1.0f);
	//glScalef(2.0f, 2.0f, 1.0f);
	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f * alphaScaleFactor, 0.195f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glVertex3f(0.112f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glEnd();
	//glScalef(1/AllLettersSize_X, 1/AllLettersSize_Y, 1.0f);
	glTranslatef(-xPos, -yPos, 0.0f);
}


void P2(GLfloat xPos, GLfloat yPos)
{
	//P2
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f * alphaScaleFactor, 0.195f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glVertex3f(0.112f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void Y1(GLfloat xPos, GLfloat yPos)
{
	//Y1
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);
	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.0f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);

}


void B(GLfloat xPos, GLfloat yPos)
{
	//B
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
	glTranslatef(xPos, yPos, 0.0f);
	//glTranslatef(B_Translate_X, B_Translate_Y, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f * alphaScaleFactor, 0.195f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);


	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f * alphaScaleFactor, 0.045f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, 0.01f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f * alphaScaleFactor, 0.045f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, -0.185f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.06f * alphaScaleFactor, -0.195f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, -0.15f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f * alphaScaleFactor, -0.15f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f * alphaScaleFactor, -0.045f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glVertex3f(0.08f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);


	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f * alphaScaleFactor, -0.045f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, -0.01f * alphaScaleFactor, 0.0f);


	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);
	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void I(GLfloat xPos, GLfloat yPos)
{
	//I
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.0f * alphaScaleFactor, -0.185f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.185f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f * alphaScaleFactor, -0.185f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void R(GLfloat xPos, GLfloat yPos)
{
	//R
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f * alphaScaleFactor, 0.195f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glVertex3f(0.112f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.110f * alphaScaleFactor, -0.19f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void T(GLfloat xPos, GLfloat yPos)
{
	//T
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.0f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void H2(GLfloat xPos, GLfloat yPos)
{
	//H2
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void D(GLfloat xPos, GLfloat yPos)
{
	//D
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, 0.185f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f * alphaScaleFactor, 0.195f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);
	
	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f * alphaScaleFactor, 0.15f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f * alphaScaleFactor, -0.152f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.185f * alphaScaleFactor, 0.0f);

	glVertex3f(0.07f * alphaScaleFactor, -0.185f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.06f * alphaScaleFactor, -0.195f * alphaScaleFactor, 0.0f);

	glVertex3f(0.1f * alphaScaleFactor, -0.15f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);
	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor
	glVertex3f(-0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);
	glEnd();

	glTranslatef(-xPos, -yPos, 0.0f);
}


void A2(GLfloat xPos, GLfloat yPos)
{
	//A2
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.05f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glVertex3f(0.05f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);

	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}


void Y2(GLfloat xPos, GLfloat yPos)
{
	//Y2
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(xPos, yPos, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f * alphaScaleFactor, 0.2f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f * alphaScaleFactor, 0.0f * alphaScaleFactor, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.0f * alphaScaleFactor, -0.2f * alphaScaleFactor, 0.0f);


	glEnd();
	glTranslatef(-xPos, -yPos, 0.0f);
}



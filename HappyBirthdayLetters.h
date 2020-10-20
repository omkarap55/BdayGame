#pragma once

//Happy Birthday


//variable declarations


/*glColor3f()*/

GLfloat TopColor_R = 0.15f;
GLfloat TopColor_G = 0.78f;
GLfloat TopColor_B = 0.78f;

GLfloat MidColor_R = 0.58f;
GLfloat MidColor_G = 0.9f;
GLfloat MidColor_B = 0.9f;

GLfloat BottomColor_R = 1.0f;
GLfloat BottomColor_G = 1.0f;
GLfloat BottomColor_B = 1.0f;


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




void H1(GLfloat xPos, GLfloat yPos)
{
	//H1
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	//glTranslatef(H1_Translate_X, H1_Translate_Y, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);	

	glBegin(GL_LINES);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(xPos - 0.1f,yPos + 0.0f, 0.0f);

	glVertex3f(xPos + 0.1f,yPos + 0.0f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(xPos - 0.1f,yPos+ 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(xPos -0.1f, yPos -0.2f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(xPos + 0.1f, yPos + 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(xPos + 0.1f,yPos -0.2f, 0.0f);

	glEnd();
}


void A1(void)
{
	//A1
	//glLoadIdentity();
	//gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	//glTranslatef(A1_Translate_X, A1_Translate_Y, 0.0f);
	//glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.05f, 0.0f, 0.0f);

	glVertex3f(0.05f, 0.0f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.2f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f, -0.2f, 0.0f);

	glEnd();
}


void P1(void)
{
	//P1
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(P1_Translate_X, P1_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.185f, 0.0f);

	glVertex3f(0.07f, 0.185f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f, 0.195f, 0.0f);

	glVertex3f(0.1f, 0.15f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.2f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f, 0.15f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f, 0.0f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f, 0.0f, 0.0f);

	glVertex3f(0.112f, 0.0f, 0.0f);

	glEnd();

}


void P2(void)
{
	//P2
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(P2_Translate_X, P2_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.185f, 0.0f);

	glVertex3f(0.07f, 0.185f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f, 0.195f, 0.0f);

	glVertex3f(0.1f, 0.15f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.2f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f, 0.15f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f, 0.0f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f, 0.0f, 0.0f);

	glVertex3f(0.112f, 0.0f, 0.0f);

	glEnd();

}


void Y1(void)
{
	//Y1
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(Y1_Translate_X, Y1_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.2f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f, 0.0f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f, 0.2f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f, 0.0f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f, 0.0f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.0f, -0.2f, 0.0f);


	glEnd();
}


void B(void)
{
	//B
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(B_Translate_X, B_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.185f, 0.0f);

	glVertex3f(0.07f, 0.185f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f, 0.195f, 0.0f);

	glVertex3f(0.1f, 0.15f, 0.0f);


	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f, 0.045f, 0.0f);

	glVertex3f(0.07f, 0.01f, 0.0f);


	

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f, 0.15f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f, 0.045f, 0.0f);

	


	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.185f, 0.0f);

	glVertex3f(0.07f, -0.185f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.06f, -0.195f, 0.0f);

	glVertex3f(0.1f, -0.15f, 0.0f);


	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f, -0.15f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f, -0.045f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f, 0.0f, 0.0f);

	glVertex3f(0.08f, 0.0f, 0.0f);


	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f, -0.045f, 0.0f);

	glVertex3f(0.07f, -0.01f, 0.0f);


	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.2f, 0.0f);

	glEnd();

}


void I(void)
{
	//I
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(I_Translate_X, I_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f, 0.185f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.0f, -0.185f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.185f, 0.0f);

	glVertex3f(0.1f, 0.185f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.185f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f, -0.185f, 0.0f);

	glEnd();
}


void R(void)
{
	//R
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(R_Translate_X, R_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.185f, 0.0f);

	glVertex3f(0.07f, 0.185f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f, 0.195f, 0.0f);

	glVertex3f(0.1f, 0.15f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.2f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f, 0.15f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.1f, 0.0f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f, 0.0f, 0.0f);

	glVertex3f(0.112f, 0.0f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f, 0.0f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.110f, -0.19f, 0.0f);


	glEnd();

}


void T(void)
{
	//T
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(T_Translate_X, T_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f, 0.185f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.0f, -0.2f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.185f, 0.0f);

	glVertex3f(0.1f, 0.185f, 0.0f);

	
	glEnd();
}


void H2(void)
{
	//H2
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(H2_Translate_X, H2_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.1f, 0.0f, 0.0f);

	glVertex3f(0.1f, 0.0f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.2f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f, -0.2f, 0.0f);

	glEnd();
}


void D(void)
{
	//D
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(D_Translate_X, D_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.185f, 0.0f);

	glVertex3f(0.07f, 0.185f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.06f, 0.195f, 0.0f);

	glVertex3f(0.1f, 0.15f, 0.0f);
	



	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f, 0.15f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f, -0.152f, 0.0f);




	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.185f, 0.0f);

	glVertex3f(0.07f, -0.185f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.06f, -0.195f, 0.0f);

	glVertex3f(0.1f, -0.15f, 0.0f);




	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.2f, 0.0f);

	glEnd();

}


void A2(void)
{
	//A2
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(A2_Translate_X, A2_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(-0.05f, 0.0f, 0.0f);

	glVertex3f(0.05f, 0.0f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(-0.1f, -0.2f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.0f, 0.2f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.1f, -0.2f, 0.0f);

	glEnd();
}


void Y2(void)
{
	//Y2
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	glTranslatef(Y2_Translate_X, Y2_Translate_Y, 0.0f);
	glScalef(AllLettersSize_X, AllLettersSize_Y, 0.0f);

	glLineWidth(10.0f);

	glBegin(GL_LINES);



	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(-0.1f, 0.2f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f, 0.0f, 0.0f);

	glColor3f(TopColor_R, TopColor_G, TopColor_B);    //TopColor

	glVertex3f(0.1f, 0.2f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f, 0.0f, 0.0f);

	glColor3f(MidColor_R, MidColor_G, MidColor_B);    //MidColor

	glVertex3f(0.0f, 0.0f, 0.0f);

	glColor3f(BottomColor_R, BottomColor_G, BottomColor_B);    //BottomColor

	glVertex3f(0.0f, -0.2f, 0.0f);


	glEnd();
}



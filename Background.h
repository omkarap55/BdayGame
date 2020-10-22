#pragma once

void Background(void)
{

	//Sky

	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.0f, 0.04f);

	glVertex3f(8.5f, 4.5f, 0.0f);

	glVertex3f(-8.5f, 4.5f, 0.0f);

	glColor3f(0.129f, 0.2f, 0.317f);

	glVertex3f(-8.5f, -4.5f, 0.0f);

	glVertex3f(8.5f, -4.5f, 0.0f);

	glEnd();


	//Stars

	glPointSize(1.3f);

	glBegin(GL_POINTS);

	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.9f, 0.1f, 0.0f);
	glVertex3f(1.0f, -0.9f, 0.0f);
	glVertex3f(-1.8f, 3.2f, 0.0f);
	glVertex3f(2.0f, -0.0f, 0.0f);
	glVertex3f(-2.7f, 0.3f, 0.0f);
	glVertex3f(3.0f, -1.0f, 0.0f);
	glVertex3f(-3.6f, 0.4f, 0.0f);
	glVertex3f(4.0f, -0.7f, 0.0f);
	glVertex3f(-4.5f, 2.8f, 0.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.9f, -2.1f, 0.0f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(1.8f, -3.2f, 0.0f);
	glVertex3f(-2.0f, 0.7f, 0.0f);
	glVertex3f(2.7f, 0.3f, 0.0f);
	glVertex3f(-3.0f, 1.0f, 0.0f);
	glVertex3f(3.6f, -1.4f, 0.0f);
	glVertex3f(-4.0f, 0.6f, 0.0f);
	glVertex3f(4.5f, -2.0f, 0.0f);

	glVertex3f(5.0f, -4.9f, 0.0f);
	glVertex3f(-5.1f, 4.8f, 0.0f);
	glVertex3f(6.2f, -3.7f, 0.0f);
	glVertex3f(-6.3f, 3.6f, 0.0f);
	glVertex3f(7.4f, -2.5f, 0.0f);
	glVertex3f(-7.5f, 2.4f, 0.0f);
	glVertex3f(6.6f, -1.3f, 0.0f);
	glVertex3f(-6.7f, 1.2f, 0.0f);
	glVertex3f(4.8f, -0.1f, 0.0f);
	glVertex3f(-4.9f, 2.0f, 0.0f);

	glVertex3f(-7.0f, 1.9f, 0.0f);
	glVertex3f(6.1f, -1.8f, 0.0f);
	glVertex3f(-6.2f, 3.7f, 0.0f);
	glVertex3f(6.3f, -3.6f, 0.0f);
	glVertex3f(-7.4f, 2.5f, 0.0f);
	glVertex3f(7.5f, -2.4f, 0.0f);
	glVertex3f(-5.6f, -2.3f, 0.0f);
	glVertex3f(5.7f, -4.2f, 0.0f);
	glVertex3f(-4.8f, 0.1f, 0.0f);
	glVertex3f(4.9f, -2.0f, 0.0f);

	glVertex3f(2.0f, -3.0f, 0.0f);
	glVertex3f(0.9f, 0.1f, 0.0f);
	glVertex3f(1.0f, -0.9f, 0.0f);
	glVertex3f(1.8f, 3.2f, 0.0f);
	glVertex3f(2.0f, -0.8f, 0.0f);
	glVertex3f(2.7f, 0.3f, 0.0f);
	glVertex3f(3.0f, -1.0f, 0.0f);
	glVertex3f(3.6f, 0.4f, 0.0f);
	glVertex3f(4.0f, -0.7f, 0.0f);
	glVertex3f(4.5f, 2.8f, 0.0f);

	glVertex3f(-2.0f, -3.0f, 0.0f);
	glVertex3f(0.9f, 2.1f, 0.0f);
	glVertex3f(-1.0f, -0.9f, 0.0f);
	glVertex3f(1.8f, 3.2f, 0.0f);
	glVertex3f(-2.0f, -0.7f, 0.0f);
	glVertex3f(2.7f, 0.3f, 0.0f);
	glVertex3f(-3.0f, -1.0f, 0.0f);
	glVertex3f(3.6f, 1.4f, 0.0f);
	glVertex3f(-4.0f, -0.6f, 0.0f);
	glVertex3f(4.5f, 2.0f, 0.0f);

	glVertex3f(0.0f, 3.0f, 0.0f);
	glVertex3f(0.9f, 4.1f, 0.0f);
	glVertex3f(1.0f, -3.9f, 0.0f);
	glVertex3f(-1.8f, 2.2f, 0.0f);
	glVertex3f(2.0f, -3.0f, 0.0f);
	glVertex3f(-2.7f, 1.3f, 0.0f);
	glVertex3f(3.0f, -3.0f, 0.0f);
	glVertex3f(-3.6f, 3.4f, 0.0f);
	glVertex3f(4.0f, -3.7f, 0.0f);
	glVertex3f(-4.5f, 3.8f, 0.0f);

	glVertex3f(0.0f, -3.0f, 0.0f);
	glVertex3f(-0.9f, -4.1f, 0.0f);
	glVertex3f(-1.0f, 3.9f, 0.0f);
	glVertex3f(1.8f, -4.2f, 0.0f);
	glVertex3f(-2.0f, 3.0f, 0.0f);
	glVertex3f(2.7f, -4.3f, 0.0f);
	glVertex3f(-3.0f, 3.0f, 0.0f);
	glVertex3f(3.6f, -4.4f, 0.0f);
	glVertex3f(-4.0f, 3.7f, 0.0f);
	glVertex3f(4.5f, -3.8f, 0.0f);

	glVertex3f(-2.0f, 2.0f, 0.0f);
	glVertex3f(0.9f, -0.1f, 0.0f);
	glVertex3f(-1.0f, 0.9f, 0.0f);
	glVertex3f(1.8f, -3.2f, 0.0f);
	glVertex3f(-2.0f, 0.8f, 0.0f);
	glVertex3f(2.7f, -0.3f, 0.0f);
	glVertex3f(-3.0f, 1.0f, 0.0f);
	glVertex3f(3.6f, -0.4f, 0.0f);
	glVertex3f(-4.0f, 0.7f, 0.0f);
	glVertex3f(4.5f, -2.8f, 0.0f);

	glVertex3f(2.0f, -3.0f, 0.0f);
	glVertex3f(-0.9f, 0.1f, 0.0f);
	glVertex3f(1.0f, -0.9f, 0.0f);
	glVertex3f(-1.8f, 3.2f, 0.0f);
	glVertex3f(2.0f, 1.8f, 0.0f);
	glVertex3f(-2.7f, 3.3f, 0.0f);
	glVertex3f(3.0f, -1.0f, 0.0f);
	glVertex3f(-3.6f, -0.4f, 0.0f);
	glVertex3f(4.0f, -0.7f, 0.0f);
	glVertex3f(-4.5f, 2.8f, 0.0f);

	glVertex3f(-5.0f, -3.9f, 0.0f);
	glVertex3f(-5.1f, -4.1f, 0.0f);
	glVertex3f(-6.2f, -2.7f, 0.0f);
	glVertex3f(-7.3f, -3.6f, 0.0f);
	glVertex3f(-7.4f, -4.5f, 0.0f);
	glVertex3f(-7.5f, -2.4f, 0.0f);
	glVertex3f(-6.6f, -3.3f, 0.0f);
	glVertex3f(-6.7f, -4.2f, 0.0f);
	glVertex3f(-4.8f, -2.1f, 0.0f);
	glVertex3f(-4.9f, -3.0f, 0.0f);

	glVertex3f(5.0f, 3.9f, 0.0f);
	glVertex3f(-5.1f, 4.0f, 0.0f);
	glVertex3f(7.2f, -2.7f, 0.0f);
	glVertex3f(-7.3f, -3.6f, 0.0f);
	glVertex3f(7.4f, 3.5f, 0.0f);
	glVertex3f(-7.5f, 2.4f, 0.0f);
	glVertex3f(6.6f, 3.3f, 0.0f);
	glVertex3f(-6.7f, 4.2f, 0.0f);
	glVertex3f(4.8f, 2.1f, 0.0f);
	glVertex3f(-4.9f, 3.0f, 0.0f);

	glVertex3f(5.0f, 2.9f, 0.0f);
	glVertex3f(5.1f, -2.8f, 0.0f);
	glVertex3f(6.2f, 3.7f, 0.0f);
	glVertex3f(6.3f, 3.6f, 0.0f);
	glVertex3f(-7.4f, 2.5f, 0.0f);
	glVertex3f(7.5f, 2.4f, 0.0f);
	glVertex3f(6.6f, 2.3f, 0.0f);
	glVertex3f(6.7f, -2.2f, 0.0f);
	glVertex3f(4.8f, 3.1f, 0.0f);
	glVertex3f(-4.9f, 3.0f, 0.0f);

	glVertex3f(-6.0f, -3.9f, 0.0f);
	glVertex3f(-7.1f, -2.2f, 0.0f);
	glVertex3f(-5.2f, -3.7f, 0.0f);
	glVertex3f(-6.3f, 3.6f, 0.0f);
	glVertex3f(7.4f, -3.5f, 0.0f);
	glVertex3f(-5.5f, -3.4f, 0.0f);
	glVertex3f(-6.6f, -3.3f, 0.0f);
	glVertex3f(-7.7f, 2.2f, 0.0f);
	glVertex3f(-5.4f, -3.1f, 0.0f);
	glVertex3f(-6.9f, -2.0f, 0.0f);

	glVertex3f(7.0f, -3.9f, 0.0f);
	glVertex3f(7.2f, -2.1f, 0.0f);
	glVertex3f(7.6f, 3.8f, 0.0f);
	glVertex3f(7.8f, -2.2f, 0.0f);
	glVertex3f(-7.1f, -3.7f, 0.0f);
	glVertex3f(6.0f, 2.3f, 0.0f);
	glVertex3f(6.4f, -3.6f, 0.0f);
	glVertex3f(6.5f, -2.4f, 0.0f);
	glVertex3f(6.1f, -3.5f, 0.0f);
	glVertex3f(6.2f, -2.5f, 0.0f);

	glVertex3f(6.0f, 3.9f, 0.0f);
	glVertex3f(7.1f, -4.2f, 0.0f);
	glVertex3f(7.2f, 3.7f, 0.0f);
	glVertex3f(6.3f, 4.6f, 0.0f);
	glVertex3f(7.4f, -3.5f, 0.0f);
	glVertex3f(7.5f, 1.4f, 0.0f);
	glVertex3f(6.6f, 3.3f, 0.0f);
	glVertex3f(7.7f, -4.2f, 0.0f);
	glVertex3f(5.4f, 3.1f, 0.0f);
	glVertex3f(6.9f, -4.0f, 0.0f);

	glVertex3f(-7.0f, 3.9f, 0.0f);
	glVertex3f(-7.2f, 4.1f, 0.0f);
	glVertex3f(-7.6f, 3.8f, 0.0f);
	glVertex3f(-7.8f, 4.2f, 0.0f);
	glVertex3f(-7.1f, -3.7f, 0.0f);
	glVertex3f(-6.0f, 4.3f, 0.0f);
	glVertex3f(-6.4f, 3.6f, 0.0f);
	glVertex3f(-6.5f, -2.4f, 0.0f);
	glVertex3f(-6.1f, 3.5f, 0.0f);
	glVertex3f(-6.2f, 3.5f, 0.0f);

	glEnd();


	glPointSize(2.0f);

	glBegin(GL_POINTS);

	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(0.5f, 2.0f, 0.0f);
	glVertex3f(-1.0f, -2.5f, 0.0f);
	glVertex3f(0.0f, 3.0f, 0.0f);
	glVertex3f(-7.0f, 2.0f, 0.0f);
	glVertex3f(-7.0f, 3.0f, 0.0f);
	glVertex3f(-4.0f, -2.0f, 0.0f);
	glVertex3f(0.5f, -1.0f, 0.0f);
	glVertex3f(1.5f, -1.9f, 0.0f);
	glVertex3f(7.5f, 3.5f, 0.0f);

	glVertex3f(-7.0, 3.0, 0.0f);
	glVertex3f(-7.5f, 2.0f, 0.0f);
	glVertex3f(-7.0f, -2.5f, 0.0f);
	glVertex3f(-7.5f, 3.0f, 0.0f);
	glVertex3f(-7.0f, -6.0f, 0.0f);
	glVertex3f(-6.0f, 0.0f, 0.0f);
	glVertex3f(-3.5f, -3.0f, 0.0f);
	glVertex3f(-4.0f, -4.0f, 0.0f);
	glVertex3f(7.0f, 2.5f, 0.0f);
	glVertex3f(7.5f, 3.0f, 0.0f);
	glVertex3f(6.0f, 0.0f, 0.0f);


	glEnd();


	glPointSize(3.0f);

	glBegin(GL_POINTS);

	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(-7.0f, 0.0f, 0.0f);
	glVertex3f(-5.5f, 4.0f, 0.0f);
	glVertex3f(-6.0f, -1.0f, 0.0f);
	glVertex3f(-2.5f, -2.0f, 0.0f);
	glVertex3f(-5.5f, 1.5f, 0.0f);
	glVertex3f(-3.5f, 2.0f, 0.0f);
	glVertex3f(-1.0f, 2.2f, 0.0f);
	glVertex3f(0.5f, -2.5f, 0.0f);
	glVertex3f(3.0f, -2.0f, 0.0f);
	glVertex3f(5.0f, -1.0f, 0.0f);
	glVertex3f(2.5f, 3.5f, 0.0f);
	glVertex3f(3.5f, 2.5f, 0.0f);
	glVertex3f(6.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);

	glEnd();

}


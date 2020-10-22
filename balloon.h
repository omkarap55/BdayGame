#pragma once

#define _USE_MATH_DEFINES
#include<math.h>

#include<gl/GL.h>
#include<gl/GLU.h>
/*
struct Color
{
	float r;
	float g;
	float b;
};
typedef struct Color Color;*/
struct Color {
	GLfloat r, g, b;
};
/*void drawBalloon(float translatePosition[])
{
	// function declarations
	void drawHollowCircle(Color col, const float radius, float translatePosition[]);

	// variable declarations
	const int topCircleNoOfCircles = 50; // increase this to increase size of circle
	const int bottomCircleNoOfCircles = topCircleNoOfCircles / 2.0f; // increase this to increase size of circle
	float topCircleRadius = 0.0f;
	float bottomCircleRadius = 0.0f;
	float incrementRadius = 0.001f;
	float bottomCircleTranslatePositions[3];

	float bottomTriangle_X = 0.03f;
	float bottomTriangle_Y = -0.045f;
	float bottomTriangleHeight = 0.03f;

	// code
	// Balloon Body (Quad)
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(translatePosition[0], translatePosition[1] - 0.15f, translatePosition[2]);
	glBegin(GL_QUADS);
	{
		glColor3f(0.980392f, 0.4f, 0.501961f);

		glVertex3f((float)topCircleNoOfCircles * incrementRadius * 2.0f - ((float)topCircleNoOfCircles * incrementRadius * 2.0f / 10.0f), 0.1f, 0.0f); // 2.0f is the no of times the drawHollowCircle() function called
		glVertex3f(-((float)topCircleNoOfCircles * incrementRadius * 2.0f) + ((float)topCircleNoOfCircles * incrementRadius * 2.0f / 10.0f), 0.1f, 0.0f);
		glVertex3f(-((float)bottomCircleNoOfCircles * incrementRadius * 2.0f) + ((float)bottomCircleNoOfCircles * incrementRadius * 2.0f / 10.0f), -((float)bottomCircleNoOfCircles * incrementRadius * 2.0f) + 0.03f, 0.0f);
		glVertex3f(((float)bottomCircleNoOfCircles * incrementRadius * 2.0f) - ((float)bottomCircleNoOfCircles * incrementRadius * 2.0f / 10.0f), -((float)bottomCircleNoOfCircles * incrementRadius * 2.0f) + 0.03f, 0.0f);
	}
	glEnd();

	// Top Filled Circle.
	for (int i = 0; i < topCircleNoOfCircles; i++)
	{
		drawHollowCircle({ 1.0f - i / (float)topCircleNoOfCircles, 0.4f, 0.5f }, topCircleRadius += incrementRadius, translatePosition);
		drawHollowCircle({ i / (float)topCircleNoOfCircles, 0.4f, 0.5f }, topCircleRadius += incrementRadius, translatePosition);
	}

	bottomCircleTranslatePositions[0] = translatePosition[0];
	bottomCircleTranslatePositions[1] = translatePosition[1] - 0.15f;
	bottomCircleTranslatePositions[2] = translatePosition[2];
	// Bottom Filled Circle.
	for (int i = 0; i < bottomCircleNoOfCircles; i++)
	{
		drawHollowCircle({ fabsf(i / (float)bottomCircleNoOfCircles), 0.4f, 0.5f }, bottomCircleRadius += incrementRadius, bottomCircleTranslatePositions);
		drawHollowCircle({ 0.980392f, 0.4f, 0.501961f }, bottomCircleRadius += incrementRadius, bottomCircleTranslatePositions);
	}

	// Triangle
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(translatePosition[0], translatePosition[1] - 0.15f, translatePosition[2]);
	glBegin(GL_TRIANGLES);
	{
		glColor3f(0.980392f, 0.4f, 0.501961f);
		//glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f((GLfloat)0.0f, (GLfloat)bottomTriangle_Y, 0.0f);

		glColor3f(0.780392f, 0.2f, 0.301961f);
		glVertex3f((GLfloat)-bottomTriangle_X, (GLfloat)(bottomTriangle_Y - bottomTriangleHeight), 0.0f);
		glVertex3f((GLfloat)(bottomTriangle_X), (GLfloat)(bottomTriangle_Y - bottomTriangleHeight), 0.0f);
	}
	glEnd();
}*/
//-0.65
void drawBalloon(float translatePosition[]){
	// function declarations
	//void drawHollowCircle(Color col, const float radius, float translatePosition[]);

	// variable declarations
	const int topCircleNoOfCircles = 50; // increase this to increase size of circle
	const int bottomCircleNoOfCircles = topCircleNoOfCircles / 2.0f; // increase this to increase size of circle
	float topCircleRadius = 0.0f;
	float bottomCircleRadius = 0.0f;
	float incrementRadius = 0.001f;
	float bottomCircleTranslatePositions[3];

	float bottomTriangle_X = 0.03f;
	float bottomTriangle_Y = -0.045f;
	float bottomTriangleHeight = 0.03f;

	// code
	// Balloon Body (Quad)
	/*glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();*/
	glTranslatef(translatePosition[0], translatePosition[1] - 0.15f, translatePosition[2]);
	glBegin(GL_QUADS);
	{  
		glColor3f(0.972549f, 0.058824f, 0.439216f);
		glColor3f(0.972549f, 0.058824f, 0.439216f);

		glVertex3f(0.5f, 0.1f , 0.0f);
		glVertex3f(-0.5f, 0.1f, 0.0f); //0.5 + 0.25 + 0.125
		//glVertex3f(-0.25f, -0.125f, 0.0f);
		//glVertex3f(0.25f, -0.125f, 0.0f);
		glVertex3f(-0.25f, -0.900f, 0.0f);
		glVertex3f(0.25f, -0.900f, 0.0f);

		/*glVertex3f((float)topCircleNoOfCircles * incrementRadius * 2.0f - ((float)topCircleNoOfCircles * incrementRadius * 2.0f / 10.0f), 0.1f, 0.0f); // 2.0f is the no of times the drawHollowCircle() function called
		glVertex3f(-((float)topCircleNoOfCircles * incrementRadius * 2.0f) + ((float)topCircleNoOfCircles * incrementRadius * 2.0f / 10.0f), 0.1f, 0.0f);
		glVertex3f(-((float)bottomCircleNoOfCircles * incrementRadius * 2.0f) + ((float)bottomCircleNoOfCircles * incrementRadius * 2.0f / 10.0f), -((float)bottomCircleNoOfCircles * incrementRadius * 2.0f) - 0.05f, 0.0f);
		glVertex3f(((float)bottomCircleNoOfCircles * incrementRadius * 2.0f) - ((float)bottomCircleNoOfCircles * incrementRadius * 2.0f / 10.0f), -((float)bottomCircleNoOfCircles * incrementRadius * 2.0f) - 0.05f, 0.0f);*/
	}
	glEnd();

	// Top Filled Circle.
	GLfloat angleStep = M_PI / 10;
	//GLfloat radius = 0.1f;
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	{
		float xPos = 0.0f, yPos = 0.1f, gBulletRadius = 0.5f;
		for (GLfloat angle = 0.0f; angle <= 360.0f; angle = angle + angleStep) {
			//glColor3f(1.0f, 0.4f - angle / (float)topCircleNoOfCircles, 0.5f);
			glColor3f(0.6117f, 0.8627f, 1.0f);
			glVertex3f(xPos + gBulletRadius * cosf(angle), yPos + gBulletRadius * sinf(angle), 0.0f);
			//glColor3f(1.0f - angle / (float)topCircleNoOfCircles, 0.4f, 0.5f);
			glVertex3f(xPos + 0.0f, yPos + 0.0f, 0.0f);
			//glColor3f(1.0f, 0.4f, 0.5f - angle / (float)topCircleNoOfCircles);
			glColor3f(0.6117f, 0.8627f, 1.0f);
			glVertex3f(xPos + gBulletRadius * cosf((float)(angle + angleStep)), yPos + gBulletRadius * sinf((float)(angle + angleStep)), 0.0f);
		}

		xPos = 0.0f, yPos = 0.1f - gBulletRadius * 2, gBulletRadius = gBulletRadius/2;
		for (GLfloat angle = 0.0f; angle <= 360.0f; angle = angle + angleStep) {
			glColor3f(1.0f, 0.4f - angle / (float)topCircleNoOfCircles, 0.5f);
			glVertex3f(xPos + gBulletRadius * cosf(angle), yPos + gBulletRadius * sinf(angle), 0.0f);
			//glColor3f(1.0f - angle / (float)topCircleNoOfCircles, 0.4f, 0.5f);
			glVertex3f(xPos + 0.0f, yPos + 0.0f, 0.0f);
			glColor3f(1.0f, 0.4f, 0.5f - angle / (float)topCircleNoOfCircles);
			glVertex3f(xPos + gBulletRadius * cosf((float)(angle + angleStep)), yPos + gBulletRadius * sinf((float)(angle + angleStep)), 0.0f);
		}
	}
	glEnd();

	//glTranslatef(-translatePosition[0], -(translatePosition[1] - 0.15f), -translatePosition[2]);
	/*for (int i = 0; i < topCircleNoOfCircles; i++)
	{
		drawHollowCircle({ 1.0f - i / (float)topCircleNoOfCircles, 0.4f, 0.5f }, topCircleRadius += incrementRadius, translatePosition);
		drawHollowCircle({ i / (float)topCircleNoOfCircles, 0.4f, 0.5f }, topCircleRadius += incrementRadius, translatePosition);
	}*/

	/*bottomCircleTranslatePositions[0] = translatePosition[0];
	bottomCircleTranslatePositions[1] = translatePosition[1] - 0.15f;
	bottomCircleTranslatePositions[2] = translatePosition[2];*/
	// Bottom Filled Circle.
	/*for (int i = 0; i < bottomCircleNoOfCircles; i++)
	{
		drawHollowCircle({ fabsf(i / (float)bottomCircleNoOfCircles), 0.4f, 0.5f }, bottomCircleRadius += incrementRadius, bottomCircleTranslatePositions);
		drawHollowCircle({ 0.980392f, 0.4f, 0.501961f }, bottomCircleRadius += incrementRadius, bottomCircleTranslatePositions);
	}*/

	// Triangle
	//glMatrixMode(GL_MODELVIEW);
	//glLoadIdentity();
	//glTranslatef(translatePosition[0], translatePosition[1] - 0.15f, translatePosition[2]);
	glBegin(GL_TRIANGLES);
	{
		glColor3f(0.980392f, 0.4f, 0.501961f);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f((GLfloat)0.0f, (GLfloat)bottomTriangle_Y, 0.0f);

		glColor3f(0.780392f, 0.2f, 0.301961f);
		glVertex3f((GLfloat)-bottomTriangle_X, (GLfloat)(bottomTriangle_Y - bottomTriangleHeight), 0.0f);
		glVertex3f((GLfloat)(bottomTriangle_X), (GLfloat)(bottomTriangle_Y - bottomTriangleHeight), 0.0f);
	}
	glEnd();

	glTranslatef(-translatePosition[0], -(translatePosition[1] - 0.15f), -translatePosition[2]);
}

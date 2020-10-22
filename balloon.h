#pragma once

#define _USE_MATH_DEFINES
#include<math.h>

#include<gl/GL.h>
#include<gl/GLU.h>

struct Color {
	GLfloat r, g, b;
};
Color gUpperBalloonCtr = {
	0.94f, 0.52f, 0.52f
};
Color gUOuterBalloon = { 0.84f, 0.32f, 0.32f };
void drawBalloon(float translatePosition[]){
	// function declarations
	
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
	float xPos = 0.0f, yPos = 0.1f, gBulletRadius = 0.5f;
	// code
	// Balloon Body (Quad)
	
	glTranslatef(translatePosition[0], translatePosition[1] - 0.15f, translatePosition[2]);
	glBegin(GL_QUADS);
	{  
		//glColor3f(0.972549f, 0.058824f, 0.439216f);
		//glColor3f(0.77f, 0.96f, 0.74f);
		glColor3f(gUOuterBalloon.r, gUOuterBalloon.g, gUOuterBalloon.b);
		glVertex3f(0.5f, 0.1f , 0.0f);
		glVertex3f(-0.5f, 0.1f, 0.0f); //0.5 + 0.25 + 0.125
		//glVertex3f(-0.25f, -0.125f, 0.0f);
		//glVertex3f(0.25f, -0.125f, 0.0f);
		glColor3f(gUOuterBalloon.r, gUOuterBalloon.g, gUOuterBalloon.b);
		glVertex3f(-0.25f, -0.900f, 0.0f);
		glVertex3f(0.25f, -0.900f, 0.0f);

		
	}
	glEnd();

	// Top Filled Circle.
	GLfloat angleStep = M_PI / 10;
	//GLfloat radius = 0.1f;
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	{
		
		for (GLfloat angle = 0.0f; angle <= 360.0f; angle = angle + angleStep) {
			//glColor3f(1.0f, 0.4f - angle / (float)topCircleNoOfCircles, 0.5f);
			glColor3f(gUOuterBalloon.r, gUOuterBalloon.g, gUOuterBalloon.b);
			glVertex3f(xPos + gBulletRadius * cosf(angle), yPos + gBulletRadius * sinf(angle), 0.0f);
			//glColor3f(1.0f - angle / (float)topCircleNoOfCircles, 0.4f, 0.5f);
			glColor3f(gUpperBalloonCtr.r, gUpperBalloonCtr.g, gUpperBalloonCtr.b);
			glVertex3f(xPos + 0.0f, yPos + 0.0f, 0.0f);
			//glColor3f(1.0f, 0.4f, 0.5f - angle / (float)topCircleNoOfCircles);
			//glColor3f(0.77f, 0.96f, 0.74f);
			glColor3f(gUOuterBalloon.r, gUOuterBalloon.g, gUOuterBalloon.b);
			
			//glColor3f(0.77f, 0.96f, 0.74f);
			glVertex3f(xPos + gBulletRadius * cosf((float)(angle + angleStep)), yPos + gBulletRadius * sinf((float)(angle + angleStep)), 0.0f);
		}

		xPos = 0.0f, yPos = 0.1f - gBulletRadius * 2, gBulletRadius = gBulletRadius/2;
		for (GLfloat angle = 0.0f; angle <= 360.0f; angle = angle + angleStep) {
			glColor3f(gUOuterBalloon.r, gUOuterBalloon.g, gUOuterBalloon.b);
			glVertex3f(xPos + gBulletRadius * cosf(angle), yPos + gBulletRadius * sinf(angle), 0.0f);
			//glColor3f(1.0f - angle / (float)topCircleNoOfCircles, 0.4f, 0.5f);
			glVertex3f(xPos + 0.0f, yPos + 0.0f, 0.0f);
			//glColor3f(0.77f, 0.96f, 0.74f);
			glColor3f(gUOuterBalloon.r, gUOuterBalloon.g, gUOuterBalloon.b);
			glVertex3f(xPos + gBulletRadius * cosf((float)(angle + angleStep)), yPos + gBulletRadius * sinf((float)(angle + angleStep)), 0.0f);
		}
	}
	glEnd();
	glLineWidth(1.0f);
	glBegin(GL_LINES);
	{
		//glColor3f(0.980392f, 0.4f, 0.501961f);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f((GLfloat)(xPos), (GLfloat)yPos - gBulletRadius, 0.0f);

		//glColor3f(0.780392f, 0.2f, 0.301961f);
		//glVertex3f((GLfloat)(xPos - 0.01f), (GLfloat)(yPos - gBulletRadius - 0.1), 0.0f);
		//glVertex3f((GLfloat)(xPos - 0.01f), (GLfloat)(yPos - gBulletRadius - 0.1), 0.0f);
		glVertex3f((GLfloat)(xPos), (GLfloat)(yPos - gBulletRadius - 0.5), 0.0f);
	}
	glEnd();

	glBegin(GL_TRIANGLES);
	{
		glColor3f(gUOuterBalloon.r-0.1, gUOuterBalloon.g - 0.1, gUOuterBalloon.b - 0.1);
		
		//glColor3f(1.0f, 1.0f, 1.0f);
		glVertex3f((GLfloat)(xPos), (GLfloat)yPos - gBulletRadius, 0.0f);

		glColor3f(gUOuterBalloon.r - 0.1, gUOuterBalloon.g - 0.1, gUOuterBalloon.b - 0.1);
		glVertex3f((GLfloat)-(xPos + gBulletRadius / 2), (GLfloat)(yPos - gBulletRadius - 0.1), 0.0f);
		glVertex3f((GLfloat)(xPos + gBulletRadius / 2), (GLfloat)(yPos - gBulletRadius - 0.1), 0.0f);
	}
	glEnd();

	glTranslatef(-translatePosition[0], -(translatePosition[1] - 0.15f), -translatePosition[2]);
}

#include<stdio.h>
#include<windows.h>
#include<GL/gl.h>
#include<math.h>
#include <vector>
//change 


#include<gl/glu.h>
#include "blueScreen.h"
#include "HappyBirthdayLetters.h"
#include "balloon.h"
#include "Background.h"
//#include "ShowLetter.h"
#define WIN_WIDTH 800
#define WIN_HEIGHT 600
#define PI 3.14159265
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glu32.lib")
#pragma comment(lib,"winmm.lib")
using namespace std;
struct Position {
	GLfloat x,y;
};
/*
struct Color {
	GLfloat r, g, b;
};*/
struct Bullet {
	Position position;
};
struct Jet {
	Position position;
	bool isVisible = true;
};

struct Player {
	Position position;
};
struct Bounds {
	GLfloat lower, upper;
};
struct Letter_Information {

	GLfloat temp_x;
	GLfloat temp_y;

};
vector<Bullet> gBullets;
Jet gEnemyJets[13];
Player gPlayer;
Bounds bounds_enemyJet = { -1.0f,1.0f };

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
FILE* gPFile = NULL;
DWORD dwStyle;
WINDOWPLACEMENT wpPrev = { sizeof(WINDOWPLACEMENT) };
bool gbFullScreen = false;
bool gbActiveWindow = false;
HWND ghwnd = NULL;
HDC ghdc = NULL;
HGLRC ghrc = NULL;
GLfloat angle = 0.0f;
struct Letter_Information Letters[13];

//GLfloat gBulletRadius = 0.08f / 2;
GLfloat gBulletRadius = 0.5f;
GLfloat leftSideLimit = 0.0f;
GLfloat rightSideLimit = 0.0f;
GLfloat gPlayerSpeed = 0.001f * 100;
GLfloat gBulletSpeed = 0.1 * gPlayerSpeed;
GLfloat gEnemyJetSpeed = 0.9* 0.01 * gPlayerSpeed;
GLfloat gInitialLetterSpeed = -gEnemyJetSpeed;
GLfloat gFinalLetterSpeed = gInitialLetterSpeed * 2.0f;
GLfloat gCurrentLetterSpeed = 0.0f;
int gActiveLetterIndex = 0;
//GLfloat gFinalLetterSpeed = 1.2 * gEnemyJetSpeed;
int windowX = 0;
int windowY = 0;
bool gbStretch = false;
bool gbShowBalloon = true;
//GLfloat angle = 0.0f;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow) {
	void initialize(void);
	void Display(void);
	void update(void);
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	PlaySound(MAKEINTRESOURCE(BG_TRACK), NULL, SND_RESOURCE | SND_ASYNC );
	if (fopen_s(&gPFile, "log_omi.txt", "w") != 0) {
		MessageBox(NULL, TEXT("Cannot Open Desired File"), TEXT("File Alert"), MB_OK);
		exit(0);
	}
	TCHAR szAppName[] = TEXT("MyApp");
	bool bdone = false;
	int screenWidth = GetSystemMetrics(SM_CXSCREEN);
	int screenHeight = GetSystemMetrics(SM_CYSCREEN);
	int windowWidth = 800;
	int windowHeight = 600;
	 windowX = screenWidth / 2 - windowWidth / 2;
	 windowY = screenHeight / 2 - windowHeight / 2;
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = WndProc;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));

	//register class
	RegisterClassEx(&wndclass);

	//create window
	hwnd = CreateWindowEx(WS_EX_APPWINDOW, szAppName,
		TEXT("Star"),
		WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_VISIBLE,
		windowX,
		windowY,
		WIN_WIDTH,
		WIN_HEIGHT,
		NULL,
		NULL,
		hInstance,
		NULL);
	ghwnd = hwnd;
	initialize();
	ShowWindow(hwnd, iCmdShow);
	SetForegroundWindow(hwnd);
	SetFocus(hwnd);
	//Game loop
	while (bdone == false) {

		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
			if (msg.message == WM_QUIT) {
				bdone = true;
			}
			else {
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}
		else {
			if (gbActiveWindow == true) {
				Display();
				update();
			}
		}
	}

	return((int)msg.wParam);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam) {
	void ToggleFullScreen(void);
	void Resize(int, int);
	void uninitialize(void);
	//void initBricks(void);
	//void initBall(void);
	void initPlayer(void);
	void initEnemyJets(void);
	void initLetters(void);
	int xPos = 0;
	int yPos = 0;
	static int prevXPos = -1;
	static int prevYPos = -1;
	switch (iMsg)
	{
	case WM_CREATE:
		//SetCursorPos(windowX + WIN_WIDTH / 2, windowY + 1.5 *WIN_HEIGHT / 2);
		
		initPlayer();
		initLetters();
		initEnemyJets();
		
		break;
	case WM_PAINT:
		break;
	case WM_SETFOCUS:
		gbActiveWindow = true;
		break;
	case WM_KILLFOCUS:
		gbActiveWindow = false;
		break;
	case WM_ERASEBKGND:
		return(0);
		break;
	case WM_SIZE:
		Resize(LOWORD(lParam), HIWORD(lParam));
		break;

	case WM_KEYDOWN:
		switch (wParam) {
		case VK_RIGHT:
			gPlayer.position.x = gPlayer.position.x + gPlayerSpeed;
			break;
		case VK_LEFT:
			gPlayer.position.x = gPlayer.position.x - gPlayerSpeed;
			break;
		
		case VK_ESCAPE:
			DestroyWindow(hwnd);
			break;
		case 0x46:
		case 0x66:
			ToggleFullScreen();
			break;
		default:
			break;
		}
		break;
	case WM_MOUSEMOVE:
		//if (prevXPos != -1 || prevYPos != -1) {
	/*		xPos = LOWORD(lParam);
			yPos = HIWORD(lParam);
			if (xPos != prevXPos || yPos != prevYPos) {
				if (prevXPos != -1 || prevYPos != -1) {
					gPlayer.position.x = gPlayer.position.x + 0.1 * (xPos - prevXPos) * gPlayerSpeed;
					gPlayer.position.y = gPlayer.position.y - 0.1 * (yPos - prevYPos) * gPlayerSpeed;
				}
				//gPlayer.position.x = 0.1 * xPos;
			}
			prevXPos = xPos;
			prevYPos = yPos;*/
		//}
		 
		break;

	case WM_LBUTTONDOWN:
		gbStretch = true;
		PlaySound(MAKEINTRESOURCE(BOW_STRETCH), NULL, SND_RESOURCE | SND_ASYNC);
		break;

	case WM_LBUTTONUP:
		PlaySound(MAKEINTRESOURCE(ARROW_SWOOSH), NULL, SND_RESOURCE | SND_ASYNC);
		Bullet tempBullet;
		tempBullet.position.x = gPlayer.position.x;
		tempBullet.position.y = gPlayer.position.y;

		gBullets.push_back(tempBullet);
		gbStretch = false;
		break;
	/*case WM_LBUTTONDOWN:
		Bullet tempBullet;
		tempBullet.position.x = gPlayer.position.x;
		tempBullet.position.y = gPlayer.position.y;
		gBullets.push_back(tempBullet);
		break;*/
	case WM_CLOSE:
		DestroyWindow(hwnd);
		break;
	case WM_DESTROY:
		uninitialize();
		PostQuitMessage(0);
		break;

	}

	return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}

void ToggleFullScreen(void) {
	
	MONITORINFO mi = { sizeof(MONITORINFO) };

	//code
	if (gbFullScreen == false) {
		dwStyle = GetWindowLong(ghwnd, GWL_STYLE);
		if (dwStyle & WS_OVERLAPPEDWINDOW) {
			if (GetWindowPlacement(ghwnd, &wpPrev) && (GetMonitorInfo(MonitorFromWindow(ghwnd, MONITORINFOF_PRIMARY), &mi))) {
				SetWindowLong(ghwnd, GWL_STYLE, dwStyle & ~WS_OVERLAPPEDWINDOW);
				SetWindowPos(ghwnd, HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top, (mi.rcMonitor.right - mi.rcMonitor.left), (mi.rcMonitor.bottom - mi.rcMonitor.top), SWP_NOZORDER | SWP_FRAMECHANGED);
			}
		}
		ShowCursor(FALSE);
		gbFullScreen = true;

	}
	else {
		SetWindowLong(ghwnd, GWL_STYLE, dwStyle | WS_OVERLAPPEDWINDOW);
		SetWindowPlacement(ghwnd, &wpPrev);
		SetWindowPos(ghwnd, HWND_TOP, 0, 0, 0, 0,
			SWP_NOMOVE | SWP_NOSIZE | SWP_NOOWNERZORDER | SWP_NOZORDER | SWP_FRAMECHANGED);
		ShowCursor(TRUE);
		gbFullScreen = false;
	}
}
void initialize(void) {
	//function declaration
	void Resize(int, int);

	//variable declaration
	PIXELFORMATDESCRIPTOR pfd;
	int iPixelFormatIndex;
	//code
	ghdc = GetDC(ghwnd);
	ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));
	pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR);
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DOUBLEBUFFER | PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;
	pfd.cRedBits = 8;
	pfd.cGreenBits = 8;
	pfd.cBlueBits = 8;
	pfd.cAlphaBits = 8;

	iPixelFormatIndex = ChoosePixelFormat(ghdc, &pfd);
	if (iPixelFormatIndex == 0) {
		fprintf(gPFile, "ChoosePixel failed..\n");
		DestroyWindow(ghwnd);

	}
	if (SetPixelFormat(ghdc, iPixelFormatIndex, &pfd) == FALSE) {
		fprintf(gPFile, "SetPixel() failed..\n");
		DestroyWindow(ghwnd);
	}
	ghrc = wglCreateContext(ghdc);
	if (ghrc == NULL) {
		fprintf(gPFile, "wglCreate() failed..\n");
		DestroyWindow(ghwnd);
	}
	if (wglMakeCurrent(ghdc, ghrc) == FALSE) {
		fprintf(gPFile, "wglMakeCurrent() failed..\n");
		DestroyWindow(ghwnd);
	}
	//set clear color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	Resize(WIN_WIDTH, WIN_HEIGHT);
}
void Resize(int width, int height) {
	//code
	if (height == 0) {
		height = 1;
	}
	glViewport(0, 0, (GLsizei)width, (GLsizei)height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	//change
	gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);

}

void Display(void) {
	
	//code
	
	void drawBullet(GLfloat, GLfloat);
	void drawEnemyJet(GLfloat, GLfloat);
	void drawAircraft2(GLfloat, GLfloat);
	void H1(GLfloat, GLfloat);
	void DrawArrow(GLfloat, GLfloat);
	void DrawBow(GLfloat, GLfloat);
	void A1(void);
	void H1(GLfloat, GLfloat);
	void drawBalloon(float[]);
	void Background(void);
	void showLetter(GLfloat, GLfloat, int);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -10.0f);
	Background();
	
	for (int i = 0; i < gActiveLetterIndex; i++) {
		showLetter(Letters[i].temp_x, Letters[i].temp_y, i);
	}
	showLetter(Letters[gActiveLetterIndex].temp_x, Letters[gActiveLetterIndex].temp_y, gActiveLetterIndex);
	
	if (!gBullets.empty()) {
		for (int i = 0; i < gBullets.size(); i++) {
			
			DrawArrow(gBullets[i].position.x, gBullets[i].position.y);
		}
	}
	if (gEnemyJets[gActiveLetterIndex].isVisible) {
		float balloonPosition[3] = { gEnemyJets[gActiveLetterIndex].position.x, gEnemyJets[gActiveLetterIndex].position.y, 0.0f };
		drawBalloon(balloonPosition);
		}
			
	glLineWidth(2.0f);
	DrawBow(gPlayer.position.x, gPlayer.position.y);
	
	SwapBuffers(ghdc);
}


void update(void) {
	bool checkCollision(Position, Position);

	// remove bullets that are out of scene
	for (int bulletIndex = 0; bulletIndex < gBullets.size(); ++bulletIndex) {
		if (gBullets[bulletIndex].position.y > 4) {
			gBullets.erase(gBullets.begin() + bulletIndex);
		}
	}

	// remove unhit enemy planes
	// implement this

	// animate Bullets
	for (int i = 0; i < gBullets.size(); i++) {
		gBullets[i].position.y = gBullets[i].position.y + gBulletSpeed;
	}

	// animate enemyjets

		gEnemyJets[gActiveLetterIndex].position.y = gEnemyJets[gActiveLetterIndex].position.y - gEnemyJetSpeed;
	

	//animate letters
	Letters[gActiveLetterIndex].temp_y = Letters[gActiveLetterIndex].temp_y + gCurrentLetterSpeed;
	 if (Letters[gActiveLetterIndex].temp_y < 0.0f) {
		gActiveLetterIndex++;
		gCurrentLetterSpeed = gInitialLetterSpeed;
		//Letters[gActiveLetterIndex].temp_y = 0.0f;
	}
	//check Bullet and enemyJet Collison
	
		for (int bulletIndex = 0; bulletIndex < gBullets.size(); ++bulletIndex) {
			if (checkCollision(gEnemyJets[gActiveLetterIndex].position, gBullets[bulletIndex].position)) {
				PlaySound(MAKEINTRESOURCE(BALLOON_POP_SOUND), NULL, SND_RESOURCE | SND_ASYNC);
				gBullets.erase(gBullets.begin() + bulletIndex);
				
			}
		}
	
}
void uninitialize(void) {

	if (gbFullScreen == true) {
		dwStyle = GetWindowLong(ghwnd, GWL_STYLE);
		SetWindowLong(ghwnd, GWL_STYLE, dwStyle | WS_OVERLAPPEDWINDOW);
		SetWindowPlacement(ghwnd, &wpPrev);
		SetWindowPos(ghwnd, HWND_TOP, 0, 0, 0, 0,
			SWP_NOMOVE | SWP_NOSIZE | SWP_NOOWNERZORDER | SWP_NOZORDER | SWP_FRAMECHANGED);
		ShowCursor(TRUE);
		gbFullScreen = false;
	}
	if (wglGetCurrentContext() == ghrc) {
		wglMakeCurrent(NULL, NULL);
	}
	if (ghrc) {
		wglDeleteContext(ghrc);
		ghrc = NULL;
	}
	if (ghdc) {
		ReleaseDC(ghwnd, ghdc);
		ghdc = NULL;
	}
	if (gPFile) {
		fprintf(gPFile, "Log File is Closed. Program is closed Successfully");
		fclose(gPFile);
		gPFile = NULL;
	}

}

bool checkCollision(Position jetPosition, Position bulletPosition) {
	bool checkXCollision(GLfloat, GLfloat);
	bool checkYCollision(GLfloat, GLfloat);
	if (checkXCollision(jetPosition.x, bulletPosition.x) && checkYCollision(jetPosition.y -1.25, bulletPosition.y)) {

		gCurrentLetterSpeed = gFinalLetterSpeed;
		gEnemyJets[gActiveLetterIndex].isVisible = false;
		return true;
	}


	return false;
}
bool checkXCollision(GLfloat jetX, GLfloat bulletX) {
	if ((bulletX + gBulletRadius > jetX + bounds_enemyJet.lower) && (bulletX - gBulletRadius < jetX + bounds_enemyJet.upper)) {
		return true;
	}
	return false;
}
bool checkYCollision(GLfloat jetY, GLfloat bulletY) {
 	if (bulletY > jetY) {
		return true;
	}
	return false;
}
void initPlayer() {
	//GLfloat ballReflectorXPos = 0.0f;
	GLfloat ballReflectorXPos = 0.0f;
	GLfloat ballReflectorYPos = -2.5f;
	gPlayer.position.x = ballReflectorXPos;
	gPlayer.position.y = ballReflectorYPos;
}
void initEnemyJets() {
	
	for (int i = 0; i < 13; i++) {
		
		gEnemyJets[i].position.x = Letters[i].temp_x;
		gEnemyJets[i].position.y = 5.0f;
	}
}
void drawBullet(GLfloat xPos, GLfloat yPos) {
	GLfloat angleStep = PI / 10;
	//GLfloat radius = 0.1f;
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	{
		for (GLfloat angle = 0.0f; angle <= 360.0f; angle = angle + angleStep) {
			glVertex3f(xPos + gBulletRadius * cos(angle), yPos + gBulletRadius * sin(angle), 0.0f);
			glVertex3f(xPos + 0.0f, yPos + 0.0f, 0.0f);
			glVertex3f(xPos + gBulletRadius * cos(angle + angleStep), yPos + gBulletRadius * sin(angle + angleStep), 0.0f);
		}
	}
	glEnd();
}

void drawEnemyJet(GLfloat xPos, GLfloat yPos) {
	//void drawAircraft2(GLfloat, GLfloat);


	//glRotatef(180.0f, 0.0f, 0.0f, 1.0f);

	//drawAircraft2(xPos, yPos);
	//glRotatef(-180.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(xPos + 0.0f, yPos + 0.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex3f(xPos + 1.0f, yPos + 0.8f, 0.0f);
	glColor3f(0.1607f, 0.2196f, 0.2392f);

	glVertex3f(xPos + 0.9f, yPos + 1.0f, 0.0f);

	glVertex3f(xPos + 0.5f, yPos + 0.7f, 0.0f);
	glColor3f(0.3647f, 0.5411f, 0.6588f);

	glVertex3f(xPos + 0.25f, yPos + 1.0f, 0.0f);


	glVertex3f(xPos + 0.1f, yPos + 0.9f, 0.0f);


	glVertex3f(xPos + 0.0f, yPos + 1.0f, 0.0f); // symmetry line


	glVertex3f(xPos - 0.1f, yPos + 0.9f, 0.0f);


	glVertex3f(xPos - 0.25f, yPos + 1.0f, 0.0f);

	glColor3f(0.1607f, 0.2196f, 0.2392f);

	glVertex3f(xPos - 0.5f, yPos + 0.7f, 0.0f);


	glVertex3f(xPos - 0.9f, yPos + 1.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex3f(xPos - 1.0f, yPos + 0.8f, 0.0f);

	glEnd();
}
void drawAircraft2(GLfloat xPos, GLfloat yPos) {
	
	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex3f(xPos + 0.0f, yPos- 0.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	
	glVertex3f(xPos + 1.0f, yPos - 0.8f, 0.0f);
	glColor3f(0.1607f, 0.2196f, 0.2392f);

	glVertex3f(xPos + 0.9f, yPos - 1.0f, 0.0f);

	glVertex3f(xPos + 0.5f, yPos - 0.7f, 0.0f);
	glColor3f(0.3647f, 0.5411f, 0.6588f);

	glVertex3f(xPos + 0.25f, yPos - 1.0f, 0.0f);


	glVertex3f(xPos + 0.1f, yPos - 0.9f, 0.0f);


	glVertex3f(xPos + 0.0f, yPos - 1.0f, 0.0f); // symmetry line

	
	glVertex3f(xPos - 0.1f, yPos - 0.9f, 0.0f);


	glVertex3f(xPos - 0.25f, yPos - 1.0f, 0.0f);

	glColor3f(0.1607f, 0.2196f, 0.2392f);
	
	glVertex3f(xPos - 0.5f, yPos - 0.7f, 0.0f);

	
	glVertex3f(xPos - 0.9f, yPos - 1.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	
	glVertex3f(xPos - 1.0f, yPos - 0.8f, 0.0f);

	glEnd();

}


void DrawArrow(GLfloat xPos, GLfloat yPos)
{
	glTranslatef(xPos, yPos, 0.0f);
	glBegin(GL_TRIANGLES);
	glColor3f(0.78f, 0.78f, 0.78f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f - 0.2f / 2.8f, 0.0f - 0.5f / 2.8f, 0.0f);
	glVertex3f(0.0f, 0.0f - 0.3f / 2.8f, 0.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f - 0.3f / 2.8f, 0.0f);
	glVertex3f(0.0f + 0.2f / 2.8f, 0.0f - 0.5f / 2.8f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-0.04f / 2.8f, 0.0f - 0.3f / 2.8f, 0.0f);
	glVertex3f(-0.04f / 2.8f, 0.0f - 1.8f / 2.8f, 0.0f);
	glVertex3f(0.0f + 0.04f / 2.8f, 0.0f - 1.8f / 2.8f, 0.0f);
	glVertex3f(0.0f + 0.04f / 2.8f, 0.0f - 0.3f / 2.8f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.0f, 0.0f - 1.6f / 2.8f, 0.0f);
	glVertex3f(-0.15f / 2.8f, 0.0f - 1.8f / 2.8f, 0.0f);
	glVertex3f(-0.15f / 2.8f, 0.0f - 2.0f / 2.8f, 0.0f);
	glVertex3f(0.0f, 0.0f - 1.8f / 2.8f, 0.0f);

	glVertex3f(0.0f + 0.0f, 0.0f - 1.6f / 2.8f, 0.0f);
	glVertex3f(0.0f + 0.15f / 2.8f, 0.0f - 1.8f / 2.8f, 0.0f);
	glVertex3f(0.0f + 0.15f / 2.8f, 0.0f - 2.0f / 2.8f, 0.0f);
	glVertex3f(0.0f + 0.0f, 0.0f - 1.8f / 2.8f, 0.0f);
	glEnd();

	glTranslatef(-xPos, -yPos, 0.0f);
}

void DrawBow(GLfloat xPos, GLfloat yPos)
{
	void DrawArrow(GLfloat, GLfloat);

	GLfloat bowTop = 0.0f;//yPos - 1.0f;
	GLfloat strMidY = bowTop - 0.8f / 2.8f;

	// stretchString position
	if (gbStretch)
		strMidY = (-0.8f-0.2 )/ 2.8f;


	//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glTranslatef(xPos, yPos-0.3f, 0.0f);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.74f, 0.39f);

	glVertex3f(-0.2f/2.8f, bowTop, 0.0f);
	glVertex3f(-0.3f/2.8f, bowTop - 0.1 / 2.8f, 0.0f);
	glVertex3f(0.3f/2.8f, bowTop - 0.1 / 2.8f, 0.0f);
	glVertex3f(0.2f/2.8f, bowTop, 0.0f);

	glVertex3f(-0.2f/2.8f, bowTop, 0.0f);
	glVertex3f(-0.5f/2.8f, bowTop + 0.2f / 2.8f, 0.0f);
	glVertex3f(-0.6f/2.8f, bowTop + 0.1f / 2.8f, 0.0f);
	glVertex3f(-0.3f/2.8f, bowTop - 0.1f / 2.8f, 0.0f);
	
	glVertex3f(-0.5f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	glVertex3f(-0.7f/2.8f, bowTop + 0.4f/2.8f, 0.0f);
	glVertex3f(-0.8f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	glVertex3f(-0.6f/2.8f, bowTop + 0.1f/2.8f, 0.0f);

	glVertex3f(-0.7f/2.8f, bowTop + 0.4f/2.8f, 0.0f);
	glVertex3f(-0.8f/2.8f, bowTop + 0.5f/2.8f, 0.0f);
	glVertex3f(-0.9f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	glVertex3f(-0.8f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	
	glVertex3f(-0.8f/2.8f, bowTop + 0.5f/2.8f, 0.0f);
	glVertex3f(-1.1f/2.8f, bowTop + 0.5f/2.8f, 0.0f);
	glVertex3f(-1.0f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	glVertex3f(-0.9f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	
	glVertex3f(-1.1f/2.8f, bowTop + 0.5f / 2.8f, 0.0f);
	glVertex3f(-1.3f/2.8f, bowTop + 0.47f / 2.8f, 0.0f);
	glVertex3f(-1.1f/2.8f, bowTop + 0.2f / 2.8f, 0.0f);
	glVertex3f(-1.0f/2.8f, bowTop + 0.2f / 2.8f, 0.0f);
	
	glVertex3f(-1.3f/2.8f, bowTop + 0.47f/2.8f, 0.0f);
	glVertex3f(-1.5f/2.8f, bowTop + 0.30f/2.8f, 0.0f);
	glVertex3f(-1.3f/2.8f, bowTop + 0.15f/2.8f, 0.0f);
	glVertex3f(-1.1f/2.8f, bowTop + 0.2f / 2.8f, 0.0f);

	glVertex3f(-1.5f/2.8f, bowTop + 0.30f / 2.8f, 0.0f);
	glVertex3f(-2.5f/2.8f, bowTop - 0.8f / 2.8f, 0.0f);
	glVertex3f(-2.4f/2.8f, bowTop - 0.82f / 2.8f, 0.0f);
	glVertex3f(-1.3f/2.8f, bowTop + 0.15f / 2.8f, 0.0f);

	// end of bow left
	glVertex3f(-2.5f/2.8f, bowTop - 0.8f / 2.8f, 0.0f);
	glVertex3f(-2.6f/2.8f, bowTop - 0.79f / 2.8f, 0.0f);
	glVertex3f(-2.6f/2.8f, bowTop - 0.81f / 2.8f, 0.0f);
	glVertex3f(-2.4f/2.8f, bowTop - 0.82f / 2.8f, 0.0f);

	glVertex3f(-2.6f/2.8f, bowTop - 0.79f/2.8f, 0.0f);
	glVertex3f(-2.7f/2.8f, bowTop - 0.65f/2.8f, 0.0f);
	glVertex3f(-2.8f/2.8f, bowTop - 0.75f/2.8f, 0.0f);
	glVertex3f(-2.6f/2.8f, bowTop - 0.81f/2.8f, 0.0f);
	

	// mirror
	glVertex3f(0.2f/2.8f, bowTop, 0.0f);
	glVertex3f(0.5f/2.8f, bowTop + 0.2f / 2.8f, 0.0f);
	glVertex3f(0.6f/2.8f, bowTop + 0.1f / 2.8f, 0.0f);
	glVertex3f(0.3f/2.8f, bowTop - 0.1 / 2.8f, 0.0f);

	glVertex3f(0.5f/2.8f, bowTop + 0.2f / 2.8f, 0.0f);
	glVertex3f(0.7f/2.8f, bowTop + 0.4f / 2.8f, 0.0f);
	glVertex3f(0.8f/2.8f, bowTop + 0.2f / 2.8f, 0.0f);
	glVertex3f(0.6f/2.8f, bowTop + 0.1f / 2.8f, 0.0f);

	glVertex3f(0.7f/2.8f, bowTop + 0.4f/2.8f, 0.0f);
	glVertex3f(0.8f/2.8f, bowTop + 0.5f/2.8f, 0.0f);
	glVertex3f(0.9f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	glVertex3f(0.8f/2.8f, bowTop + 0.2f/2.8f, 0.0f);

	glVertex3f(0.8f/2.8f, bowTop + 0.5f/2.8f, 0.0f);
	glVertex3f(1.1f/2.8f, bowTop + 0.5f/2.8f, 0.0f);
	glVertex3f(1.0f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	glVertex3f(0.9f/2.8f, bowTop + 0.2f/2.8f, 0.0f);

	glVertex3f(1.3f/2.8f, bowTop + 0.47f / 2.8f, 0.0f);
	glVertex3f(1.1f/2.8f, bowTop + 0.5f / 2.8f, 0.0f);
	glVertex3f(1.0f/2.8f, bowTop + 0.2f/2.8f, 0.0f);
	glVertex3f(1.1f/2.8f, bowTop + 0.2f/2.8f, 0.0f);

	glVertex3f(1.3f/2.8f, bowTop + 0.47f/2.8f, 0.0f);
	glVertex3f(1.5f/2.8f, bowTop + 0.30f/2.8f, 0.0f);
	glVertex3f(1.3f/2.8f, bowTop + 0.15f/2.8f, 0.0f);
	glVertex3f(1.1f/2.8f, bowTop + 0.2f / 2.8f, 0.0f);

	glVertex3f(1.5f/2.8f, bowTop + 0.30f / 2.8f, 0.0f);
	glVertex3f(2.5f/2.8f, bowTop - 0.8f / 2.8f, 0.0f);
	glVertex3f(2.4f/2.8f, bowTop - 0.82f / 2.8f, 0.0f);
	glVertex3f(1.3f/2.8f, bowTop + 0.15f / 2.8f, 0.0f);
	
	// end of bow right
	glVertex3f(2.5f/2.8f, bowTop - 0.8f / 2.8f, 0.0f);
	glVertex3f(2.6f/2.8f, bowTop - 0.79f/2.8f, 0.0f);
	glVertex3f(2.6f/2.8f, bowTop - 0.81f/2.8f, 0.0f);
	glVertex3f(2.4f/2.8f, bowTop - 0.82f/2.8f, 0.0f);

	glVertex3f(2.6f/2.8f, bowTop - 0.79f/2.8f, 0.0f);
	glVertex3f(2.7f/2.8f, bowTop - 0.65f/2.8f, 0.0f);
	glVertex3f(2.8f/2.8f, bowTop - 0.75f/2.8f, 0.0f);
	glVertex3f(2.6f/2.8f, bowTop - 0.81f/2.8f, 0.0f);

	glEnd();

	// Bow string
	glBegin(GL_LINES);
	glVertex3f(-2.5f / 2.8f, bowTop - 0.8f / 2.8f, 0.0f);
	glVertex3f(0.0f, strMidY, 0.0f);
	glVertex3f(0.0f, strMidY, 0.0f);
	glVertex3f(2.5f / 2.8f, bowTop - 0.8f / 2.8f, 0.0f);
	glEnd();

	glTranslatef(-xPos, -yPos+0.3f, 0.0f);

	if (gbStretch)
		DrawArrow(xPos, yPos);
}

void drawLetters(GLfloat, GLfloat, int index) {

}

void initLetters() {
	for (int i = 0; i < 13; i++) {
		if (i > 4) {
			Letters[i].temp_x = -4.5f + i * 0.7f + 0.7f;
		}
		else {
			Letters[i].temp_x = -4.5f + i * 0.7f;
		}
		
		Letters[i].temp_y = 3.0f;
		gCurrentLetterSpeed = gInitialLetterSpeed;
	}
}

void showLetter(GLfloat x, GLfloat y, int Index) {

	switch (Index) {

	case 0:
		H1(x,y);
			break;

	case 1:
		A1(x, y);
		break;

	case 2:
		P1(x, y);
		break;

	case 3:
		P2(x, y);
		break;

	case 4:
		Y1(x, y);
		break;

	case 5:
		B(x, y);
		break;

	case 6:
		I(x, y);
		break;

	case 7:
		R(x, y);
		break;

	case 8:
		T(x, y);
		break;

	case 9:
		H2(x, y);
		break;

	case 10:
		D(x, y);
		break;

	case 11:
		A2(x, y);
		break;

	case 12:
		Y1(x, y);
		break;

	}

}

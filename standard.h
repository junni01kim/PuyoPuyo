#ifndef STANDARD_H
#define STANDARD_H
#define _CRT_SECURE_NO_WARNINGS

// �� cmdâ ũ��: 120 30, ���߾� 60
// ���� ���� �⺻ Ʋ: 1~117, 1~29
// �÷��̾� 1 �� ��ǥ: (9~41, 2~28) 
//		= 9 ~ 9 + 5 * MAXLENGTH + 2, 2 ~ 2 + 2 * MAXHEIGHT + 2
// �÷��̾� 2 �� ��ǥ: (79~111, 2~28) 
//		= 107 - 5 * MAXLENGTH + 2 ~ 107, 2 ~ 2 + 2 * MAXHEIGHT + 2
// ���� �ѿ� ������(�׵θ� ����): 43~77, 2~9
// ���� �ѿ� ������(player1): 45~55, 3~8
// ���� �ѿ� ������(player2): 65~75, 3~8
// �Ѿ ���ػѿ� ����(player1): (43~51, 11~28)
//		= 43~51, 11~2 + 2 * MAXHEIGHT + 2
// �Ѿ ���ػѿ� ����(player2): (69~77, 11~28)
//		= 69~77, 11~2 + 2 * MAXHEIGHT + 2
// ���� ǥ��(����): (53~67, 11~15)
// ���� ǥ��(player1 ����): (53~67, 24~27);
// ���� ǥ��(player2 ����): (53~67, 18~21);
// �ѿ䰡 �� �� �ִ� ���� �Ʒ� �ٴ� ��ǥ: 26 
//		= 2 + 2 * MAXHEIGHT
//

// �� cmdâ�� 120 30 / 60
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include <mmsystem.h>
#include <process.h>
#pragma comment(lib,"winmm.lib")

// ���� ����
#define BLACK	0
#define BLUE1	1
#define GREEN1 2
#define CYAN1	3
#define RED1	4
#define MAGENTA1 5
#define YELLOW1 6
#define GRAY1	7
#define GRAY2	8
#define BLUE2	9
#define GREEN2 10
#define CYAN2	11
#define RED2	12
#define MAGENTA2 13
#define YELLOW2 14
#define WHITE	15

#define STAR1 'O' // player1 ǥ��
#define STAR2 'X' // player2 ǥ��
#define BLANK ' ' // ' ' ���ϸ� ������ �������� 

#define ESC 0x1b //  ESC ������ ����

#define SPECIAL1 0xe0 // Ư��Ű�� 0xe0 + key ������ �����ȴ�.
#define SPECIAL2 0x00 // keypad ��� 0x00 + key �� �����ȴ�.

#define ENTER '\r'
#define UP  0x48 // Up key�� 0xe0 + 0x48 �ΰ��� ���� ���´�.
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d

#define UP2	'w'//player2 �� AWSD �� ����Ű ���
#define DOWN2	's'
#define LEFT2	'a'
#define RIGHT2	'd'

#define WIDTH 80
#define HEIGHT 24

#define MAXHEIGHT 12
#define MAXLENGTH 6


void printBackground();

void removeCursor(void); // Ŀ���� �Ⱥ��̰� �Ѵ�

void gotoxy(int x, int y); //���� ���ϴ� ��ġ�� Ŀ�� �̵�

void textcolor(int fg_color, int bg_color);

// ȭ�� ������ ���ϴ� �������� �����Ѵ�.
void cls(int bg_color, int text_color);

// box �׸��� �Լ�, ch ���ڷ� (x1,y1) ~ (x2,y2) box�� �׸���.
void draw_box(int x1, int y1, int x2, int y2, char ch);

// box �׸��� �Լ�, ch ���ڿ��� (x1,y1) ~ (x2,y2) box�� �׸���.
// �ѱ� ���ڸ� �׸��� �뵵�� ��� "��" �� ���� �׸��� ���
void draw_box2(int x1, int y1, int x2, int y2);

// ������, (x1,y) ~ (x2,y) ���� line�� �׸���.
void draw_hline(int y, int x1, int x2, char ch);

//===== �⺻ ��� ====================================================================

typedef struct _puyo {
	int type; // 0�ʷ�, 1����, 2���, 3�Ķ�, 4���� 5����
	int x;
	int y;
	int player; // 1, 2�� �ֱ�
} puyo;

typedef struct _player {
	int PlayerX;
	int puyoIndex;
	int obstructPuyoNum;
	int getObstructPuyo;
	int PuyoStack[12][6];
	int lastScore;
	int score;
	int lose;

	int puyoRemoved; // ������ �ѿ� ��
	int puyoRemovedSum; // ������ �ѿ� �� ���� (����)
	int puyoColor; // ���� ���ʽ�
	int puyoConnect; // ���� ���ʽ� (����)
	int puyoCombo; // ���� ���ʽ� (����)
} player;

void printMenuOption(int* selectPosition, int* status);

int moveUpDownSelect();

int mainMenu();

void explain();

void gameMap();

int mapClear(player* Player1, player* Player2);

void puyoLogic(int* logic);

void counter();

void printPuyo(puyo* PuyoX);

void printBlank(player* playerX, int indexX, int indexY);

void clearNowZone(puyo* PuyoX);

void move(player* Player1, player* Player2, puyo* Puyo1, puyo* Puyo2, puyo* Puyo3, puyo* Puyo4, int* spin1, int* spin2);

void printTimer(clock_t* duration);

void printScore(player* PlayerX);

void soloPuyoMove(player* PlayerX, puyo* PuyoX);

void nextPuyo(int* logic, player* playerX);

void checkPuyoCount(player* PlayerX, puyo* PuyoX, int checker[][6], int x, int y);

void deletePuyo(player* PlayerX, puyo* PuyoX, int checker[][6], int x, int y);

void splashObstructPuyo(player* PlayerX, int* x, int* y);

void dropPuyos(player* PlayerX);

void scanPuyo(player* PlayerX, int* colorChecker);

void printObstructPuyo(player* PlayerX);

void clearObstructPuyo(player* PlayerX);

void getObstructPuyo(player* PlayerX);

int playerLose(player* PlayerX);

int everySecond( player* PlayerX, puyo* Puyo1, puyo* Puyo2);

int everySeconds(player* Player1, player* Player2, puyo* Puyo1, puyo* Puyo2, puyo* Puyo3, puyo* Puyo4, int* colorChecker1, int* colorChecker2);

void start();
#endif // !STANDARD_H

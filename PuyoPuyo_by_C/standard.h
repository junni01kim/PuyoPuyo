#ifndef STANDARD_H
#define STANDARD_H
#define _CRT_SECURE_NO_WARNINGS

// 내 cmd창 크기: 120 30, 정중앙 60
// 게임 시작 기본 틀: 1~117, 1~29
// 플레이어 1 맵 좌표: (9~41, 2~28) 
//		= 9 ~ 9 + 5 * MAXLENGTH + 2, 2 ~ 2 + 2 * MAXHEIGHT + 2
// 플레이어 2 맵 좌표: (79~111, 2~28) 
//		= 107 - 5 * MAXLENGTH + 2 ~ 107, 2 ~ 2 + 2 * MAXHEIGHT + 2
// 다음 뿌요 디자인(테두리 상자): 43~77, 2~9
// 다음 뿌요 디자인(player1): 45~55, 3~8
// 다음 뿌요 디자인(player2): 65~75, 3~8
// 넘어갈 방해뿌요 개수(player1): (43~51, 11~28)
//		= 43~51, 11~2 + 2 * MAXHEIGHT + 2
// 넘어갈 방해뿌요 개수(player2): (69~77, 11~28)
//		= 69~77, 11~2 + 2 * MAXHEIGHT + 2
// 라운드 표현(상자): (53~67, 11~15)
// 점수 표현(player1 상자): (53~67, 24~27);
// 점수 표현(player2 상자): (53~67, 18~21);
// 뿌요가 갈 수 있는 가장 아랫 바닥 좌표: 26 
//		= 2 + 2 * MAXHEIGHT
//

// 내 cmd창은 120 30 / 60
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include <mmsystem.h>
#include <process.h>
#pragma comment(lib,"winmm.lib")

// 색상 정의
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

#define STAR1 'O' // player1 표시
#define STAR2 'X' // player2 표시
#define BLANK ' ' // ' ' 로하면 흔적이 지워진다 

#define ESC 0x1b //  ESC 누르면 종료

#define SPECIAL1 0xe0 // 특수키는 0xe0 + key 값으로 구성된다.
#define SPECIAL2 0x00 // keypad 경우 0x00 + key 로 구성된다.

#define ENTER '\r'
#define UP  0x48 // Up key는 0xe0 + 0x48 두개의 값이 들어온다.
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d

#define UP2	'w'//player2 는 AWSD 로 방향키 대신
#define DOWN2	's'
#define LEFT2	'a'
#define RIGHT2	'd'

#define WIDTH 80
#define HEIGHT 24

#define MAXHEIGHT 12
#define MAXLENGTH 6


void printBackground();

void removeCursor(void); // 커서를 안보이게 한다

void gotoxy(int x, int y); //내가 원하는 위치로 커서 이동

void textcolor(int fg_color, int bg_color);

// 화면 지우기고 원하는 배경색으로 설정한다.
void cls(int bg_color, int text_color);

// box 그리기 함수, ch 문자로 (x1,y1) ~ (x2,y2) box를 그린다.
void draw_box(int x1, int y1, int x2, int y2, char ch);

// box 그리기 함수, ch 문자열로 (x1,y1) ~ (x2,y2) box를 그린다.
// 한글 문자를 그리는 용도로 사용 "□" 로 벽을 그리는 경우
void draw_box2(int x1, int y1, int x2, int y2);

// 가로줄, (x1,y) ~ (x2,y) 선을 line을 그린다.
void draw_hline(int y, int x1, int x2, char ch);

//===== 기본 양식 ====================================================================

typedef struct _puyo {
	int type; // 0초록, 1빨강, 2노랑, 3파랑, 4보라 5방해
	int x;
	int y;
	int player; // 1, 2만 넣기
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

	int puyoRemoved; // 없어진 뿌요 수
	int puyoRemovedSum; // 없어진 뿌요 수 총합 (구현)
	int puyoColor; // 색수 보너스
	int puyoConnect; // 연결 보너스 (구현)
	int puyoCombo; // 연쇄 보너스 (구현)
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

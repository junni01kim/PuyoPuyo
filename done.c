#include "standard.h"

int BackGround[28][112] = {
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,3,4,4,4,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,4,1,5,4,4,4,4,4,4,6,6,6,6,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,2,2,3,3,3,3,3,3,2,2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,6,6,6,1,1,1,1,1,1,1,1,1,6,6,6,1,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,2,2,2,7,7,7,0,7,7,7,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,6,6,6,8,1,1,6,6,6,6,6,8,8,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,2,0,0,7,7,7,0,2,7,7,4,0,2,0,0,0,0,0,0,0,0,0,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,4,1,6,6,8,6,6,6,6,6,8,8,8,8,8,0,0,0,1,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,2,3,4,4,4,4,2,4,4,4,4,0,2,0,0,0,0,0,0,1,6,9,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,4,4,1,0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,2,3,3,3,2,2,2,3,3,3,2,0,0,0,0,6,9,9,5,5,5,4,4,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,4,4,4,1,0,0,0,8,8,8,8,8,8,1,8,8,8,8,4,4,4,6,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,3,2,2,4,4,4,4,3,0,0,6,6,0,5,1,1,0,4,1,1,1,0,4,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,4,4,4,4,0,0,0,0,8,8,8,8,4,6,4,4,4,4,4,1,1,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,0,0,0,4,1,6,4,0,0,0,0,0,6,9,0,0,6,6,0,0,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,4,4,4,4,6,4,4,4,5,5,5,4,6,6,6,6,1,1,1,1,1,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,9,0,0,0,0,0,0,4,4,6,4,4,4,8,0,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,4,4,4,4,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,9,9,4,4,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,4,4,4,4,4,4,1,8,6,6,6,6,6,6,8,6,6,4,4,0,0,10,11,11,11,10,4,4,4,4,4,4,5,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,6,9,9,9,9,9,9,9,9,5,4,0,0,0,0,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,12,12,12,0,0,0,0,0,5,5,5,5,5,5,5,5,5,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,6,5,5,5,9,9,9,9,9,9,9,9,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,4,4,0,0,12,12,0,0,4,12,12,10,10,10,0,10,10,10,10,0,0,0,0,11,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,6,6,6,5,5,5,5,5,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,0,0,0,10,12,4,0,0,12,12,12,10,10,10,5,0,10,10,0,10,10,10,0,0,0,11,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,10,0,0,4,12,12,12,12,12,11,11,0,0,0,10,10,10,10,12,12,0,0,10,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,11,0,0,0,0,12,12,12,12,12,12,0,0,0,12,12,12,12,12,12,12,12,0,0,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,10,11,11,11,4,4,4,4,10,12,12,10,0,0,0,0,0,12,12,12,12,12,12,0,0,0,12,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,11,11,11,11,4,4,4,4,4,4,4,4,11,11,4,4,4,12,12,12,12,0,0,0,0,12,12,4,13,13,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,12,10,10,10,11,11,4,4,4,4,4,11,11,11,4,4,4,4,4,4,4,4,4,0,0,11,12,13,4,4,4,0,0,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,12,12,10,10,10,10,11,11,11,11,11,11,11,11,11,11,10,4,4,4,4,4,10,11,11,11,10,7,13,13,13,13,13,13,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,12,12,10,10,10,10,10,11,11,11,11,11,11,11,11,11,11,11,11,11,10,10,10,11,12,0,7,7,7,7,14,14,14,14,14,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,12,5,5,5,5,10,10,10,11,11,11,11,11,11,11,10,10,10,10,10,12,12,4,13,13,4,4,14,7,7,7,7,14,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,1,12,5,5,5,5,5,5,5,10,10,10,10,10,10,10,10,10,12,12,0,4,14,13,13,13,13,4,7,7,13,0,0,	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,11,12,10,10,10,5,5,5,5,5,10,10,10,12,11,4,4,4,4,4,14,13,4,4,4,13,13,13,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,4,4,4,4,0,0,0,4,4,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

void printBackground() {
	for (int y = 0; y < 28; y++) {
		gotoxy(6, y+2); // y축 처음 위치만 확보하고, 라인 단위로 overwirte한다.
		for (int x = 0; x < 112; x++) {
			if (BackGround[y][x] == 0) {
				textcolor(WHITE, WHITE);
				printf(" ");
			}
			else if (BackGround[y][x] == 1) {
				textcolor(RED2, RED2);
				printf(" ");
			}

			else if (BackGround[y][x] == 2) {
				textcolor(BLUE1, BLUE1);
				printf(" ");
			}

			else if (BackGround[y][x] == 3) {
				textcolor(BLUE2, BLUE2);
				printf(" ");
			}

			else if (BackGround[y][x] == 4) {
				textcolor(GRAY1, GRAY1);
				printf(" ");
			}

			else if (BackGround[y][x] == 5) {
				textcolor(11, 11);
				printf(" ");
			}
			else if (BackGround[y][x] == 6) {
				textcolor(RED2, RED2);
				printf(" ");
			}
			else if (BackGround[y][x] == 7) {
				textcolor(BLACK, BLACK);
				printf(" ");
			}
			else if (BackGround[y][x] == 8) {
				textcolor(RED1, RED1);
				printf(" ");
			}

			else if (BackGround[y][x] == 9) {
				textcolor(YELLOW1, YELLOW1);
				printf(" ");
			}
			else if (BackGround[y][x] == 10) {
				textcolor(11, 11);
				printf(" ");
			}
			else if (BackGround[y][x] == 11) {
				textcolor(GREEN1, GREEN1);
				printf(" ");
			}
			else if (BackGround[y][x] == 12) {
				textcolor(GREEN2, GREEN2);
				printf(" ");
			}
			else if (BackGround[y][x] == 13) {
				textcolor(MAGENTA2, MAGENTA2);
				printf(" ");
			}
			else if (BackGround[y][x] == 14) {
				textcolor(MAGENTA1, MAGENTA1);
				printf(" ");
			}
		}
	}
	textcolor(BLACK, WHITE);
}

void removeCursor(void) { // 커서를 안보이게 한다
	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	curInfo.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}

void gotoxy(int x, int y) //내가 원하는 위치로 커서 이동
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);// WIN32API 함수입니다. 이건 알필요 없어요
}

void textcolor(int fg_color, int bg_color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), fg_color | bg_color << 4);
}

// 화면 지우기고 원하는 배경색으로 설정한다.
void cls(int bg_color, int text_color)
{
	char cmd[100];
	system("cls");
	sprintf(cmd, "COLOR %x%x", bg_color, text_color);
	system(cmd);

}

// box 그리기 함수, ch 문자로 (x1,y1) ~ (x2,y2) box를 그린다.
void draw_box(int x1, int y1, int x2, int y2, char ch)
{
	int x, y;
	for (x = x1; x <= x2; x += 1) {
		gotoxy(x, y1);
		printf("%c", ch);
		gotoxy(x, y2);
		printf("%c", ch);
	}
	for (y = y1; y <= y2; y++) {
		gotoxy(x1, y);
		printf("%c", ch);
		gotoxy(x2, y);
		printf("%c", ch);
	}
}

// box 그리기 함수, ch 문자열로 (x1,y1) ~ (x2,y2) box를 그린다.
// 한글 문자를 그리는 용도로 사용 "□" 로 벽을 그리는 경우
void draw_box2(int x1, int y1, int x2, int y2)
{
	int x, y;
	int len = 2;
	for (x = x1; x <= x2; x += len) {
		gotoxy(x, y1);
		printf("%s", "─");
		gotoxy(x, y2);
		printf("%s", "─");
	}
	for (y = y1; y <= y2; y++) {
		gotoxy(x1, y);
		printf("%s", "│");
		gotoxy(x2, y);
		printf("%s", "│");
	}
	gotoxy(x1, y1);
	printf("%s", "┌");
	gotoxy(x1, y2);
	printf("%s", "└");
	gotoxy(x2, y1);
	printf("%s", "┐");
	gotoxy(x2, y2);
	printf("%s", "┘");
}

// 가로줄, (x1,y) ~ (x2,y) 선을 line을 그린다.
void draw_hline(int y, int x1, int x2, char ch)
{
	gotoxy(x1, y);
	for (; x1 <= x2; x1++)
		putchar(ch);
}

// 메뉴 내용 깜빡이게 하는 그래픽
void printMenuOption(int *selectPosition, int *status) {
	gotoxy(54, 20);
	printf("뿌요뿌요 게임");

	gotoxy(56, 22);
	printf("게임시작");

	gotoxy(56, 24);
	printf("게임설명");

	gotoxy(57, 26);
	printf("나가기");

	// 색반전으로 위치 표현: 시간이 지날 때 마다 status가 바뀌면서 호출된다.
	if (*status == 1)
		textcolor(WHITE, BLACK);

	// 선택할 값의 위치에 따라 출력문이 달라진다.
	switch (*selectPosition)
	{
	case 2:
		gotoxy(56, 22);
		printf("게임시작");
		break;
	case 1:
		gotoxy(56, 24);
		printf("게임설명");
		break;
	case 0:
		gotoxy(57, 26);
		printf("나가기");
		break;
	default:
		break;
	}
	textcolor(BLACK, WHITE);
}

int moveUpDownSelect() {
	unsigned char ch;

	if (_kbhit() == 1) {  // 키보드가 눌려져 있으면
			// 예를 들어 UP key의 경우 0xe0 0x48 두개의 문자가 들어온다.
			ch = _getch();
			switch (ch) {
			case UP:
				return 1;
				break;
			case DOWN:
				return -1;
				break;
			case ' ': // 이건 두번 눌러야 끝남...
				return 100;
				break;
			default:
				return 0;
				break;
			}
	}
	else
		return 0;
}

// 내 cmd창 크기는 120 30 60
int mainMenu() {
	Sleep(100);
	printBackground();
	PlaySound(TEXT("mainMenu.wav"), NULL, SND_ASYNC | SND_LOOP);
	// 정적 화면 구현
	draw_box2(1, 1, 117, 29);
	gotoxy(48, 8);
	printf("Puyo Puyo! in C program");

	// 동적 화면 구현
	int status = 0;
	int selectPosition = 2; // 맨위에 있는 옵션이라 3부터 시작
	int button = 0;
	// 선택창 구현
	while (1) {

		// 상하의 값을 이동하는 키 입력 메뉴를 통한 다음 장면 이동은 메인에서
		button = moveUpDownSelect();
		if (button == 100)
			return selectPosition;
		else {
			selectPosition += button;

			// selectPosition이  옵션을 초과해서 이동하면 반대쪽에서 나온다.
			selectPosition %= 3;
		}

		// 자신의 위치 표현
		printMenuOption(&selectPosition, &status);
		if (status == 0)
			status = 1;
		else
			status = 0;

		Sleep(500);
	}
}

// 게임설명, 밑에서 위로 등장한다.
void explain() {
	cls(WHITE, BLACK);
	draw_box2(1, 1, 116, 29);
	for (int i = 16; i > 4; i--)
	{
		gotoxy(20, i - 2);
		printf("뿌요뿌요는 2인용 대결게임입니다!\n");

		gotoxy(20, i - 1);
		printf("뿌요라고 불리는 4가지 색상의 젤리를 4개 이상 뭉치면 젤리는 폭발합니다!     \n");

		gotoxy(20, i );
		printf("터진 공간에는 위에 있는 젤리가 내려와 채우게 됩니다!                       \n");

		gotoxy(20, i + 1);
		printf("그리고 다시 겹치는게 있다면 다시한번 폭발합니다!                           \n");

		gotoxy(20, i + 2);
		printf("                                                                           \n");

		gotoxy(20, i + 3);
		printf("많은 젤리를 폭발시키면 많은 점수와 상대방에게 방해 젤리를 보낼 수 있습니다!\n");

		gotoxy(20, i + 4);
		printf("방해젤리는 젤리를 터트리면 함께 폭발하며, 점수에는 포함되지 않습니다!      \n");

		gotoxy(20, i + 5);
		printf("여러 개의 젤리를 터트릴수록 더 많은 방해 젤리를 보낼 수 있습니다!          \n");

		gotoxy(20, i + 6);
		printf("                                                                           \n");

		gotoxy(20, i + 7);
		printf("시간이 지나면 전해지는 방해뿌요가 많아지니 빨리 끝내야 합니다!             \n");

		gotoxy(20, i + 8);
		printf("너무 많은 젤리가 쌓이게 되면 게임에서 패배하니 조심하세요!                 \n");

		gotoxy(20, i + 9);
		printf("                                                                           \n");

		gotoxy(20, i + 10);
		printf("- 조작키 - : < >는 빠르게 내리기                                            \n");

		gotoxy(20, i + 11);
		printf("1P : w, a, s, d <space>     2P : 방향키 <;>                                \n");

		gotoxy(20, i + 12);
		printf("                                                                           \n");

		Sleep(100);
	}

	gotoxy(20, 24);
	printf("아무키나 누르면 되돌아갑니다.\n");
	_getch();
}

// 게임 맵: 화면 전환될 일 없으니, 한번 그리고 수정하지 않는 구역
void gameMap() {

	cls(WHITE, BLACK);
	draw_box2(1, 1, 117, 29);
	// player1 맵
	draw_box2(9, 2, 41, 28);
	// player2 맵
	draw_box2(79, 2, 111, 28);
	// 다음 뿌요 디자인(상자)
	draw_box2(43, 2, 77, 10);
	// 다음 뿌요 디자인(player1)
	draw_box2(45, 3, 57, 9);
	// 다음 뿌요 디자인(player1)
	draw_box2(63, 3, 75, 9);

	// 넘어갈 방해뿌요 개수(player1)
	draw_box2(43, 11, 51, 28);
	// 넘어갈 방해뿌요 개수(player2)
	draw_box2(69, 11, 77, 28);

	// 라운드 표현(상자)
	draw_box2(53, 11, 67, 15);

	// 라운드 승리 횟수
	gotoxy(56, 14);
	printf("○");
	printf("○");

	gotoxy(62, 14);
	printf("○");
	printf("○");

	// 점수 표현(상자) 8칸
	draw_box2(53, 24, 67, 27);
	gotoxy(54, 23);
	printf("player1 Score!!");

	draw_box2(53, 18, 67, 21);
	gotoxy(54, 17);
	printf("player2 Score!!");
}

int mapClear(player* Player1, player* Player2) {
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			Player1->PuyoStack[j][i] = -1;
			Player2->PuyoStack[j][i] = -1;
		}
	}

	for (int j = 0; j < 12; j++)
	{
		gotoxy(11, 26 - 2 * j);
		printf("                              ");
		gotoxy(11, 26 - 2 * j + 1);
		printf("                              ");
		gotoxy(81, 26 - 2 * j);
		printf("                              ");
		gotoxy(81, 26 - 2 * j + 1);
		printf("                              ");
	}

}

// logic은 반환 후 나누기와 나머지로 구분: Puyo1, Puyo2 색상
void puyoLogic(int* logic) {
	int puyoCase[5][5] = { 0 };
	int firstPuyo;
	int secondPuyo;
	for (int i = 0; i < 25; i++)
	{
		while (1) {
			firstPuyo = rand() % 5;
			secondPuyo = rand() % 5;
			if (puyoCase[firstPuyo][secondPuyo] == 0) {
				puyoCase[firstPuyo][secondPuyo] = 1;
				logic[i] = firstPuyo * 10 + secondPuyo;
				break;
			}
		}
	}
}

// 시작 전 3초를 시간에 맞게 player 1, 2에게 송출
void counter() {
	gotoxy(9 + (5 * MAXLENGTH) / 2 + 2, 9);
	printf("3");
	gotoxy(109 - (5 * MAXLENGTH)/2 + 2, 9);
	printf("3");

	Sleep(1000);
	gotoxy(9 + (5 * MAXLENGTH) / 2 + 2, 9);
	printf("2");
	gotoxy(109 - (5 * MAXLENGTH) / 2 + 2, 9);
	printf("2");
	
	Sleep(1000);
	gotoxy(9 + (5 * MAXLENGTH) / 2 + 2, 9);
	printf("1");
	gotoxy(109 - (5 * MAXLENGTH) / 2 + 2, 9);
	printf("1");

	Sleep(1000);
	gotoxy(9 + (5 * MAXLENGTH) / 2 + 2, 9);
	printf(" ");
	gotoxy(109 - (5 * MAXLENGTH) / 2 + 2, 9);
	printf(" ");
}

//뿌요의 색상을 출력한다.
void printPuyo(puyo* PuyoX) {
	// 0 초록, 1 빨강, 2 노랑, 3 파랑, 4 보라
	switch (PuyoX->type)
	{
	case 0:
		textcolor(GREEN1, GREEN2);
		break;
	case 1:
		textcolor(RED1, RED2);
		break;
	case 2:
		textcolor(YELLOW1, YELLOW2);
		break;
	case 3:
		textcolor(BLUE1, BLUE2);
		break;
	case 4:
		textcolor(MAGENTA1, MAGENTA2);
		break;
	case 5:
		textcolor(BLACK, GRAY2);
		break;
	default:
		break;
	}
	
	if (PuyoX->type == 5) {
		gotoxy(PuyoX->x, PuyoX->y);
		printf("     ");
		gotoxy(PuyoX->x, PuyoX->y + 1);
		printf("ºmº");
	}
	else {
		gotoxy(PuyoX->x, PuyoX->y);
		printf(" _ _ ");
		gotoxy(PuyoX->x, PuyoX->y + 1);
		printf("  ^  ");
	}
	textcolor(BLACK, WHITE);
}

// 공백을 그린다. player.PuyoStack[][]의 인덱스를 기준으로 계산된다.
void printBlank(player* playerX, int indexX, int indexY) {
	if(playerX->PlayerX == 1)
		indexX = 5 * indexX + 11;
	else
		indexX = 5 * indexX + 81;
	indexY = 26 - 2 * indexY;
	gotoxy(indexX, indexY);
	printf("     ");
	gotoxy(indexX, indexY + 1);
	printf("     ");
}

void clearNowZone(puyo* PuyoX) {
	textcolor(BLACK, WHITE);
	gotoxy(PuyoX->x, PuyoX->y);
	printf("     ");
	gotoxy(PuyoX->x, PuyoX->y+1);
	printf("     ");
}

void move(player* Player1, player* Player2, puyo* Puyo1, puyo* Puyo2, puyo* Puyo3, puyo* Puyo4, int* spin1, int* spin2) {
	unsigned char ch1;

	if (_kbhit() == 1) {  // 키보드가 눌려져 있으면
		ch1 = _getch();

		switch (ch1) {
		case LEFT2:
			// 이동 값이 맵을 넘어간다면 이동X
			if (Puyo1->x - 5 < 11 || Puyo2->x - 5 < 11
				|| Player1->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5 - 1] != -1
				|| Player1->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 11) / 5 - 1] != -1)
				break;
			// 자기자리 지우는 함수
			clearNowZone(Puyo1);
			clearNowZone(Puyo2);
			Puyo1->x -= 5;
			Puyo2->x -= 5;
			break;
		case RIGHT2:
			// 이동 값이 맵을 넘어간다면 이동X
			if (Puyo1->x + 5 > 39 || Puyo2->x + 5 > 39
				|| Player1->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5 + 1] != -1
				|| Player1->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 11) / 5 + 1] != -1)
				break;

			// 자기자리 지우는 함수
			clearNowZone(Puyo1);
			clearNowZone(Puyo2);
			Puyo1->x += 5;
			Puyo2->x += 5;
			break;
		case UP2:
			if (*spin1 == 0 && Player1->PuyoStack[(26 - Puyo1->y) / 2 - 1][(Puyo1->x - 11) / 5] != -1)
				return;
			else if (*spin1 == 1 && Player1->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5 - 1] != -1)
				return;
			else if (*spin1 == 2 && Player1->PuyoStack[(26 - Puyo1->y) / 2 + 1][(Puyo1->x - 11) / 5] != -1)
				return;
			else if (*spin1 == 3 && Player1->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5 + 1] != -1)
				return;

			clearNowZone(Puyo1);
			clearNowZone(Puyo2);
			switch (*spin1)
			{
			case 0:
				if (Puyo1->y >= 26) {
					Puyo2->x = Puyo1->x;
					Puyo2->y = Puyo1->y;
					Puyo1->y -= 2;
				}
				else {
					Puyo2->y = Puyo1->y + 2;
					Puyo2->x = Puyo1->x;
				}
				*spin1 = (*spin1 + 1) % 4;
				break;
			case 1:
				//만약 돌릴 때 맵 밖으로 넘어가려 한다면
				if (Puyo1->x <= 11)
				{
					Puyo2->x = Puyo1->x;
					Puyo2->y = Puyo1->y;
					Puyo1->x += 5;
				}
				else {
					Puyo2->x = Puyo1->x - 5;
					Puyo2->y = Puyo1->y;
				}
				*spin1 = (*spin1 + 1) % 4;
				break;
			case 2:
				if (Puyo2->y >= 26) {
					Puyo1->x = Puyo2->x;
					Puyo1->y = Puyo2->y;
					Puyo2->y -= 2;
				}
				else {
					Puyo2->y = Puyo1->y - 2;
					Puyo2->x = Puyo1->x;
				}
				*spin1 = (*spin1 + 1) % 4;
				break;
			case 3:
				if (Puyo1->x + 5 >= 41) {
					Puyo2->x = Puyo1->x;
					Puyo2->y = Puyo1->y;
					Puyo1->x -= 5;
				}
				else {
					Puyo2->x = Puyo1->x + 5;
					Puyo2->y = Puyo1->y;
				}
				*spin1 = (*spin1 + 1) % 4;
				break;
			}
			break;
		case DOWN2:
			clearNowZone(Puyo1);
			clearNowZone(Puyo2);
			if (Player1->PuyoStack[(26 - Puyo1->y) / 2 - 1][(Puyo1->x - 11) / 5] == -1
				&& Player1->PuyoStack[(26 - Puyo2->y) / 2 - 1][(Puyo2->x - 11) / 5] == -1) {
				Puyo1->y += 2;
				Puyo2->y += 2;
			}
			break;
		case BLANK:
			clearNowZone(Puyo1);
			clearNowZone(Puyo2);
			while(1)
			{
				if (Puyo1->y == 26 || Puyo2->y == 26 
					|| Player1->PuyoStack[(26 - Puyo1->y) / 2 - 1][(Puyo1->x - 11) / 5] != -1
					|| Player1->PuyoStack[(26 - Puyo2->y) / 2 - 1][(Puyo2->x - 11) / 5] != -1) {
					break;
				}
				Puyo1->y += 2;
				Puyo2->y += 2;
			}
			break;
		case LEFT:
			// 이동 값이 맵을 넘어간다면 이동X
			if (Puyo3->x - 5 < 81 || Puyo4->x - 5 < 81
				|| Player2->PuyoStack[(26 - Puyo3->y) / 2][(Puyo3->x - 81) / 5 - 1] != -1
				|| Player2->PuyoStack[(26 - Puyo4->y) / 2][(Puyo4->x - 81) / 5 - 1] != -1)
				break;
			// 자기자리 지우는 함수
			clearNowZone(Puyo3);
			clearNowZone(Puyo4);
			Puyo3->x -= 5;
			Puyo4->x -= 5;
			break;
		case RIGHT:
			// 이동 값이 맵을 넘어간다면 이동X
			if (Puyo3->x + 5 > 109 || Puyo4->x + 5 > 109
				|| Player2->PuyoStack[(26 - Puyo3->y) / 2][(Puyo3->x - 81) / 5 + 1] != -1
				|| Player2->PuyoStack[(26 - Puyo4->y) / 2][(Puyo4->x - 81) / 5 + 1] != -1)
				break;

			// 자기자리 지우는 함수
			clearNowZone(Puyo3);
			clearNowZone(Puyo4);
			Puyo3->x += 5;
			Puyo4->x += 5;
			break;
		case UP:
			if (*spin2 == 0 && Player2->PuyoStack[(26 - Puyo3->y) / 2 - 1][(Puyo3->x - 81) / 5] != -1)
				return;
			else if (*spin2 == 1 && Player2->PuyoStack[(26 - Puyo3->y) / 2][(Puyo3->x - 81) / 5 - 1] != -1)
				return;
			else if (*spin2 == 2 && Player2->PuyoStack[(26 - Puyo3->y) / 2 + 1][(Puyo3->x - 81) / 5] != -1)
				return;
			else if (*spin2 == 3 && Player2->PuyoStack[(26 - Puyo3->y) / 2][(Puyo3->x - 81) / 5 + 1] != -1)
				return;

			clearNowZone(Puyo3);
			clearNowZone(Puyo4);
			switch (*spin2)
			{
			case 0:
				if (Puyo3->y >= 26) {
					Puyo4->x = Puyo3->x;
					Puyo4->y = Puyo3->y;
					Puyo3->y -= 2;
				}
				else {
					Puyo4->y = Puyo3->y + 2;
					Puyo4->x = Puyo3->x;
				}
				*spin2 = (*spin2 + 1) % 4;
				break;
			case 1:
				//만약 돌릴 때 맵 밖으로 넘어가려 한다면
				if (Puyo3->x <= 81)
				{
					Puyo4->x = Puyo3->x;
					Puyo4->y = Puyo3->y;
					Puyo3->x += 5;
				}
				else {
					Puyo4->x = Puyo3->x - 5;
					Puyo4->y = Puyo3->y;
				}
				*spin2 = (*spin2 + 1) % 4;
				break;
			case 2:
				if (Puyo4->y >= 26) {
					Puyo3->x = Puyo4->x;
					Puyo3->y = Puyo4->y;
					Puyo4->y -= 2;
				}
				else {
					Puyo4->y = Puyo3->y - 2;
					Puyo4->x = Puyo3->x;
				}
				*spin2 = (*spin2 + 1) % 4;
				break;
			case 3:
				if (Puyo3->x + 5 >= 111) {
					Puyo4->x = Puyo3->x;
					Puyo4->y = Puyo3->y;
					Puyo3->x -= 5;
				}
				else {
					Puyo4->x = Puyo3->x + 5;
					Puyo4->y = Puyo3->y;
				}
				*spin2 = (*spin2 + 1) % 4;
				break;
			}
			break;
		case DOWN:
			clearNowZone(Puyo3);
			clearNowZone(Puyo4);
			if (Player2->PuyoStack[(26 - Puyo3->y) / 2 - 1][(Puyo3->x - 81) / 5] == -1
				&& Player2->PuyoStack[(26 - Puyo4->y) / 2 - 1][(Puyo4->x - 81) / 5] == -1) {
				Puyo3->y += 2;
				Puyo4->y += 2;
			}
			break;
		case ';':
			clearNowZone(Puyo3);
			clearNowZone(Puyo4);
			while (1)
			{
				if (Puyo3->y == 26 || Puyo4->y == 26
					|| Player2->PuyoStack[(26 - Puyo3->y) / 2 - 1][(Puyo3->x - 81) / 5] != -1
					|| Player2->PuyoStack[(26 - Puyo4->y) / 2 - 1][(Puyo4->x - 81) / 5] != -1) {
					break;
				}
				Puyo3->y += 2;
				Puyo4->y += 2;
			}
			break;
		default:
			return;
			break;
		}
	}
}

void printTimer(clock_t* duration) {
	int Duration = *duration / CLOCKS_PER_SEC;
	gotoxy(60, 4);
	printf("%03d", Duration);
}

void printScore(player* PlayerX) {
	if (PlayerX->PlayerX == 1)
		gotoxy(55, 25);
	else
		gotoxy(55, 19);
	printf("%10d", PlayerX->score);
}

void clearScore() {
	gotoxy(55, 25);
	printf("          ");

	gotoxy(55, 19);
	printf("          ");
}

void soloPuyoMove(player* PlayerX, puyo* PuyoX) {
	if (PlayerX->PlayerX == 1) {
		clearNowZone(PuyoX);
		while (PlayerX->PuyoStack[(26 - (PuyoX->y - 1)) / 2 - 1][(PuyoX->x - 11) / 5] == -1)
			PuyoX->y += 2;
		printPuyo(PuyoX);
		PlayerX->PuyoStack[(26 - PuyoX->y) / 2][(PuyoX->x - 11) / 5] = PuyoX->type;// 정지된 해당 뿌요 위치에 player값 대입.
	}
	else {
		clearNowZone(PuyoX);
		while (PlayerX->PuyoStack[(26 - (PuyoX->y - 1)) / 2 - 1][(PuyoX->x - 81) / 5] == -1)
			PuyoX->y += 2;
		printPuyo(PuyoX);
		PlayerX->PuyoStack[(26 - PuyoX->y) / 2][(PuyoX->x - 81) / 5] = PuyoX->type;// 정지된 해당 뿌요 위치에 player값 대입.
		Sleep(100);
	}
}

void nextPuyo(int* logic, player* playerX) {
	if (playerX->PlayerX == 1) {
		puyo Puyo1;
		Puyo1.x = 47;
		Puyo1.y = 4;
		puyo Puyo2;
		Puyo2.x = 52;
		Puyo2.y = 4;
		Puyo1.type = logic[playerX->puyoIndex + 1] / 10;
		Puyo2.type = logic[playerX->puyoIndex + 1] % 10;
		printPuyo(&Puyo1);
		printPuyo(&Puyo2);

		Puyo1.x = 47;
		Puyo1.y = 7;
		Puyo2.x = 52;
		Puyo2.y = 7;
		Puyo1.type = logic[playerX->puyoIndex + 2] / 10;
		Puyo2.type = logic[playerX->puyoIndex + 2] % 10;
		printPuyo(&Puyo1);
		printPuyo(&Puyo2);
	}
	else
	{
		puyo Puyo1;
		Puyo1.x = 65;
		Puyo1.y = 4;
		puyo Puyo2;
		Puyo2.x = 70;
		Puyo2.y = 4;
		Puyo1.type = logic[playerX->puyoIndex + 1] / 10;
		Puyo2.type = logic[playerX->puyoIndex + 1] % 10;
		printPuyo(&Puyo1);
		printPuyo(&Puyo2);

		Puyo1.x = 65;
		Puyo1.y = 7;
		Puyo2.x = 70;
		Puyo2.y = 7;
		Puyo1.type = logic[playerX->puyoIndex + 2] / 10;
		Puyo2.type = logic[playerX->puyoIndex + 2] % 10;
		printPuyo(&Puyo1);
		printPuyo(&Puyo2);
	}
}

void checkPuyoCount(player* PlayerX, puyo* PuyoX, int checker[][6], int x, int y) {
	PlayerX->puyoRemoved++;

	checker[y][x] = 1;
	if (PuyoX->type!=5 && x >= 0 && x <= 5 && y >= 0 && PlayerX->PuyoStack[y][x + 1] == PuyoX->type && checker[y][x+1]!=1) {
		checkPuyoCount(PlayerX, PuyoX, checker, x + 1, y);
	}
	if (PuyoX->type != 5 && x >= 1 && x <= 6 && y >= 0 && PlayerX->PuyoStack[y][x - 1] == PuyoX->type && checker[y][x - 1] != 1) {
		checkPuyoCount(PlayerX, PuyoX, checker, x - 1, y);
	}
	if (PuyoX->type != 5 && x >= 0 && x <= 6 && y <= 11 && y >= 0 && PlayerX->PuyoStack[y + 1][x] == PuyoX->type && checker[y + 1][x] != 1) {
		checkPuyoCount(PlayerX, PuyoX, checker, x, y + 1);
	}
	if (PuyoX->type != 5 && x >= 0 && x <= 6 && y <= 12 && y >= 1 && PlayerX->PuyoStack[y - 1][x] == PuyoX->type && checker[y - 1][x] != 1) {
		checkPuyoCount(PlayerX, PuyoX, checker, x, y - 1);
	}
}	

void deletePuyo(player* PlayerX, puyo* PuyoX, int checker[][6], int x, int y) {
	checker[y][x] = 0;
	if (x >= 0 && x <= 5 && y >= 0 && PlayerX->PuyoStack[y][x + 1] == PuyoX->type && checker[y][x + 1] == 1) {
		deletePuyo(PlayerX, PuyoX, checker, x + 1, y);
	}
	if (x >= 1 && x <= 6 && y >= 0 && PlayerX->PuyoStack[y][x - 1] == PuyoX->type && checker[y][x - 1] == 1) {
		deletePuyo(PlayerX, PuyoX, checker, x - 1, y);
	}
	if (x >= 0 && x <= 6 && y<=11 && y >= 0 && PlayerX->PuyoStack[y + 1][x] == PuyoX->type && checker[y + 1][x] == 1) {
		deletePuyo(PlayerX, PuyoX, checker, x, y + 1);
	}
	if (x >= 0 && x <= 6 && y<=12 && y >= 1 && PlayerX->PuyoStack[y - 1][x] == PuyoX->type && checker[y - 1][x] == 1) {
		deletePuyo(PlayerX, PuyoX, checker, x, y - 1);
	}
	if (PlayerX->puyoRemoved >= 4) {
		splashObstructPuyo(PlayerX, &x, &y);
		printBlank(PlayerX, x, y);
		PlayerX->PuyoStack[y][x] = -1;
	}
}

void splashObstructPuyo(player* PlayerX, int* x, int* y) {
	if (PlayerX->PuyoStack[*y][*x + 1] == 5) {
		printBlank(PlayerX, *x + 1, *y);
	}
	if (PlayerX->PuyoStack[*y][*x - 1] == 5) {
		PlayerX->PuyoStack[*y][*x - 1] = -1;
		printBlank(PlayerX, *x - 1, *y);
	}
	if (PlayerX->PuyoStack[*y + 1][*x] == 5) {
		PlayerX->PuyoStack[*y+1][*x] = -1;
		printBlank(PlayerX, *x, *y + 1);
	}
	if (PlayerX->PuyoStack[*y - 1][*x] == 5) {
		PlayerX->PuyoStack[*y - 1][*x] = -1;
		printBlank(PlayerX, *x, *y - 1);
	}
}

void dropPuyos(player* PlayerX) {
	puyo Puyo;
	Puyo.player = PlayerX->PlayerX;

	int i, j, q;
	for (i = 0; i < 6; i++)
	{
		if (PlayerX->PlayerX == 1)
			Puyo.x = 5 * i + 11;
		else
			Puyo.x = 5 * i + 81;
		for (j = 0; j < 12; j++)
		{
			if (PlayerX->PuyoStack[j][i] == -1) {
				for (q = j+1; q < 12; q++)
				{
					if (PlayerX->PuyoStack[q][i] != -1) {// 만약에 블록이 위에 있다면,
						printBlank(PlayerX, i, q);
						Puyo.y = 26 - 2 * j;
						Puyo.type = PlayerX->PuyoStack[j][i] = PlayerX->PuyoStack[q][i];
						printPuyo(&Puyo);
						PlayerX->PuyoStack[q][i] = -1;
						break;
					}
				}
				if (q == 12) // 만약 블록이 위에 없다면, -> 몇개이상 중첩 되어있지도 않으니 j반복도 필요X
					break;
			}
		}
	}
}

void scanPuyo(player* PlayerX, int* colorChecker) {
	int T = 5;
	puyo Puyo;
	Puyo.player = PlayerX->PlayerX;
	int check = 0;
	
	while (T + 1) {
		int checker[12][6] = { 0 };
		// 0색 체크
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 6; j++) {
				if (checker[i][j] == 0 && PlayerX->PuyoStack[i][j] == T) {
					if(PlayerX->PlayerX==1)
						Puyo.x = 5 * j + 11;
					else
						Puyo.x = 5 * j + 81;
					Puyo.y = 26 - 2 * i;
					Puyo.type = T;
					checkPuyoCount(PlayerX, &Puyo, checker, j, i);
					if (PlayerX->puyoRemoved >= 4) {
						if (colorChecker[T] == 0) {
							colorChecker[T] = 1;
							PlayerX->puyoColor++;
						}
						PlayerX->puyoConnect = PlayerX->puyoRemoved;
						PlayerX->puyoRemovedSum += PlayerX->puyoConnect;
						PlayerX->score += PlayerX->puyoRemovedSum * (++PlayerX->puyoCombo + PlayerX->puyoColor + PlayerX->puyoConnect) * 10;
						printScore(PlayerX);
						deletePuyo(PlayerX, &Puyo, checker, j, i);
						check = 1;
					}
					PlayerX->puyoRemoved = 0;
				}
			}
		}
		T--;
	}

	dropPuyos(PlayerX);
	Sleep(500);
	if (check == 1) {
		PlayerX->puyoCombo++;
		scanPuyo(PlayerX, colorChecker);
	}
}

void printObstructPuyo(player* PlayerX) {
	int blackObstructPuyo = 0;
	int whiteObstructPuyo = 0;
	int i;

	blackObstructPuyo = PlayerX->obstructPuyoNum / 10;
	whiteObstructPuyo = PlayerX->obstructPuyoNum % 10;

	if (PlayerX->PlayerX == 1) {
		for (i = 0; i < blackObstructPuyo; i++)
		{
			gotoxy(47, 27 - i);
			printf("●");
		}
		for (; i < whiteObstructPuyo; i++)
		{
			gotoxy(47, 27 - i);
			printf("○");
		}
	}
	else {
		for (i = 0; i < blackObstructPuyo; i++)
		{
			gotoxy(73, 27 - i);
			printf("●");
		}
		for (; i < whiteObstructPuyo; i++)
		{
			gotoxy(73, 27 - i);
			printf("○");
		}
	}
}

void clearObstructPuyo(player* PlayerX) {
	if (PlayerX->PlayerX == 1) {
		for (int i = 0; i < 15; i++)
		{
			gotoxy(47, 27 - i);
			printf("  ");
		}
	}
	else
	{
		for (int i = 0; i < 15; i++)
		{
			gotoxy(73, 27 - i);
			printf("  ");
		}
	}
	PlayerX->obstructPuyoNum = 0;
}

void getObstructPuyo(player* PlayerX) {
	int seperateObstructPuyo = PlayerX->getObstructPuyo / 6;
	int moduloObstructPuyo = PlayerX->getObstructPuyo % 6;
	int r;
	puyo Puyo;
	Puyo.type = 5;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (PlayerX->PuyoStack[j][i] == -1)
			{
				for (int p = 0; p < seperateObstructPuyo; p++)
				{
					PlayerX->PuyoStack[j + p][i] = 5;
					if (PlayerX->PlayerX == 1) {
						Puyo.x = 5 * i + 11;
						Puyo.y = 26 - 2 * (j + p);
					}
					else {
						Puyo.x = 5 * i + 81;
						Puyo.y = 26 - 2 * (j + p);
					}
					printPuyo(&Puyo);
				}
				break;
			}
		}
	}
	while (moduloObstructPuyo--)
	{
		r = rand() % 6;
		for (int j = 0; j < 12; j++)
		{
			if (PlayerX->PuyoStack[j][r] == -1)
			{
				PlayerX->PuyoStack[j][r] = 5;
				if (PlayerX->PlayerX == 1)
				{
					Puyo.x = 5 * r + 11;
					Puyo.y = 26 - 2 * j;
				}
				else {
					Puyo.x = 5 * r + 81;
					Puyo.y = 26 - 2 * j;
				}
				printPuyo(&Puyo);
				break;
			}
		}
	}
	PlayerX->getObstructPuyo = 0;
}

int playerLose(player* PlayerX) {
	int playerXPos = 0;
	if (PlayerX->PlayerX == 1)
		playerXPos = 21;
	
	else
		playerXPos = 91;

	if (PlayerX->PuyoStack[10][2] != -1 || PlayerX->PuyoStack[10][3] != -1)
	{
		gotoxy(playerXPos, 4);
		printf("player%d Lose!",PlayerX->PlayerX);
		Sleep(1000);
		gotoxy(playerXPos, 4);
		printf("              ");
		if (PlayerX->lose == 1)
		{
			gotoxy(playerXPos, 4);
			printf("end game!");
			if (PlayerX->PlayerX == 1) {
				gotoxy(62, 14);
				printf("●");
				printf("●");
			}
			else {
				gotoxy(56, 14);
				printf("●");
				printf("●");
			}
			Sleep(3000);
			gotoxy(playerXPos, 9);
			printf("         ");
			return 2;
		}
		Sleep(1000);
		PlayerX->lose++;
		if (PlayerX->PlayerX == 1) {
			gotoxy(62, 14);
			printf("●");
			printf("○");
		}
		else {
			gotoxy(56, 14);
			printf("○");
			printf("●");
		}
		return 1;
	}

	return 0;
}

int everySecond(player* PlayerX, puyo* Puyo1, puyo* Puyo2) {
	clearNowZone(Puyo1);
	clearNowZone(Puyo2);

	// 뿌요 1과 2가 동시에 계산이 되지 않는다.
	if (PlayerX->PlayerX == 1) {
		int puyo1Bool = 0;
		if (PlayerX->PuyoStack[(26 - Puyo1->y) / 2 - 1][(Puyo1->x - 11) / 5] != -1) //|| Puyo1->y >= 24
			puyo1Bool = 1;

		int puyo2Bool = 0;
		if (PlayerX->PuyoStack[(26 - Puyo2->y) / 2 - 1][(Puyo2->x - 11) / 5] != -1) // 혹은 다른 뿌요와 겹칠 때. || Puyo2->y > 24
			puyo2Bool = 1;

		if (puyo1Bool == 1 && puyo2Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5] = Puyo1->type;
			PlayerX->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 11) / 5] = Puyo2->type;
			return 1;
		}
		else if (puyo1Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5] = Puyo1->type;// 정지된 해당 뿌요 위치에 player값 대입.
			printPuyo(Puyo1);
			soloPuyoMove(PlayerX, Puyo2);
			return 1;
		}
		else if (puyo2Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 11) / 5] = Puyo2->type;
			printPuyo(Puyo2);
			soloPuyoMove(PlayerX, Puyo1);
			return 1;
		}
	}
	else {
		int puyo1Bool = 0;
		if (PlayerX->PuyoStack[(26 - Puyo1->y) / 2 - 1][(Puyo1->x - 81) / 5] != -1) //|| Puyo1->y >= 24
			puyo1Bool = 1;

		int puyo2Bool = 0;
		if (PlayerX->PuyoStack[(26 - Puyo2->y) / 2 - 1][(Puyo2->x - 81) / 5] != -1) // 혹은 다른 뿌요와 겹칠 때. || Puyo2->y > 24
			puyo2Bool = 1;

		if (puyo1Bool == 1 && puyo2Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 81) / 5] = Puyo1->type;
			PlayerX->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 81) / 5] = Puyo2->type;
			return 1;
		}
		else if (puyo1Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 81) / 5] = Puyo1->type;// 정지된 해당 뿌요 위치에 player값 대입.
			printPuyo(Puyo1);
			soloPuyoMove(PlayerX, Puyo2);
			return 1;
		}
		else if (puyo2Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 81) / 5] = Puyo2->type;
			printPuyo(Puyo2);
			soloPuyoMove(PlayerX, Puyo1);
			return 1;
		}
	}
	Puyo1->y += 2;
	Puyo2->y += 2;
	printPuyo(Puyo1);
	printPuyo(Puyo2);
	return 0;
}

int everySeconds(player* Player1, player* Player2, puyo* Puyo1, puyo* Puyo2, puyo* Puyo3, puyo* Puyo4, int* colorChecker1, int* colorChecker2) {
	int player1Checker = 0;
	int player2Checker = 0;
	player1Checker = everySecond(Player1, Puyo1, Puyo2);
	player2Checker = everySecond(Player2, Puyo3, Puyo4);

	if (player1Checker == 1 && player2Checker == 1) {
		clearObstructPuyo(Player1);
		clearObstructPuyo(Player2);
		printPuyo(Puyo1);
		printPuyo(Puyo2);
		scanPuyo(Player1, colorChecker1);
		printPuyo(Puyo3);
		printPuyo(Puyo4);
		scanPuyo(Player2, colorChecker2);
		return 1;
	}
	else if (player1Checker == 1) {
		clearObstructPuyo(Player2);
		printPuyo(Puyo1);
		printPuyo(Puyo2);
		scanPuyo(Player1, colorChecker1);
		return 2;
	}
	else if (player2Checker == 1) {
		clearObstructPuyo(Player1);
		printPuyo(Puyo3);
		printPuyo(Puyo4);
		scanPuyo(Player2, colorChecker2);
		return 3;
	}
	return 0;
}

void start() {
	int checkingRound = 0;
	gameMap();
	player player1;
	player1.PlayerX = 1;
	player1.obstructPuyoNum = 0;
	player1.score = 0;
	player1.lose = 0;

	player player2;
	player2.PlayerX = 2;
	player2.obstructPuyoNum = 0;
	player2.score = 0;
	player2.lose = 0;

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			player1.PuyoStack[i][j] = -1;
			player2.PuyoStack[i][j] = -1;
		}
	}

	clock_t start, finish;
	clock_t duration;

	puyo Puyo1;
	Puyo1.player = 1;

	puyo Puyo2;
	Puyo2.player = 1;

	puyo Puyo3;
	Puyo3.player = 2;

	puyo Puyo4;
	Puyo4.player = 2;

	//라운드별 로직생성
	int logic[25];

	//라운드 시작 때 필요한거
	int round = 0;

	int soundSelecter = 0;
	while (checkingRound!=2) {

		soundSelecter = rand() % 3;
		if(soundSelecter==0)
			PlaySound(TEXT("Start1.wav"), NULL, SND_ASYNC | SND_LOOP);
		else if(soundSelecter==1)
			PlaySound(TEXT("Start2.wav"), NULL, SND_ASYNC | SND_LOOP);
		else
			PlaySound(TEXT("Start3.wav"), NULL, SND_ASYNC | SND_LOOP);
		player1.score = 0;
		player2.score = 0;
		puyoLogic(logic);
		player1.puyoIndex = 0;
		player2.puyoIndex = 0;
		nextPuyo(logic, &player1);
		nextPuyo(logic, &player2);
		counter();
		start = clock();
		round++;
		gotoxy(58, 12);
		printf("round %d", round);

		// player1
		player1.puyoRemovedSum = 0;
		player1.puyoRemoved = 0;
		player1.puyoColor = 0;
		player1.puyoConnect = 0;
		player1.puyoCombo = 0;
		player1.getObstructPuyo = 0;

		// player2
		player2.puyoRemovedSum = 0;
		player2.puyoRemoved = 0;
		player2.puyoColor = 0;
		player2.puyoConnect = 0;
		player2.puyoCombo = 0;
		player2.getObstructPuyo = 0;

		int spin1 = 0;
		Puyo1.x = 21;
		Puyo1.y = 6;

		Puyo2.x = 26;
		Puyo2.y = 6;

		// player2 뿌요 생성 위치 초기화
		int spin2 = 0;
		Puyo3.x = 91;
		Puyo3.y = 6;

		Puyo4.x = 96;
		Puyo4.y = 6;

		while (1) // 라운드 진행 루프
		{
			int secondChecker = 0;

			

			// 플레이어1 로직 생성
			Puyo1.type = logic[player1.puyoIndex] / 10;
			Puyo2.type = logic[player1.puyoIndex] % 10;

			nextPuyo(logic, &player1);

			// 플레이어2 로직 생성
			Puyo3.type = logic[player2.puyoIndex] / 10;
			Puyo4.type = logic[player2.puyoIndex] % 10;

			nextPuyo(logic, &player2);

			// 점수 관리
			player1.lastScore = player1.score;
			player2.lastScore = player2.score;

			// 뿌요 내려가기
			while (1) {
				int colorChecker1[5];
				int colorChecker2[5];
				finish = clock();
				duration = (finish - start);

				printTimer(&duration);

				if ((duration % CLOCKS_PER_SEC) % 500 == 0) {// 초단위 체크 방법(초정밀 계산을 위함.) 단위는 1000으로
					secondChecker = everySeconds(&player1, &player2, &Puyo1, &Puyo2, &Puyo3, &Puyo4, &colorChecker1, &colorChecker2);
					if (secondChecker != 0) {
						break;
					}
				}
				printPuyo(&Puyo1);
				printPuyo(&Puyo2);

				printPuyo(&Puyo3);
				printPuyo(&Puyo4);
				// 조작함수
				move(&player1, &player2, &Puyo1, &Puyo2, &Puyo3, &Puyo4, &spin1, &spin2);
			}

			checkingRound = playerLose(&player1);
			if (checkingRound != 0) {
				mapClear(&player1, &player2);
				break;
			}

			checkingRound = playerLose(&player2);
			if (checkingRound != 0) {
				mapClear(&player1, &player2);
				break;
			}

			if (secondChecker == 1) {
				player1.obstructPuyoNum = (player1.score - player1.lastScore) / 70;
				player2.obstructPuyoNum = (player2.score - player2.lastScore) / 70;
				player1.getObstructPuyo = player2.obstructPuyoNum;
				player2.getObstructPuyo = player1.obstructPuyoNum;
				printObstructPuyo(&player1);
				printObstructPuyo(&player2);
				player1.puyoIndex = (player1.puyoIndex + 1) % 25;
				player2.puyoIndex = (player2.puyoIndex + 1) % 25;
				getObstructPuyo(&player1);
				getObstructPuyo(&player2);

				// player1
				player1.puyoRemovedSum = 0;
				player1.puyoRemoved = 0;
				player1.puyoColor = 0;
				player1.puyoConnect = 0;
				player1.puyoCombo = 0;

				// player2
				player2.puyoRemovedSum = 0;
				player2.puyoRemoved = 0;
				player2.puyoColor = 0;
				player2.puyoConnect = 0;
				player2.puyoCombo = 0;

				int spin1 = 0;
				Puyo1.x = 21;
				Puyo1.y = 6;

				Puyo2.x = 26;
				Puyo2.y = 6;

				// player2 뿌요 생성 위치 초기화
				int spin2 = 0;
				Puyo3.x = 91;
				Puyo3.y = 6;

				Puyo4.x = 96;
				Puyo4.y = 6;

				clearScore();
			}
			else if (secondChecker == 2) {
				player1.obstructPuyoNum = (player1.score - player1.lastScore) / 70;
				player2.getObstructPuyo = player1.obstructPuyoNum;
				printObstructPuyo(&player1);
				player1.puyoIndex = (player1.puyoIndex + 1) % 25;
				getObstructPuyo(&player1);

				// player1
				player1.puyoRemovedSum = 0;
				player1.puyoRemoved = 0;
				player1.puyoColor = 0;
				player1.puyoConnect = 0;
				player1.puyoCombo = 0;
				
				// player1 뿌요 생성 위치 초기화
				spin1 = 0;
				Puyo1.x = 21;
				Puyo1.y = 6;

				Puyo2.x = 26;
				Puyo2.y = 6;

				clearScore();
			}
			else if (secondChecker == 3) {
				player2.obstructPuyoNum = (player2.score - player2.lastScore) / 70;
				player1.getObstructPuyo = player2.obstructPuyoNum;
				printObstructPuyo(&player2);
				player2.puyoIndex = (player2.puyoIndex + 1) % 25;
				getObstructPuyo(&player2);
				
				// player2
				player2.puyoRemovedSum = 0;
				player2.puyoRemoved = 0;
				player2.puyoColor = 0;
				player2.puyoConnect = 0;
				player2.puyoCombo = 0;

				// player2 뿌요 생성 위치 초기화
				spin2 = 0;
				Puyo3.x = 91;
				Puyo3.y = 6;

				Puyo4.x = 96;
				Puyo4.y = 6;

				clearScore();
			}
		}
	}
}

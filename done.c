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
		gotoxy(6, y+2); // y�� ó�� ��ġ�� Ȯ���ϰ�, ���� ������ overwirte�Ѵ�.
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

void removeCursor(void) { // Ŀ���� �Ⱥ��̰� �Ѵ�
	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	curInfo.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}

void gotoxy(int x, int y) //���� ���ϴ� ��ġ�� Ŀ�� �̵�
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);// WIN32API �Լ��Դϴ�. �̰� ���ʿ� �����
}

void textcolor(int fg_color, int bg_color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), fg_color | bg_color << 4);
}

// ȭ�� ������ ���ϴ� �������� �����Ѵ�.
void cls(int bg_color, int text_color)
{
	char cmd[100];
	system("cls");
	sprintf(cmd, "COLOR %x%x", bg_color, text_color);
	system(cmd);

}

// box �׸��� �Լ�, ch ���ڷ� (x1,y1) ~ (x2,y2) box�� �׸���.
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

// box �׸��� �Լ�, ch ���ڿ��� (x1,y1) ~ (x2,y2) box�� �׸���.
// �ѱ� ���ڸ� �׸��� �뵵�� ��� "��" �� ���� �׸��� ���
void draw_box2(int x1, int y1, int x2, int y2)
{
	int x, y;
	int len = 2;
	for (x = x1; x <= x2; x += len) {
		gotoxy(x, y1);
		printf("%s", "��");
		gotoxy(x, y2);
		printf("%s", "��");
	}
	for (y = y1; y <= y2; y++) {
		gotoxy(x1, y);
		printf("%s", "��");
		gotoxy(x2, y);
		printf("%s", "��");
	}
	gotoxy(x1, y1);
	printf("%s", "��");
	gotoxy(x1, y2);
	printf("%s", "��");
	gotoxy(x2, y1);
	printf("%s", "��");
	gotoxy(x2, y2);
	printf("%s", "��");
}

// ������, (x1,y) ~ (x2,y) ���� line�� �׸���.
void draw_hline(int y, int x1, int x2, char ch)
{
	gotoxy(x1, y);
	for (; x1 <= x2; x1++)
		putchar(ch);
}

// �޴� ���� �����̰� �ϴ� �׷���
void printMenuOption(int *selectPosition, int *status) {
	gotoxy(54, 20);
	printf("�ѿ�ѿ� ����");

	gotoxy(56, 22);
	printf("���ӽ���");

	gotoxy(56, 24);
	printf("���Ӽ���");

	gotoxy(57, 26);
	printf("������");

	// ���������� ��ġ ǥ��: �ð��� ���� �� ���� status�� �ٲ�鼭 ȣ��ȴ�.
	if (*status == 1)
		textcolor(WHITE, BLACK);

	// ������ ���� ��ġ�� ���� ��¹��� �޶�����.
	switch (*selectPosition)
	{
	case 2:
		gotoxy(56, 22);
		printf("���ӽ���");
		break;
	case 1:
		gotoxy(56, 24);
		printf("���Ӽ���");
		break;
	case 0:
		gotoxy(57, 26);
		printf("������");
		break;
	default:
		break;
	}
	textcolor(BLACK, WHITE);
}

int moveUpDownSelect() {
	unsigned char ch;

	if (_kbhit() == 1) {  // Ű���尡 ������ ������
			// ���� ��� UP key�� ��� 0xe0 0x48 �ΰ��� ���ڰ� ���´�.
			ch = _getch();
			switch (ch) {
			case UP:
				return 1;
				break;
			case DOWN:
				return -1;
				break;
			case ' ': // �̰� �ι� ������ ����...
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

// �� cmdâ ũ��� 120 30 60
int mainMenu() {
	Sleep(100);
	printBackground();
	PlaySound(TEXT("mainMenu.wav"), NULL, SND_ASYNC | SND_LOOP);
	// ���� ȭ�� ����
	draw_box2(1, 1, 117, 29);
	gotoxy(48, 8);
	printf("Puyo Puyo! in C program");

	// ���� ȭ�� ����
	int status = 0;
	int selectPosition = 2; // ������ �ִ� �ɼ��̶� 3���� ����
	int button = 0;
	// ����â ����
	while (1) {

		// ������ ���� �̵��ϴ� Ű �Է� �޴��� ���� ���� ��� �̵��� ���ο���
		button = moveUpDownSelect();
		if (button == 100)
			return selectPosition;
		else {
			selectPosition += button;

			// selectPosition��  �ɼ��� �ʰ��ؼ� �̵��ϸ� �ݴ��ʿ��� ���´�.
			selectPosition %= 3;
		}

		// �ڽ��� ��ġ ǥ��
		printMenuOption(&selectPosition, &status);
		if (status == 0)
			status = 1;
		else
			status = 0;

		Sleep(500);
	}
}

// ���Ӽ���, �ؿ��� ���� �����Ѵ�.
void explain() {
	cls(WHITE, BLACK);
	draw_box2(1, 1, 116, 29);
	for (int i = 16; i > 4; i--)
	{
		gotoxy(20, i - 2);
		printf("�ѿ�ѿ�� 2�ο� �������Դϴ�!\n");

		gotoxy(20, i - 1);
		printf("�ѿ��� �Ҹ��� 4���� ������ ������ 4�� �̻� ��ġ�� ������ �����մϴ�!     \n");

		gotoxy(20, i );
		printf("���� �������� ���� �ִ� ������ ������ ä��� �˴ϴ�!                       \n");

		gotoxy(20, i + 1);
		printf("�׸��� �ٽ� ��ġ�°� �ִٸ� �ٽ��ѹ� �����մϴ�!                           \n");

		gotoxy(20, i + 2);
		printf("                                                                           \n");

		gotoxy(20, i + 3);
		printf("���� ������ ���߽�Ű�� ���� ������ ���濡�� ���� ������ ���� �� �ֽ��ϴ�!\n");

		gotoxy(20, i + 4);
		printf("���������� ������ ��Ʈ���� �Բ� �����ϸ�, �������� ���Ե��� �ʽ��ϴ�!      \n");

		gotoxy(20, i + 5);
		printf("���� ���� ������ ��Ʈ������ �� ���� ���� ������ ���� �� �ֽ��ϴ�!          \n");

		gotoxy(20, i + 6);
		printf("                                                                           \n");

		gotoxy(20, i + 7);
		printf("�ð��� ������ �������� ���ػѿ䰡 �������� ���� ������ �մϴ�!             \n");

		gotoxy(20, i + 8);
		printf("�ʹ� ���� ������ ���̰� �Ǹ� ���ӿ��� �й��ϴ� �����ϼ���!                 \n");

		gotoxy(20, i + 9);
		printf("                                                                           \n");

		gotoxy(20, i + 10);
		printf("- ����Ű - : < >�� ������ ������                                            \n");

		gotoxy(20, i + 11);
		printf("1P : w, a, s, d <space>     2P : ����Ű <;>                                \n");

		gotoxy(20, i + 12);
		printf("                                                                           \n");

		Sleep(100);
	}

	gotoxy(20, 24);
	printf("�ƹ�Ű�� ������ �ǵ��ư��ϴ�.\n");
	_getch();
}

// ���� ��: ȭ�� ��ȯ�� �� ������, �ѹ� �׸��� �������� �ʴ� ����
void gameMap() {

	cls(WHITE, BLACK);
	draw_box2(1, 1, 117, 29);
	// player1 ��
	draw_box2(9, 2, 41, 28);
	// player2 ��
	draw_box2(79, 2, 111, 28);
	// ���� �ѿ� ������(����)
	draw_box2(43, 2, 77, 10);
	// ���� �ѿ� ������(player1)
	draw_box2(45, 3, 57, 9);
	// ���� �ѿ� ������(player1)
	draw_box2(63, 3, 75, 9);

	// �Ѿ ���ػѿ� ����(player1)
	draw_box2(43, 11, 51, 28);
	// �Ѿ ���ػѿ� ����(player2)
	draw_box2(69, 11, 77, 28);

	// ���� ǥ��(����)
	draw_box2(53, 11, 67, 15);

	// ���� �¸� Ƚ��
	gotoxy(56, 14);
	printf("��");
	printf("��");

	gotoxy(62, 14);
	printf("��");
	printf("��");

	// ���� ǥ��(����) 8ĭ
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

// logic�� ��ȯ �� ������� �������� ����: Puyo1, Puyo2 ����
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

// ���� �� 3�ʸ� �ð��� �°� player 1, 2���� ����
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

//�ѿ��� ������ ����Ѵ�.
void printPuyo(puyo* PuyoX) {
	// 0 �ʷ�, 1 ����, 2 ���, 3 �Ķ�, 4 ����
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
		printf("��m��");
	}
	else {
		gotoxy(PuyoX->x, PuyoX->y);
		printf(" _ _ ");
		gotoxy(PuyoX->x, PuyoX->y + 1);
		printf("  ^  ");
	}
	textcolor(BLACK, WHITE);
}

// ������ �׸���. player.PuyoStack[][]�� �ε����� �������� ���ȴ�.
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

	if (_kbhit() == 1) {  // Ű���尡 ������ ������
		ch1 = _getch();

		switch (ch1) {
		case LEFT2:
			// �̵� ���� ���� �Ѿ�ٸ� �̵�X
			if (Puyo1->x - 5 < 11 || Puyo2->x - 5 < 11
				|| Player1->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5 - 1] != -1
				|| Player1->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 11) / 5 - 1] != -1)
				break;
			// �ڱ��ڸ� ����� �Լ�
			clearNowZone(Puyo1);
			clearNowZone(Puyo2);
			Puyo1->x -= 5;
			Puyo2->x -= 5;
			break;
		case RIGHT2:
			// �̵� ���� ���� �Ѿ�ٸ� �̵�X
			if (Puyo1->x + 5 > 39 || Puyo2->x + 5 > 39
				|| Player1->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5 + 1] != -1
				|| Player1->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 11) / 5 + 1] != -1)
				break;

			// �ڱ��ڸ� ����� �Լ�
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
				//���� ���� �� �� ������ �Ѿ�� �Ѵٸ�
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
			// �̵� ���� ���� �Ѿ�ٸ� �̵�X
			if (Puyo3->x - 5 < 81 || Puyo4->x - 5 < 81
				|| Player2->PuyoStack[(26 - Puyo3->y) / 2][(Puyo3->x - 81) / 5 - 1] != -1
				|| Player2->PuyoStack[(26 - Puyo4->y) / 2][(Puyo4->x - 81) / 5 - 1] != -1)
				break;
			// �ڱ��ڸ� ����� �Լ�
			clearNowZone(Puyo3);
			clearNowZone(Puyo4);
			Puyo3->x -= 5;
			Puyo4->x -= 5;
			break;
		case RIGHT:
			// �̵� ���� ���� �Ѿ�ٸ� �̵�X
			if (Puyo3->x + 5 > 109 || Puyo4->x + 5 > 109
				|| Player2->PuyoStack[(26 - Puyo3->y) / 2][(Puyo3->x - 81) / 5 + 1] != -1
				|| Player2->PuyoStack[(26 - Puyo4->y) / 2][(Puyo4->x - 81) / 5 + 1] != -1)
				break;

			// �ڱ��ڸ� ����� �Լ�
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
				//���� ���� �� �� ������ �Ѿ�� �Ѵٸ�
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
		PlayerX->PuyoStack[(26 - PuyoX->y) / 2][(PuyoX->x - 11) / 5] = PuyoX->type;// ������ �ش� �ѿ� ��ġ�� player�� ����.
	}
	else {
		clearNowZone(PuyoX);
		while (PlayerX->PuyoStack[(26 - (PuyoX->y - 1)) / 2 - 1][(PuyoX->x - 81) / 5] == -1)
			PuyoX->y += 2;
		printPuyo(PuyoX);
		PlayerX->PuyoStack[(26 - PuyoX->y) / 2][(PuyoX->x - 81) / 5] = PuyoX->type;// ������ �ش� �ѿ� ��ġ�� player�� ����.
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
					if (PlayerX->PuyoStack[q][i] != -1) {// ���࿡ ����� ���� �ִٸ�,
						printBlank(PlayerX, i, q);
						Puyo.y = 26 - 2 * j;
						Puyo.type = PlayerX->PuyoStack[j][i] = PlayerX->PuyoStack[q][i];
						printPuyo(&Puyo);
						PlayerX->PuyoStack[q][i] = -1;
						break;
					}
				}
				if (q == 12) // ���� ����� ���� ���ٸ�, -> ��̻� ��ø �Ǿ������� ������ j�ݺ��� �ʿ�X
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
		// 0�� üũ
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
			printf("��");
		}
		for (; i < whiteObstructPuyo; i++)
		{
			gotoxy(47, 27 - i);
			printf("��");
		}
	}
	else {
		for (i = 0; i < blackObstructPuyo; i++)
		{
			gotoxy(73, 27 - i);
			printf("��");
		}
		for (; i < whiteObstructPuyo; i++)
		{
			gotoxy(73, 27 - i);
			printf("��");
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
				printf("��");
				printf("��");
			}
			else {
				gotoxy(56, 14);
				printf("��");
				printf("��");
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
			printf("��");
			printf("��");
		}
		else {
			gotoxy(56, 14);
			printf("��");
			printf("��");
		}
		return 1;
	}

	return 0;
}

int everySecond(player* PlayerX, puyo* Puyo1, puyo* Puyo2) {
	clearNowZone(Puyo1);
	clearNowZone(Puyo2);

	// �ѿ� 1�� 2�� ���ÿ� ����� ���� �ʴ´�.
	if (PlayerX->PlayerX == 1) {
		int puyo1Bool = 0;
		if (PlayerX->PuyoStack[(26 - Puyo1->y) / 2 - 1][(Puyo1->x - 11) / 5] != -1) //|| Puyo1->y >= 24
			puyo1Bool = 1;

		int puyo2Bool = 0;
		if (PlayerX->PuyoStack[(26 - Puyo2->y) / 2 - 1][(Puyo2->x - 11) / 5] != -1) // Ȥ�� �ٸ� �ѿ�� ��ĥ ��. || Puyo2->y > 24
			puyo2Bool = 1;

		if (puyo1Bool == 1 && puyo2Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5] = Puyo1->type;
			PlayerX->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 11) / 5] = Puyo2->type;
			return 1;
		}
		else if (puyo1Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 11) / 5] = Puyo1->type;// ������ �ش� �ѿ� ��ġ�� player�� ����.
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
		if (PlayerX->PuyoStack[(26 - Puyo2->y) / 2 - 1][(Puyo2->x - 81) / 5] != -1) // Ȥ�� �ٸ� �ѿ�� ��ĥ ��. || Puyo2->y > 24
			puyo2Bool = 1;

		if (puyo1Bool == 1 && puyo2Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 81) / 5] = Puyo1->type;
			PlayerX->PuyoStack[(26 - Puyo2->y) / 2][(Puyo2->x - 81) / 5] = Puyo2->type;
			return 1;
		}
		else if (puyo1Bool == 1) {
			PlayerX->PuyoStack[(26 - Puyo1->y) / 2][(Puyo1->x - 81) / 5] = Puyo1->type;// ������ �ش� �ѿ� ��ġ�� player�� ����.
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

	//���庰 ��������
	int logic[25];

	//���� ���� �� �ʿ��Ѱ�
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

		// player2 �ѿ� ���� ��ġ �ʱ�ȭ
		int spin2 = 0;
		Puyo3.x = 91;
		Puyo3.y = 6;

		Puyo4.x = 96;
		Puyo4.y = 6;

		while (1) // ���� ���� ����
		{
			int secondChecker = 0;

			

			// �÷��̾�1 ���� ����
			Puyo1.type = logic[player1.puyoIndex] / 10;
			Puyo2.type = logic[player1.puyoIndex] % 10;

			nextPuyo(logic, &player1);

			// �÷��̾�2 ���� ����
			Puyo3.type = logic[player2.puyoIndex] / 10;
			Puyo4.type = logic[player2.puyoIndex] % 10;

			nextPuyo(logic, &player2);

			// ���� ����
			player1.lastScore = player1.score;
			player2.lastScore = player2.score;

			// �ѿ� ��������
			while (1) {
				int colorChecker1[5];
				int colorChecker2[5];
				finish = clock();
				duration = (finish - start);

				printTimer(&duration);

				if ((duration % CLOCKS_PER_SEC) % 500 == 0) {// �ʴ��� üũ ���(������ ����� ����.) ������ 1000����
					secondChecker = everySeconds(&player1, &player2, &Puyo1, &Puyo2, &Puyo3, &Puyo4, &colorChecker1, &colorChecker2);
					if (secondChecker != 0) {
						break;
					}
				}
				printPuyo(&Puyo1);
				printPuyo(&Puyo2);

				printPuyo(&Puyo3);
				printPuyo(&Puyo4);
				// �����Լ�
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

				// player2 �ѿ� ���� ��ġ �ʱ�ȭ
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
				
				// player1 �ѿ� ���� ��ġ �ʱ�ȭ
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

				// player2 �ѿ� ���� ��ġ �ʱ�ȭ
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

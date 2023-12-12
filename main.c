#include "standard.h"

int main() {
	//player player1;
	removeCursor();
	srand((unsigned)time(NULL));
	int ch;
	while (1)
	{
		cls(WHITE, BLACK);
		ch = mainMenu(); // mainMenu에서 선택한 값의 창을 띄운다.
		switch (ch)
		{
		case 3:
			// 뿌요뿌요 게임
		case 2:
			// 게임시작
			start();
			break;
		case 1:
			// 게임설명
			explain();
			break;
		case 0:
			// 나가기
			gotoxy(20, 29);
			exit(0);
			break;
		default:
			break;
		}
	}
}
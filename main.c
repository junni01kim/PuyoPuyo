#include "standard.h"

int main() {
	//player player1;
	removeCursor();
	srand((unsigned)time(NULL));
	int ch;
	while (1)
	{
		cls(WHITE, BLACK);
		ch = mainMenu(); // mainMenu���� ������ ���� â�� ����.
		switch (ch)
		{
		case 3:
			// �ѿ�ѿ� ����
		case 2:
			// ���ӽ���
			start();
			break;
		case 1:
			// ���Ӽ���
			explain();
			break;
		case 0:
			// ������
			gotoxy(20, 29);
			exit(0);
			break;
		default:
			break;
		}
	}
}
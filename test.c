#define  _CRT_SECURE_NO_WARNINGS 1
//ɨ����Ϸ��������
#include "game.h"
void menu()
{
	printf("ɨ����Ϸ��                                   \n");
	printf("               1.��ʼ��Ϸ                    \n");
	printf("               0.�˳���Ϸ                    \n");
	printf("                                             \n");
}
int main()
{

	int input = 0;
	do
	{
	    menu();
	    printf("��ѡ��>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			//printf("��ʼ��Ϸ\n");
			//break;
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}


















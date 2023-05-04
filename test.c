#define  _CRT_SECURE_NO_WARNINGS 1
//É¨À×ÓÎÏ·µÄ²âÊÔ
#include "game.h"
void menu()
{
	printf("É¨À×ÓÎÏ·£º                                   \n");
	printf("               1.¿ªÊ¼ÓÎÏ·                    \n");
	printf("               0.ÍË³öÓÎÏ·                    \n");
	printf("                                             \n");
}
int main()
{
	menu();
	int input = 0;
	while (1)
	{
		scanf("%d", &input);
	}
	return 0;
}


















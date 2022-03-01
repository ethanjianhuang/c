#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu();
void Game();
int main()
{
	int num=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &num);
			switch (num)
			{
			case 1:
					Game();
					break;
			case 0:
					printf("退出游戏\n");
					break;
			default:
					printf("请重新输入\n");
					break;
			}
	} while (num);

	return 0;
}
void menu()
{
	printf("********************************************************\n");
	printf("***           1. play        0. exit                 ***\n");
	printf("********************************************************\n");
	printf("请选择：1开始游戏 0退出游戏\n");
}
void Game()
{
	int ret = 0;
	int guess = 0;
	
	ret = rand() % 100 + 1;
	while (1)
	{
		
		printf("请猜数字1到100之间:>");
	
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("黄建通， 你猜对了\n");
			break;
		}
		
	}
	printf("\n");
}
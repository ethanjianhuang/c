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
					printf("�˳���Ϸ\n");
					break;
			default:
					printf("����������\n");
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
	printf("��ѡ��1��ʼ��Ϸ 0�˳���Ϸ\n");
}
void Game()
{
	int ret = 0;
	int guess = 0;
	
	ret = rand() % 100 + 1;
	while (1)
	{
		
		printf("�������1��100֮��:>");
	
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�ƽ�ͨ�� ��¶���\n");
			break;
		}
		
	}
	printf("\n");
}
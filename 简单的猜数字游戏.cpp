# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//猜数字游戏
//1.打印一个界面
void menu()
{
	printf("*****1.开始游戏*****\n");
	printf("*****0.退出游戏*****");
}
//2.游戏内容
void game()
{
	int a;
	int ret = rand() % 100 + 1; //产生1-100随机数
	while (1)
	{
		printf("请输入数字:");
		scanf("%d", &a);
		if (a > ret)
			printf("猜大了\n");
		else if (a < ret)
			printf("猜小了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	menu();
	srand((unsigned int)time(NULL));  //产生一个随机数
	int input;
	scanf("%d", &input);
	do
	{
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("请重新输入：");
			break;
		}
	} while (input);
	return 0;
}
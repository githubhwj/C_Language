# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//��������Ϸ
//1.��ӡһ������
void menu()
{
	printf("*****1.��ʼ��Ϸ*****\n");
	printf("*****0.�˳���Ϸ*****");
}
//2.��Ϸ����
void game()
{
	int a;
	int ret = rand() % 100 + 1; //����1-100�����
	while (1)
	{
		printf("����������:");
		scanf("%d", &a);
		if (a > ret)
			printf("�´���\n");
		else if (a < ret)
			printf("��С��\n");
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	menu();
	srand((unsigned int)time(NULL));  //����һ�������
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
			printf("���������룺");
			break;
		}
	} while (input);
	return 0;
}
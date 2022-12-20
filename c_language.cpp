# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//1.print an interface
void menu()
{
	printf("******1.GAME START*******\n");
	printf("******0.GAME END*******");
}
//2.game content
void game()
{
	int a;
	int ret = rand() % 100 + 1; 
	while (1)
	{
		printf("please enter numbers:");
		scanf("%d", &a);
		if (a > ret)
			printf("guess big\n");
		else if (a < ret)
			printf("guess small\n");
		else
		{
			printf("guessed right\n");
			break;
		}
	}
}
int main()
{
	menu();
	srand((unsigned int)time(NULL));  
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
				printf("please re-enter£º");
			    break;
		}
	} while (input);
		return 0;
}

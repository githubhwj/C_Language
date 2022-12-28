# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fund(int arr[], int x, int y)
{
	int left = 0;
	int right = x - 1;
	while (left <= right)
	{
		int middle = (left + right) / 2;
		if (y > middle)
			left = middle + 1;
		else if (y < middle)
			right = middle - 1;
		else if (y == middle)
		{
			printf("Got it%d", y);
			break;
		}
	}
	if(left > right)
	printf("Not found");
}
int main()
{
	int target;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("Please enter the number you want to find:");
	scanf("%d", &target);
	fund(arr, len, target);
}
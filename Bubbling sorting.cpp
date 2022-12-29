# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i, j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}
int main()
{
	int x;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (x = 0; x < 10; x++)
	{
		printf("%d ", arr[x]);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Search(int* arr, int sz, int n)
{
	int left = 0;
	int right = sz - 1;
	int mid = (left+right) / 2;
	while (left < right)
	{
		if (arr[mid] == n)
		{
			return 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
	}
	return 0;
}
int main()
{
	int arr[11] = { 1,2,3,4,6,7,8,10,34,67,89 };
	int num = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &num);
	int ret = Search(arr,sz,num);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else if (ret == 0)
	{
		printf("找不到\n");
	}
	return 0;
}
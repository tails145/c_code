#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int move_left(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 == len2)
//	{
//		strncat(arr1, arr1, len1);
//		char* ret = strstr(arr1, arr2);
//		if (ret == NULL)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bcdef";
//	int ret = move_left(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else if (ret == 0)
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

int find(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while((x < row) && (y >= 0))
	{
		if (arr[x][y] == k)
		{
			return 1;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			y--;
		}
	}
		return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 10;
	int ret = find(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("能找到\n");
	}
	if (ret == 0)
	{
		printf("找不到\n");
	}
	return 0;
}
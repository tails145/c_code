#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int x = money;//钱能买多少瓶汽水
//	int y = x;//喝完空瓶的数量
//	int i = 0;
//	for (i = 0;y >= 2;)
//	{
//		y = y - 2;
//		x++;
//		y++;
//	}
//	printf("%d\n", x);
//	return 0;
//}

//int print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void move(int* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (right-left>=1)
//	{
//		if (arr[left] % 2 == 1)
//			left++;
//		if ((arr[right] % 2 == 0)&&right>left)
//			right--;
//		if ((arr[left] % 2 == 0) && (arr[right] % 2 == 1))
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,12,13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//
//	return 0;
//}
//void print(int arr[][10],int row,int col)
//{
//	int i = 0;
//	for (i = 0;i < row;i++)
//	{
//		int j = 0;
//		for (j = 0;j < i+1;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i][0] = 1;
//		int j = 0;
//		for (j = 1;j < i+1;j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	print(arr,10,10);
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a';killer <= 'd';killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}

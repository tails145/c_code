#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { {0,1,2 }, {3, 4, 5 } };
//	int i = 0;
//	for (i = 0;i < 2;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 3;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int arr[] = { 5,7,2,1,3,6,9,8,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int j = 0;
	for (j = 0;j < sz - 1;j++)
	{
		for (i = 0;i < sz - j - 1;i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}
	



	for (i = 0;i < sz;i++)
	{
			printf("%d ", arr[i]);
	}
	return 0;
}
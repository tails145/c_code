#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void behind(char* arr)
//{
//	int count = 0;
//	char* p = arr;
//	while(*p)
//	{
//		count++;
//		p++;
//	}
//	//printf("%d\n", count);
//	//int count = strlen(arr);
//	int i = 0;
//	int a = count;
//	for (i = 0;i < count / 2;i++)
//	{
//		int tmp = *(arr + i);
//		*(arr + i) = *(arr + a - 1);
//		*(arr + a - 1) = tmp;
//		a--;
//	}
//}
//int main()
//{
//	char arr[256] = "0";
//	scanf("%s", arr);
//	behind(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	printf("请输入a和n的值: ");
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int a = 0;
	//printf("请输入一个数：");
	//scanf("%d", &a);
	for (a = 1;a <= 100000;a++)
	{
		int x = a;
		int ret = a;
		int count = 1;
		while (x >= 10)
		{
			x = x / 10;
			count++;
		}
		int i = 0;
		int sum = 0;
		for (i = 0;i < count;i++)
		{
			int y = ret % 10;
			int j = 0;
			int Y = y;
			for (j = 1;j < count;j++)
			{
				y = y * Y;
			}
			sum = sum + y;
			ret = ret / 10;
		}
		if (sum == a)
		{
			printf("%d\n",a);
		}
	}

	return 0;
}
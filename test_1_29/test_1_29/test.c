#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//void reverse(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz / 2 - 1;i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &m, &n);
//	int x = m ^ n;
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//void chengfa(int x)
//{
//	int i = 0;
//	for (i = 1;i <= x;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	chengfa(a);
//	return 0;
//}


//void print(int x)
//{
//	if (x > 9)
//		print(x/10);
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int jc(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//	{
//		int m = x * jc(x - 1);
//		return m;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a= jc(n);
//	printf("%d\n", a);
//	return 0;
//}


//int Fei(int n)
//{
//	if (n == 1)
//		return 0;
//	else if (n == 2)
//		return 1;
//	else
//		return Fei(n - 1) + Fei(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = Fei(n);
//	printf("%d\n", m);
//	return 0;
//}

//int Fei(int n)
//{
//		if (n == 1)
//		return 0;
//	else if (n == 2||n == 3)
//		return 1;
//	else
//		{
//			int i = 0;
//			int f1 = 1;
//			int f2 = 1;
//			int f3 = 1;
//			for (i = 0;i < n - 3;i++)
//			{
//				f3 = f1 + f2;
//				f1 = f2;
//				f2 = f3;
//			}
//			return f3;
//		}
//}
//	int main()
//	{
//		int n = 0;
//		scanf("%d", &n);
//		int m = Fei(n);
//		printf("%d\n", m);
//		return 0;
//	}

//int my_strlen(char* str)
//{
//	if (*str == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int count = my_strlen(arr);
//	printf("%d\n", count);
//	return 0;
//}


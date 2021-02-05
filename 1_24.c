#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int jiecheng(int x)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= x;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", jiecheng(a));
//	return 0;
//}

//int facl(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * facl(n - 1);
//}

//int feibonaqi(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return feibonaqi(n - 1) + feibonaqi(n - 2);
//}
//int move(int n, int a, int b, int c)
//{
//	int count = 0;
//	
//		if (n == 1)
//		{
//			
//			count++;
//		}
//		else
//		{
//
//			move(n - 1, a, c, b);
//	
//
//			count++;
//			
//
//			move(n - 1, b, a, c);
//		}
//		
//		return count;
//}
//
//int main()
//{
//	int x = 1;
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	scanf("%d", &x);
//		int ret=move(x, a, b, c);
//		printf("%d\n", ret);
//	return 0;
//}

//void maopao(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz-1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//void test(char* str)
//{
//	printf("%s\n", str);
//}
int main()
{
	char* str = "abcd";
	//test(str);
	printf("%s\n", str);

	return 0;
}


























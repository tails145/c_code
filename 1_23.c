#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//void Swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;            
//	*y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a,&b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int sushu(int x)
//{
//	int i = 0;
//	for (i = 2;i <= sqrt(x);i++)
//	{
//		if (x % i == 0)
//			return 0;
//		else
//			return 1;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int m = sushu(a);
//	if (m == 0)
//		printf("不是素数\n");
//	else
//		printf("是素数\n");
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,7,8,9,13 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//    print(num);
//	return 0;
//}

int my_strlen(char* p)
{
	if (*p != '\0')
	{
		return 1+my_strlen(p + 1);
		
	}
	else
	return 0;
}

int main()
{
	char arr[] = { "bit" };
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;

}





















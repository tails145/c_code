#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//×óÐý×Ö·û´®
//void move_left(char* arr, int n)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i < n;i++)
//	{
//		char first = *arr;
//		int j = 0;
//		for (j = 0;j < len - 1;j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr+len-1) = first;
//	}
//}
void reverse(char* left, char* right)
{
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void move_left(char* arr, int n)
{
	int len = strlen(arr);
	reverse(arr, (arr + n-1));
	reverse((arr + n), (arr + len-1));
	reverse((arr),(arr+len-1));
}
int judge(char* arr1, char* arr2)
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0;i < len;i++)
	{
		move_left(arr1, 1);
		int j = 0;
		for (j = 0;j < len;j++)
		{
			if (*(arr1 + j) != *(arr2 + j))
			{
				continue;
			}
			while (j == (len-1))
			{
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = judge(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}
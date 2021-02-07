#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1;j <= i;j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0;i <= 12;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//void my_strcpy(char* dest1, char* dest2)
//{
//	while (*dest2 != '\0')
//	{
//		*dest1 = *dest2;
//		dest2++;
//		dest1++;
//	}
//	*dest1 = *dest2;
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strlen(char* str)
//{/*
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcejgcsdvhd";
//	int a = my_strlen(arr);
//	printf("%d\n", a);
//	return 0;
//}

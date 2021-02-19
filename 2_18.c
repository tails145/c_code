#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

////malloc
//int main()
//{
//	int n = 10;
//	int* p = (int*)malloc(n * sizeof(int));
//	if (p == NULL)
//	{
//		//打印没有成功开辟空间的原因
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////calloc 初始化为0
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	int n = 5;
	int* p = (int*)malloc(n * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0;i < n;i++)
		{
			*(p + i) = i;
		}
	}
	//realloc--调整开辟的内存
	int* ptr = realloc(p, 40);
	if (ptr != NULL)
	{
		p = ptr;
		int j = 0;
		for (j = 5;j < 10;j++)
		{
			*(p + j) = j;
		}
		for (j = 0;j < 10;j++)
		{
			printf("%d ", *(p + j));
		}
	}
	free(p);
	p = NULL;
	return 0;
}
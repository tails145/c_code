#define _CRT_SECURE_NO_WARNINGS 1

#include "sqstring.h"
#include <string.h>
#include <errno.h>

void BuildString(SString* S, char* x)
{
	if (S == NULL)
	{
		printf("找不到传入的串\n");
		exit(1);
	}
	int length = 0;
	while (x[length] != '\0')
	{
		length++;
	}
	S->ch = (char*)malloc((length + 1) * sizeof(char));
	if (S->ch == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	S->length = length;
	int i = 0;
	while (x[i] != '\0')
	{
		S->ch[i + 1] = x[i];
		i++;
	}
	printf("串创建成功\n");
}

void Display(SString* S)
{
	if (S == NULL)
	{
		printf("找不到传入的串\n");
		exit(1);
	}
	int i = 1;
	int length = S->length;
	while (length != 0)
	{
		printf("%c", S->ch[i]);
		i++;
		length--;
	}
	printf("\n打印完成\n");
}

int GetLength(SString* S)
{
	if (S == NULL)
	{
		printf("找不到传入的串\n");
		exit(1);
	}
	return S->length;
}

void Insert(SString* S, int num, SString* S1, SString* S2)
{
	if (S == NULL || S1 == NULL)
	{
		printf("找不到传入的串\n");
		exit(1);
	}
	if (num < 1 || num > S->length)
	{
		printf("输入位置不合法\n");
		return;
	}
	S2->ch = (char*)malloc((S->length + S1->length + 1) * sizeof(char));
	if (S2->ch == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	S2->length = S->length + S1->length;
	int i = 1;
	while (i != num)
	{
		S2->ch[i] = S->ch[i];
		i++;
	}
	int i1 = 1;
	int i2 = i;
	while (i1 != S1->length + 1)
	{
		S2->ch[i2] = S1->ch[i1];
		i2++;
		i1++;
	}
	while (i != S->length + 1)
	{
		S2->ch[i2] = S->ch[i];
		i2++;
		i++;
	}
	printf("插入完成\n");
}

void Delete(SString* S, int start, int num, SString* S1)
{
	if (S == NULL || S1 == NULL)
	{
		printf("找不到传入的串\n");
		exit(1);
	}
	if (start < 1 || start > S->length || num > S->length)
	{
		printf("输入位置不合法\n");
		return;
	}
	S1->ch = (char*)malloc((S->length - num + 1) * sizeof(char));
	if (S1->ch == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	S1->length = S->length - num;
	int i = 1;
	while (i != start)
	{
		S1->ch[i] = S->ch[i];
		i++;
	}
	int j = i + num;
	while (j != S->length + 1)
	{
		S1->ch[i] = S->ch[j];
		i++;
		j++;
	}
}

void Change(SString* S, int start, int num, SString* S1, SString* S2)
{
	if (S == NULL || S1 == NULL || S2 == NULL)
	{
		printf("找不到传入的串\n");
		exit(1);
	}
	if (start < 1 || start > S->length || num > S->length)
	{
		printf("输入位置不合法\n");
		return;
	}
	S2->ch = (char*)malloc((S->length - num + S1->length + 1) * sizeof(char));
	if (S2->ch == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	S2->length = S->length - num + S1->length;
	int i2 = 1;
	while (i2 != start)
	{
		S2->ch[i2] = S->ch[i2];
		i2++;
	}
	int i1 = 1;
	int i = i2 + num;
	while (i1 != S1->length + 1)
	{
		S2->ch[i2] = S1->ch[i1];
		i1++;
		i2++;
	}
	while (i != S->length + 1)
	{
		S2->ch[i2] = S->ch[i];
		i2++;
		i++;
	}
}

void Get(SString* S, int start, int num, SString* S1)
{
	if (S == NULL || S1 == NULL)
	{
		printf("找不到传入的串\n");
		exit(1);
	}
	if (start < 1 || start > S->length || num > S->length)
	{
		printf("输入位置不合法\n");
		return;
	}
	S1->ch = (char*)malloc((num + 1) * sizeof(char));
	if (S1->ch == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	S1->length = num;
	int i1 = 1;
	int i = start;
	while (i != num + start)
	{
		S1->ch[i1] = S->ch[i];
		i1++;
		i++;
	}
}

void Connect(SString* S, SString* S1, SString* S2)
{
	if (S == NULL || S1 == NULL || S2 == NULL)
	{
		printf("找不到传入的串\n");
		exit(1);
	}
	S2->ch = (char*)malloc((S->length + S1->length + 1) * sizeof(char));
	if (S2->ch == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	S2->length = S->length + S1->length;
	int i2 = 1;
	while (i2 != S->length + 1)
	{
		S2->ch[i2] = S->ch[i2];
		i2++;
	}
	int i1 = 1;
	while (i1 != S1->length + 1)
	{
		S2->ch[i2] = S1->ch[i1];
		i2++;
		i1++;
	}
}
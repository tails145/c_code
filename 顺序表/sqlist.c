#define _CRT_SECURE_NO_WARNINGS 1
#include "sqlist.h"

void InitList(SqList* L)
{
	L->elem = (char*)malloc(MAX * sizeof(char));
	L->length = 0;
}

void BehindAdd(SqList* L, char x)
{
	if (L->length == MAX)
	{
		printf("顺序表已满\n");
		return;
	}
	L->elem[L->length] = x;
	L->length++;
	printf("插入完成\n");
}

void FirstAdd(SqList* L, char x)
{
	if (L->length == MAX)
	{
		printf("顺序表已满\n");
		return;
	}
	int i = L->length;
	if (L->length == 0)
	{
		L->elem[0] = x;
		L->length++;
		return;
	}
	for (i = L->length;i != 0;i--)
	{
		L->elem[i] = L->elem[i - 1];
	}
	L->elem[0] = x;
	L->length++;
	printf("插入完成\n");
}

void ClearList(SqList* L)
{
	int i = 0;
	for (i = 0;i < L->length;i++)
	{
		L->elem[i] = 0;
	}
	L->length = 0;
}

void PrintList(SqList* L)
{
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		printf("%c ", L->elem[i]);
	}
	printf("打印完成\n");
}

char FindData(SqList* L, int num)
{
	return L->elem[num - 1];
}

void DeleteList(SqList* L, int num)
{
	int i = 0;
	for (i = num - 1; i < L->length;i++)
	{
		L->elem[i] = L->elem[i + 1];
	}
	L->length--;
	printf("删除完成\n");
}

void DestoryList(SqList* L)
{
	free(L->elem);
	L->elem = NULL;
	printf("销毁完成\n");
}
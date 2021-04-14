#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 100
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum choose
{
	EXIT,
	BUILD,
	BEHIND,
	FIRST,
	CLEAR,
	FIND,
	DELETE,
	PRINT,
	LENGTH,
	BREAK
};

typedef struct SqList
{
	char* elem;
	int length;
}SqList;

//初始化
void InitList(SqList* L);
//尾插
void BehindAdd(SqList* L, char x);
//前插
void FirstAdd(SqList* L, char x);
//置空
void ClearList(SqList* L);
//打印
void PrintList(SqList* L);
//查找元素
char FindData(SqList* L, int num);
//删除元素
void DeleteList(SqList* L, int num);
//销毁
void DestoryList(SqList* L);
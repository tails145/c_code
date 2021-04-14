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

//��ʼ��
void InitList(SqList* L);
//β��
void BehindAdd(SqList* L, char x);
//ǰ��
void FirstAdd(SqList* L, char x);
//�ÿ�
void ClearList(SqList* L);
//��ӡ
void PrintList(SqList* L);
//����Ԫ��
char FindData(SqList* L, int num);
//ɾ��Ԫ��
void DeleteList(SqList* L, int num);
//����
void DestoryList(SqList* L);
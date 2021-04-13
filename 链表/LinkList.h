#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//ö�ٳ�������ѡ��
enum CHOOSE
{
	EXIT,
	BUILD,
	BEFORE,
	LENGTH,
	GETNUM,
	FIND,
	DELETE,
	BREAK,
	CLEAR,
	PRINT,
	BEHIND,
	INVERSE,
	SOUT
};

//����ṹ������
typedef struct LinkList
{
	int data;
	struct LinkList* next;
}LinkList;

//��ʼ������
LinkList* InitList(LinkList* L);
//��������
void AddList(int data, LinkList* L);
//���㳤��
int Length(LinkList* L);
//����
void FindData(LinkList* L, int data);
//ȡֵ
int GetNum(LinkList* L, int num);
//��������
LinkList* BreakList(LinkList* L);
//ɾ��
void DeleteList(LinkList* L, int n);
//�ÿ�����
void ClearList(LinkList* L);
//��ӡ����
void PrintList(LinkList* L);
//���
void BehindAdd(LinkList* L, int data);
//����
void InverseList(LinkList* L);
//����λ��
void Swap(LinkList* L, int x, int y);
//����
void SortList(LinkList* L);
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//ö�ٳ�������ѡ��
enum CHOOSE
{
	EXIT,
	BUILD,
	CHAR,
	LENGTH,
	GETNUM,
	FIND,
	DELETE,
	BREAK,
	NONE
};

//����ṹ������
typedef struct LinkList
{
	int age;
	struct LinkList* next;
}LinkList;

//��ʼ������
LinkList* InitList(LinkList* L);
//��������
LinkList* CharList(int get, LinkList* L);
//���㳤��
int Length(LinkList* L);
//����
void FindAge(LinkList* L, int age);
//ȡֵ
int GetNum(LinkList* L, int num);
//��������
LinkList* BreakList(LinkList* L);
//ɾ��
void DeleteList(LinkList* L, int n);
//�ÿ�����
void NoneList(LinkList* L);


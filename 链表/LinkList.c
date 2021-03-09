#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkList.h"

LinkList* InitList(LinkList* L)
{
	//����ͷ���
	L = (LinkList*)malloc(sizeof(LinkList));
	L->next = NULL;
	L->age = 0;
	return L;
}
LinkList* CharList(int get, LinkList* L)
{
	LinkList* p = (LinkList*)malloc(sizeof(LinkList));
	if (p != NULL)
	{
		p->age = get;
		p->next = L->next;
		L->next = p;
		return L;
		printf("�������\n");
	}
}

int Length(LinkList* L)
{
	int length = 0;
	LinkList* p = L;
	while (p != NULL)
	{
		length++;
		p = p->next;
	}
	return length - 1;
}

void FindAge(LinkList* L, int age)
{
	int num = 0;
	int n = 0;
	LinkList* p = L;
	while (p != NULL)
	{
		if (p->age == age)
		{
			printf("�ڵ�%d��λ��\n", num);
			n++;
		}
		p = p->next;
		num++;
	}
	if (n == 0)
	{
		printf("û���ҵ�\n");
	}
}

int GetNum(LinkList* L, int num)
{
	LinkList* p = L;
	int i = 0;
	for (i = 0;i < num;i++)
	{
		p = p->next;
	}
	return p->age;
}

void DeleteList(LinkList* L, int n)
{
	LinkList* p = L;
	LinkList* p1 = L;
	int i = 0;
	for (i = 0;i < n - 1;i++)
	{
		p = p->next;
	}
	p1 = p->next;
	p->next = p->next->next;
	free(p1);
	p1 = NULL;
	printf("ɾ�����\n");
}

LinkList* BreakList(LinkList* L)
{
	LinkList* p = L;
	while (L != NULL)
	{
		p = L;
		L = L->next;
		free(p);
		p = NULL;
	}
	printf("���ٳɹ�\n");
	return L;
}

void NoneList(LinkList* L)
{
	LinkList* p = L->next;
	LinkList* p1 = p;
	while (p != NULL)
	{
		p1 = p;
		p = p->next;
		free(p1);
		p1 = NULL;
	}
	L->next = NULL;
}


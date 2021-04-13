#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkList.h"
#include <string.h>
#include <errno.h>

LinkList* InitList(LinkList* L)
{
	//����ͷ���
	L = (LinkList*)malloc(sizeof(LinkList));
	if (L == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		return;
	}
	L->next = NULL;
	L->data = 0;
	return L;
}

void AddList(int data, LinkList* L)
{
	LinkList* p = (LinkList*)malloc(sizeof(LinkList));
	if (p == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		return;
	}
	p->data = data;
	p->next = L->next;
	L->next = p;
	printf("�������\n");
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

void FindData(LinkList* L, int data)
{
	int num = 0;
	int n = 0;
	LinkList* p = L;
	while (p != NULL)
	{
		if (p->data == data)
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
	return p->data;
}

void DeleteList(LinkList* L, int n)
{
	if (n <= 0 || n > Length(L))
	{
		printf("�����ɾ��λ�ò��Ϸ�\n");
		return;
	}
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

void ClearList(LinkList* L)
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

void PrintList(LinkList* L)
{
	LinkList* p = L->next;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}


void BehindAdd(int data, LinkList* L)
{
	LinkList* p = (LinkList*)malloc(sizeof(LinkList));
	if (p == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		return;
	}
	p->data = data;
	p->next = NULL;
	LinkList* tmp = L;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = p;
}

void InverseList(LinkList* L)
{
	if (Length(L) == 0 || Length(L) == 1)
	{
		return L;
	}
	LinkList* p1 = L->next;
	LinkList* p2 = p1->next;
	p1->next = NULL;
	LinkList* pNext = NULL;
	while (p2 != NULL)
	{
		LinkList* pNext = p2->next;
		if (pNext == NULL)
		{
			L->next = p2;
		}
		p2->next = p1;
		p1 = p2;
		p2 = pNext;
	}
	printf("����������\n");
}

void Swap(LinkList* L, int x, int y)
{
	if (L == NULL)
	{
		printf("����δ����\n");
		return;
	}
	if (x <= 0 || x > Length(L) || y <= 0 || y > Length(L))
	{
		printf("����λ�ò��Ϸ�\n");
		return;
	}
	LinkList* px1 = L;
	LinkList* px2 = L->next;
	LinkList* py1 = L;
	LinkList* py2 = L->next;
	int i = 0;
	//px2�ߵ����x��
	for (i = 0;i < x - 1;i++)
	{
		px1 = px1->next;
		px2 = px2->next;
	}
	//py2�ߵ����y��
	for (i = 0;i < y - 1;i++)
	{
		py1 = py1->next;
		py2 = py2->next;
	}
	px1->next = py2;
	py1->next = px2;
	//��ԭ��px2�ĺ�һλ��ַ��ֵ��tmp
	LinkList* tmp = px2->next;
	px2->next = py2->next;
	py2->next = tmp;
}


void SortList(LinkList* L)
{
	if (Length(L) == 0 || Length(L) == 1)
	{
		printf("�������\n");
		return;
	}
	LinkList* p0 = L;
	LinkList* p1 = L->next;
	LinkList* p2 = p1->next;
	int n = Length(L);
	//ð������
	while (n - 1)
	{
		while (p2 != NULL)
		{
			if (p1->data > p2->data)
			{
				//����p1 p2�Ľ��
				p0->next = p2;
				p1->next = p2->next;
				p2->next = p1;
				LinkList* tmp = p1;
				p1 = p2;
				p2 = tmp;
			}
			p0 = p0->next;
			p1 = p1->next;
			p2 = p2->next;
		}
		p0 = L;
		p1 = L->next;
		p2 = p1->next;
		n--;
	}
	printf("�������\n");
}


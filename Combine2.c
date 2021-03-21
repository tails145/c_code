#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct LinkList
{
	int elem;
	struct LinkList* next;
}LinkList;

//头插法
void CharList(int get, LinkList* L)
{
	LinkList* p = (LinkList*)malloc(sizeof(LinkList));
	if (p != NULL)
	{
		p->elem = get;
		p->next = L->next;
		L->next = p;
	}
	else
	{
		printf("%s\n", strerror(errno));
		return;
	}
}

//打印
void PrintLinkList(LinkList* L)
{
	LinkList* p = L;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d ", p->elem);
	}
}

//合并
void Combine(LinkList* La, LinkList* Lb, LinkList* Lc)
{
	LinkList* pa = La->next;
	LinkList* pb = Lb->next;
	while ((pa != NULL) && (pb != NULL))
	{
		if ((pa->elem) <= (pb->elem))
		{
			La->next = pa->next;
			pa->next = Lc->next;
			Lc->next = pa;
			pa = La->next;
		}
		else
		{
			Lb->next = pb->next;
			pb->next = Lc->next;
			Lc->next = pb;
			pb = Lb->next;
		}
	}
	if (pa == NULL)
	{
		while (pb != NULL)
		{
			Lb->next = pb->next;
			pb->next = Lc->next;
			Lc->next = pb;
			pb = Lb->next;
		}
	}
	else
	{
		while (pa != NULL)
		{
			La->next = pa->next;
			pa->next = Lc->next;
			Lc->next = pa;
			pa = La->next;
		}
	}
}

int main()
{
	//赋值La 1 3 5 6 8
	LinkList* p1 = (LinkList*)malloc(sizeof(LinkList));
	if (p1 != NULL)
	{
		LinkList* La = p1;
		La->next = NULL;
		CharList(8, La);
		CharList(6, La);
		CharList(5, La);
		CharList(3, La);
		CharList(1, La);
		printf("Pa元素有");
		PrintLinkList(La);
		printf("\n");
		//赋值Lb 3 4 7 9 9
		LinkList* p2 = (LinkList*)malloc(sizeof(LinkList));
		if (p2 != NULL)
		{
			LinkList* Lb = p2;
			Lb->next = NULL;
			CharList(9, Lb);
			CharList(9, Lb);
			CharList(7, Lb);
			CharList(4, Lb);
			CharList(3, Lb);
			printf("Pb元素有");
			PrintLinkList(Lb);
			printf("\n");
			//初始化Lc
			LinkList* p3 = (LinkList*)malloc(sizeof(LinkList));
			if (p3 != NULL)
			{
				LinkList* Lc = p3;
				Lc->next = NULL;
				//合并
				Combine(La, Lb, Lc);
				//打印Lc
				printf("合并后的元素排列为：");
				PrintLinkList(Lc);
			}
			else
			{
				printf("%s\n", strerror(errno));
			}
		}
		else
		{
			printf("%s\n", strerror(errno));
		}
	}
	else
	{
		printf("%s\n", strerror(errno));
	}
	return 0;
}
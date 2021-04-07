#define _CRT_SECURE_NO_WARNINGS 1

#include "Listack.h"

void InitStack(LinkStack* S)
{
	if (S == NULL)
	{
		printf("ջ������\n");
		return;
	}
	S->top = NULL;
	S->length = 0;
	printf("��ʼ�����\n");
}

int IfNone(LinkStack* S)
{
	if (S == NULL)
	{
		printf("ջ������\n");
		return;
	}
	if (S->top == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Push(LinkStack* S, char x)
{
	if (S == NULL)
	{
		printf("ջ������\n");
		return;
	}
	StackNode* p = (StackNode*)malloc(sizeof(StackNode));
	if (p == NULL)
	{
		printf("Error:%s", strerror(errno));
		return;
	}
	p->data = x;
	p->next = S->top;
	S->top = p;
	S->length++;
	printf("%c�������\n", x);
}

char GetTop(LinkStack* S)
{
	if (S == NULL)
	{
		printf("ջ������\n");
		return;
	}
	if (IfNone(S) == 1)
	{
		printf("ջΪ��\n");
		return;
	}
	return S->top->data;
}

int GetLength(LinkStack* S)
{
	if (S == NULL)
	{
		printf("ջ������\n");
		return;
	}
	return S->length;
}

void Delete(LinkStack* S)
{	
	if (S == NULL)
	{
		printf("ջ������\n");
		return;
	}
	StackNode* p = S->top;
	if (S->length == 0)
	{
		printf("ջ��Ϊ��\n");
		return;
	}
	printf("%c�ѳ�ջ\n", p->data);
	S->top = p->next;
	S->length--;
	free(p);
	p = NULL;
}

void Break(LinkStack* S)
{
	if (S == NULL)
	{
		printf("ջ������,��������\n");
		return;
	}
	StackNode* p = S->top;
	while (S->top != NULL)
	{
		S->top = p->next;
		free(p);
		p = S->top;
	}
	S->length = 0;
	printf("�������\n");
}
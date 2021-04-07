#define _CRT_SECURE_NO_WARNINGS 1

#include "Listack.h"

void InitStack(LinkStack* S)
{
	if (S == NULL)
	{
		printf("栈不存在\n");
		return;
	}
	S->top = NULL;
	S->length = 0;
	printf("初始化完成\n");
}

int IfNone(LinkStack* S)
{
	if (S == NULL)
	{
		printf("栈不存在\n");
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
		printf("栈不存在\n");
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
	printf("%c插入完成\n", x);
}

char GetTop(LinkStack* S)
{
	if (S == NULL)
	{
		printf("栈不存在\n");
		return;
	}
	if (IfNone(S) == 1)
	{
		printf("栈为空\n");
		return;
	}
	return S->top->data;
}

int GetLength(LinkStack* S)
{
	if (S == NULL)
	{
		printf("栈不存在\n");
		return;
	}
	return S->length;
}

void Delete(LinkStack* S)
{	
	if (S == NULL)
	{
		printf("栈不存在\n");
		return;
	}
	StackNode* p = S->top;
	if (S->length == 0)
	{
		printf("栈已为空\n");
		return;
	}
	printf("%c已出栈\n", p->data);
	S->top = p->next;
	S->length--;
	free(p);
	p = NULL;
}

void Break(LinkStack* S)
{
	if (S == NULL)
	{
		printf("栈不存在,无需销毁\n");
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
	printf("销毁完成\n");
}
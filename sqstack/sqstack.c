#define _CRT_SECURE_NO_WARNINGS 1

#include "sqstack.h"

void InitSqStack(SqStack* S)
{
	S->base = (SqStack*)malloc(MAXSIZE * sizeof(char));
	if (S->base == NULL)
	{
		printf("Error:%s\n",strerror(errno));
		return;
	}
	S->top = S->base;
	S->stacksize = MAXSIZE;
	printf("��ʼ�����\n");
}

int IfNone(SqStack* S)
{
	if (S == NULL || S->base == NULL)
	{
		printf("ջ������\n");
		return;
	}
	if (S->top == S->base)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Push(SqStack* S, char x)
{
	if (S == NULL || S->base == NULL)
	{
		printf("ջ������\n");
		return;
	}
	if (S->top - S->base == S->stacksize)
	{
		printf("ջ����\n");
		return;
	}
	*S->top = x;
	S->top++;
	printf("%c�������\n",x);
}

char GetTop(SqStack* S)
{
	if (S == NULL || S->base == NULL)
	{
		printf("ջ������\n");
		return;
	}
	if (S->top == S->base)
	{
		printf("ջΪ��\n");
		return;
	}
	S->top--;
	char get = *S->top;
	S->top++;
	return get;
}

int GetLength(SqStack* S)
{
	if (S == NULL || S->base == NULL)
	{
		printf("ջ������\n");
		return;
	}
	return S->top - S->base;
}

void Delete(SqStack* S)
{
	if (S == NULL || S->base == NULL)
	{
		printf("ջ������\n");
		return;
	}
	if (S->top == S->base)
	{
		printf("ջΪ��\n");
		return;
	}
	S->top--;
	printf("%c�ѳ�ջ\n", *S->top);
}

void Break(SqStack* S)
{
	S->top = NULL;
	free(S->base);
	S->base = NULL;
	printf("�������\n");
}
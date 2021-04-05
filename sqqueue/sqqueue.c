#define _CRT_SECURE_NO_WARNINGS 1

#include "sqqueue.h"

void InitQueue(SqQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	Q->base = (char*)malloc((MAXSIZE + 1) * sizeof(char));
	if (Q->base == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		return;
	}
	Q->front = 0;
	Q->rear = 0;
	printf("初始化完成\n");
}

int IfNone(SqQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	if (Q->front == Q->rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Push(SqQueue* Q, char x)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	if ((Q->rear + 1) % MAXSIZE == Q->front)
	{
		printf("队已满\n");
		return;
	}
	Q->base[Q->rear] = x;
	Q->rear = (Q->rear + 1) % MAXSIZE;
	printf("%c已入队\n", x);
}

char GetOne(SqQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	if (IfNone(Q) == 1)
	{
		printf("队列为空\n");
		return;
	}
	char get = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;
	return get;
}

int GetLength(SqQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	return (Q->rear - Q->front) % MAXSIZE;
}

void Destory(SqQueue* Q)
{
	free(Q->base);
	Q->base = NULL;
	Q->front = 0;
	Q->rear = 0;
	printf("销毁成功\n");
}
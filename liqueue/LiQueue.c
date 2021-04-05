#define _CRT_SECURE_NO_WARNINGS 1

#include "LiQueue.h"

void InitQueue(LiQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	Q->front = Q->rear = (QNode*)malloc(sizeof(QNode));
	Q->front->next = NULL;
	printf("初始化完成\n");
}

int IfNone(LiQueue* Q)
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

void Push(LiQueue* Q, char x)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	Q->rear->next = (QNode*)malloc(sizeof(QNode));
	Q->rear->next->data = x;
	Q->rear->next->next = NULL;
	Q->rear = Q->rear->next;
	printf("%c插入完成\n", x);
}

char GetOne(LiQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	if (Q->front == Q->rear)
	{
		printf("队列为空\n");
		return;
	}
	QNode* p = Q->front->next;
	char get = p->data;
	Q->front->next = p->next;
	if (p == Q->rear)
	{
		Q->rear = Q->front;
	}
	free(p);
	p = NULL;
	return get;
}

int GetLength(LiQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	QNode* p = Q->front;
	int length = 0;
	while (p != Q->rear)
	{
		length++;
		p = p->next;
	}
	return length;
}

void Destory(LiQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	QNode* tmp = Q->front->next;
	QNode* p = Q->front->next;
	Q->rear = NULL;
	while (p != NULL)
	{
		free(tmp);
		p = p->next;
		tmp = p;
	}
	free(p);
	free(Q->front);
	tmp = NULL;
	p = NULL;
	Q->front = NULL;
	printf("销毁完成\n");
}
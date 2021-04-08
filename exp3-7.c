#define _CRT_SECURE_NO_WARNINGS 1
#define MAXSIZE 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct SqQueue
{
	int* base;
	int front;
	int rear;
}SqQueue;

void Init(SqQueue* Q)
{
	Q->base = (int*)malloc(MAXSIZE * sizeof(int));
	if (Q->base == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		return;
	}
	Q->front = 0;
	Q->rear = 0;
}

void Push(SqQueue* Q, int x)
{
	if (Q == NULL)
	{
		printf("���в�����\n");
		return;
	}
	if ((Q->rear + 1) % MAXSIZE == Q->front)
	{
		printf("��������\n");
		return;
	}
	Q->base[Q->rear] = x;
	Q->rear = (Q->rear + 1) % MAXSIZE;
}

//���Ӳ����س���Ԫ��
int Get(SqQueue* Q)
{
	if (Q == NULL)
	{
		printf("���в�����\n");
		return;
	}
	if (Q->front == Q->rear)
	{
		printf("����Ϊ��\n");
		return;
	}
	int get = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;
	return get;
}

int Fibonacci(int num)
{
	SqQueue Q;
	Init(&Q);
	if (num == 1)
	{
		return 1;
	}
	if (num == 2)
	{
		return 2;
	}
	Push(&Q, 1);
	Push(&Q, 2);
	int i = 0;
	int ret = 0;
	for (i = 0;i < num - 2;i++)
	{
		ret = Get(&Q) + Q.base[Q.front];
		Push(&Q, ret);
	}
	return ret;
}

int main()
{
	int num = 0;
	printf("������������");
	scanf("%d", &num);
	int ret = Fibonacci(num);
	printf("��%d���µ���������Ϊ%d\n", num, ret);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#define MAXSIZE 21
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct SqQueue
{
	char* base;
	int front;
	int rear;
}SqQueue;

void Init(SqQueue* Q)
{
	Q->base = (char*)malloc(MAXSIZE * sizeof(char));
	if (Q->base == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		return;
	}
	Q->front = 0;
	Q->rear = 0;
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
		printf("队列已满\n");
		return;
	}
	Q->base[Q->rear] = x;
	Q->rear = (Q->rear + 1) % MAXSIZE;
}

//取队头元素
char GetFront(SqQueue* Q)
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
	char get = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;
	return get;
}

//取队尾元素
char GetRear(SqQueue* Q)
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
	Q->rear = (Q->rear - 1) % MAXSIZE;
	char get = Q->base[Q->rear];
	return get;
}

//获取队列长度
int GetLength(SqQueue* Q)
{
	if (Q == NULL)
	{
		printf("队列不存在\n");
		return;
	}
	return (Q->rear - Q->front + MAXSIZE) % MAXSIZE;
}

int Check(char* arr)
{
	SqQueue Q;
	Init(&Q);
	int i = 0;
	//把单词放到循环队列里
	for (i = 0;arr[i] != '\0'; i++)
	{
		Push(&Q, arr[i]);
	}
	//头尾同时取一个元素，看是否相等
	while (GetLength(&Q) > 1)
	{
		if (GetFront(&Q) != GetRear(&Q))
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	printf("请输入单词：");
	char arr[20] = "0";
	scanf("%s", arr);
	int ret = Check(arr);
	if (ret == 0)
	{
		printf("不是回文单词\n");
	}
	if (ret == 1)
	{
		printf("是回文单词\n");
	}

	return 0;
}
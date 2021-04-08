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

//ȡ��ͷԪ��
char GetFront(SqQueue* Q)
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
	char get = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;
	return get;
}

//ȡ��βԪ��
char GetRear(SqQueue* Q)
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
	Q->rear = (Q->rear - 1) % MAXSIZE;
	char get = Q->base[Q->rear];
	return get;
}

//��ȡ���г���
int GetLength(SqQueue* Q)
{
	if (Q == NULL)
	{
		printf("���в�����\n");
		return;
	}
	return (Q->rear - Q->front + MAXSIZE) % MAXSIZE;
}

int Check(char* arr)
{
	SqQueue Q;
	Init(&Q);
	int i = 0;
	//�ѵ��ʷŵ�ѭ��������
	for (i = 0;arr[i] != '\0'; i++)
	{
		Push(&Q, arr[i]);
	}
	//ͷβͬʱȡһ��Ԫ�أ����Ƿ����
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
	printf("�����뵥�ʣ�");
	char arr[20] = "0";
	scanf("%s", arr);
	int ret = Check(arr);
	if (ret == 0)
	{
		printf("���ǻ��ĵ���\n");
	}
	if (ret == 1)
	{
		printf("�ǻ��ĵ���\n");
	}

	return 0;
}
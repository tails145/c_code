#define _CRT_SECURE_NO_WARNINGS 1
#define MAXSIZE 6

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

//��ʼ��
void InitQueue(SqQueue* Q);
//�ж϶����Ƿ�Ϊ��
int IfNone(SqQueue* Q);
//���
void Push(SqQueue* Q, char x);
//����һ��Ԫ�ز����
char GetOne(SqQueue* Q);
//������г���
int GetLength(SqQueue* Q);
//���ٶ���
void Destory(SqQueue* Q);
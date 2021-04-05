#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct QNode
{
	char data;
	struct QNode* next;
}QNode;

typedef struct LiQueue
{
	QNode* front;
	QNode* rear;
}LiQueue;

//��ʼ��
void InitQueue(LiQueue* Q);
//�ж϶����Ƿ�Ϊ��
int IfNone(LiQueue* Q);
//���
void Push(LiQueue* Q, char x);
//����
char GetOne(LiQueue* Q);
//������г���
int GetLength(LiQueue* Q);
//����
void Destory(LiQueue* Q);
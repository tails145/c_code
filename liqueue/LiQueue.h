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

//初始化
void InitQueue(LiQueue* Q);
//判断队列是否为空
int IfNone(LiQueue* Q);
//入队
void Push(LiQueue* Q, char x);
//出队
char GetOne(LiQueue* Q);
//输出队列长度
int GetLength(LiQueue* Q);
//销毁
void Destory(LiQueue* Q);
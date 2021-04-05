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

//初始化
void InitQueue(SqQueue* Q);
//判断队列是否为空
int IfNone(SqQueue* Q);
//入队
void Push(SqQueue* Q, char x);
//出队一个元素并输出
char GetOne(SqQueue* Q);
//输出队列长度
int GetLength(SqQueue* Q);
//销毁队列
void Destory(SqQueue* Q);
#define _CRT_SECURE_NO_WARNINGS 1
#define MAXSIZE 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct SqStack
{
	char* base;
	char* top;
	int stacksize;
}SqStack;

//初始化
void InitSqStack(SqStack* S);
//判断栈是否为空 为空返回1，不为空返回0
int IfNone(SqStack* S);
//入栈
void Push(SqStack* S, char x);
//输出栈顶元素
char GetTop(SqStack* S);
//输出栈的长度
int GetLength(SqStack* S);
//出栈并输出
void Delete(SqStack* S);
//销毁栈
void Break(SqStack* S);

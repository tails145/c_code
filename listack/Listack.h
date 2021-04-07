#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

typedef struct StackNode
{
	char data;
	struct StackNode* next;
}StackNode;

typedef struct LinkStack
{
	StackNode* top;
	int length;
}LinkStack;

//初始化栈
void InitStack(LinkStack* S);
//判断栈是否为空
int IfNone(LinkStack* S);
//入栈
void Push(LinkStack* S, char x);
//输出栈顶元素
char GetTop(LinkStack* S);
//输出栈的长度
int GetLength(LinkStack* S);
//将栈中元素依次出栈并输出
void Delete(LinkStack* S);
//销毁栈
void Break(LinkStack* S);
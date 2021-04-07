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

//��ʼ��ջ
void InitStack(LinkStack* S);
//�ж�ջ�Ƿ�Ϊ��
int IfNone(LinkStack* S);
//��ջ
void Push(LinkStack* S, char x);
//���ջ��Ԫ��
char GetTop(LinkStack* S);
//���ջ�ĳ���
int GetLength(LinkStack* S);
//��ջ��Ԫ�����γ�ջ�����
void Delete(LinkStack* S);
//����ջ
void Break(LinkStack* S);
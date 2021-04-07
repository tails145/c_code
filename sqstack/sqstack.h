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

//��ʼ��
void InitSqStack(SqStack* S);
//�ж�ջ�Ƿ�Ϊ�� Ϊ�շ���1����Ϊ�շ���0
int IfNone(SqStack* S);
//��ջ
void Push(SqStack* S, char x);
//���ջ��Ԫ��
char GetTop(SqStack* S);
//���ջ�ĳ���
int GetLength(SqStack* S);
//��ջ�����
void Delete(SqStack* S);
//����ջ
void Break(SqStack* S);

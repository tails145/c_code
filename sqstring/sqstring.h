#define _CRT_SECURE_NO_WARNINGS 1
#define MAXSIZE 100

#include <stdio.h>
#include <stdlib.h>

typedef struct SString
{
	char* ch;
	int length;
}SString;

//��ʼ��
void BuildString(SString* S, char*);
//��ӡ
void Display(SString* S);
//�������
int GetLength(SString* S);
//���봮����S�ĵ�num��λ�ò���S1����������ŵ�S2�У�
void Insert(SString* S, int num, SString* S1, SString* S2);
//ɾ���ַ�����ɾ��S�д�start��ʼ��num���ַ�����������ŵ�S1�У�
void Delete(SString* S, int start, int num, SString* S1);
//�滻��(S�д�start��ʼ��num���ַ��滻��S1����������ŵ�S2��)
void Change(SString* S, int start, int num, SString* S1, SString* S2);
//��ȡ����S�еڶ����ַ���ʼ��num���ַ���ȡ�����ŵ�S1�У�
void Get(SString* S, int start, int num, SString* S1);
//���ӣ���S��S1���ӣ��ŵ�S2�У�
void Connect(SString* S, SString* S1, SString* S2);

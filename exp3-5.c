#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct Node
{
	char data;
	struct Node* next;
}Node;

typedef struct LiStack
{
	Node* data;
	int length;
}LiStack;

void Push(LiStack* S, char x)
{
	if (S == NULL)
	{
		printf("ջ������\n");
		return;
	}
	Node* p = (LiStack*)malloc(sizeof(Node));
	if (p == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		return;
	}
	p->data = x;
	p->next = S->data;
	S->data = p;
	S->length++;
}

char Get(LiStack* S)
{
	if (S == NULL)
	{
		printf("ջ������\n");
		return;
	}
	Node* p = S->data;
	char get = p->data;
	S->data = p->next;
	free(p);
	p = NULL;
	S->length--;
	return get;
}

//������Ծͷ���1�����򷵻�0
int Match(char* arr)
{
	//��ʼ����ջ
	LiStack S = { NULL };
	int i = 0;
	//��������
	for (i = 0;arr[i] != '\0';i++)
	{
		//�����е�Ԫ��Ϊ�����žͽ�ջ
		if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
		{
			Push(&S,arr[i]);
		}
		//�����е�Ԫ��Ϊ�����žͳ�ջһ������Աȣ����Ƿ����
		else if (arr[i] == ')' || arr[i] == ']' || arr[i] == '}')
		{
			if (arr[i] == ')')
			{
				if (Get(&S) != '(')
				{
					return 0;
				}
			}
			else if (arr[i] == '}')
			{
				if (Get(&S) != '{')
				{
					return 0;
				}
			}
			else if (arr[i] == ']')
			{
				if (Get(&S) != '[')
				{
					return 0;
				}
			}
		}
	}
	//����ջ�ĳ��ȣ���Ϊ0�ͷ���0
	if (S.length != 0)
	{
		return 0;
	}
	return 1;
}

int main()
{
	printf("��������ʽ��");
	char arr[100] = "0";
	scanf("%s", arr);
	int ret = Match(arr);
	if (ret == 0)
	{
		printf("���Ų����\n");
	}
	else
	{
		printf("�������\n");
	}
	
	return 0;
}
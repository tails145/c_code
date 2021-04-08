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
		printf("栈不存在\n");
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
		printf("栈不存在\n");
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

//括号配对就返回1，否则返回0
int Match(char* arr)
{
	//初始化链栈
	LiStack S = { NULL };
	int i = 0;
	//遍历数组
	for (i = 0;arr[i] != '\0';i++)
	{
		//数组中的元素为左括号就进栈
		if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
		{
			Push(&S,arr[i]);
		}
		//数组中的元素为右括号就出栈一个与其对比，看是否配对
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
	//看链栈的长度，不为0就返回0
	if (S.length != 0)
	{
		return 0;
	}
	return 1;
}

int main()
{
	printf("请输入表达式：");
	char arr[100] = "0";
	scanf("%s", arr);
	int ret = Match(arr);
	if (ret == 0)
	{
		printf("括号不配对\n");
	}
	else
	{
		printf("括号配对\n");
	}
	
	return 0;
}
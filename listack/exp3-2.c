#define _CRT_SECURE_NO_WARNINGS 1

#include "Listack.h"

int main()
{
	LinkStack S = { NULL, 0 };
	//初始化栈
	InitStack(&S);
	system("pause");
	//判断栈是否为空
	int ret = IfNone(&S);
	if (ret == 1)
	{
		printf("栈为空\n");
	}
	else
	{
		printf("栈不为空\n");
	}
	system("pause");
	//将元素abcde依次入栈
	Push(&S, 'a');
	Push(&S, 'b');
	Push(&S, 'c');
	Push(&S, 'd');
	Push(&S, 'e');
	system("pause");
	//输出栈顶元素
	char get = GetTop(&S);
	printf("栈顶元素为%c\n", get);
	system("pause");
	//输出栈的长度
	int length = GetLength(&S);
	printf("栈的长度为%d\n", length);
	system("pause");
	//将栈中元素依次出栈并输出
	Delete(&S);
	Delete(&S);
	Delete(&S);
	Delete(&S);
	Delete(&S);
	system("pause");
	//判断栈是否为空
	ret = IfNone(&S);
	if (ret == 1)
	{
		printf("栈为空\n");
	}
	else
	{
		printf("栈不为空\n");
	}
	system("pause");
	//销毁栈
	Break(&S);
	system("pause");

	return 0;
}
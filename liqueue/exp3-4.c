#define _CRT_SECURE_NO_WARNINGS 1

#include "LiQueue.h"

int main()
{
	LiQueue Q;
	//初始化
	InitQueue(&Q);
	system("pause");
	//判断队列是否为空
	int ret = IfNone(&Q);
	if (ret == 1)
	{
		printf("队列为空\n");
	}
	else
	{
		printf("队列不为空\n");
	}
	system("pause");
	//将元素abc依次入队

	Push(&Q, 'a');
	Push(&Q, 'b');
	Push(&Q, 'c');
	system("pause");
	//出队一个元素并输出
	char get = GetOne(&Q);
	printf("%c已出队\n", get);
	system("pause");
	//输出队列长度
	int length = GetLength(&Q);
	printf("队列长度为%d\n", length);
	system("pause");
	//将元素def依次入队
	Push(&Q, 'd');
	Push(&Q, 'e');
	Push(&Q, 'f');
	system("pause");
	//队列中元素依次出队并输出
	get = GetOne(&Q);
	printf("%c已出队\n", get);
	get = GetOne(&Q);
	printf("%c已出队\n", get);
	get = GetOne(&Q);
	printf("%c已出队\n", get);
	get = GetOne(&Q);
	printf("%c已出队\n", get);
	get = GetOne(&Q);
	printf("%c已出队\n", get);
	system("pause");
	//销毁队列
	Destory(&Q);
	system("pause");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;
void move(int n, char a, char b, char c)
{
	if (n == 1)
	{
		//从起点移到终点
		printf("%c->%c\n", a, c);
		count++;
	}
	else
	{
		//将除了最后一层的所有层数移到中间站
		move(n - 1, a, c, b);
		//将最下面一层从起点移到终点
		printf("%c->%c\n", a, c);
		count++;
		//将除了最后一层的所有层数从中间站移到终点
		move(n - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	printf("请输入汉诺塔的层数：");
	scanf("%d", &n);
	//传入层数和起点 中间站 终点
	move(n,'a','b','c');
	printf("移动次数为%d\n", count);
	return 0;
}
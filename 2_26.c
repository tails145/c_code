#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;
void move(int n, char a, char b, char c)
{
	if (n == 1)
	{
		//������Ƶ��յ�
		printf("%c->%c\n", a, c);
		count++;
	}
	else
	{
		//���������һ������в����Ƶ��м�վ
		move(n - 1, a, c, b);
		//��������һ�������Ƶ��յ�
		printf("%c->%c\n", a, c);
		count++;
		//���������һ������в������м�վ�Ƶ��յ�
		move(n - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	printf("�����뺺ŵ���Ĳ�����");
	scanf("%d", &n);
	//������������ �м�վ �յ�
	move(n,'a','b','c');
	printf("�ƶ�����Ϊ%d\n", count);
	return 0;
}
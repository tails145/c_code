#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Jump(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return Jump(n - 1) + Jump(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("������̨�׵Ľ�����");
	scanf("%d", &n);
	int sum = Jump(n);
	printf("һ����%d�ַ���\n", sum);
	return 0;
}
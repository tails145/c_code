#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 1234;
//	printf("0%o 0X%x\n", a,a);
//
//	return 0;
//}

//int main()
//{
//	printf("请输入一个四位整数（1000~9999）：");
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d",  n % 10);
//		n = n / 10;
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ( (ch = getchar()) != EOF)
	{
		ch = ch + 32;
		printf("%c\n", ch);
		getchar();//清理缓冲区'\n'
	}
	return 0;
}
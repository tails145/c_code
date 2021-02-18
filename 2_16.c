#include <stdio.h>

////位段
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////枚举常量
//enum color
//{
//	red,
//	green,
//	blue
//};
////联合体(共用体)
//union Un
//{
//	char j;
//	int i;
//};


//判断机器大小端
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
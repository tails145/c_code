#include <stdio.h>

////λ��
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////ö�ٳ���
//enum color
//{
//	red,
//	green,
//	blue
//};
////������(������)
//union Un
//{
//	char j;
//	int i;
//};


//�жϻ�����С��
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
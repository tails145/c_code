#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	printf("����������������");
//	int m = 0;
//	int n = 0;
//	int p = 0;
//	int mid = 0;
//	int max = 0;
//	int min = 0;
//	scanf("%d %d %d", &m, &n, &p);//������������
//	if (m > n)
//	{
//		max = m;
//		mid = n;
//	}
//	else
//	{
//		max = n;
//		mid = m;
//	}
//	if (max < p)
//	{
//		min = mid;
//		mid = max;
//		max = p;
//		printf("%d %d %d\n",max,mid,min);
//	}
//	else
//	{
//		if (mid > p)
//		{
//			min = p;
//			printf("%d %d %d\n", max, mid, min);
//		}
//		else
//		{
//			min = mid;
//			mid = p;
//			printf("%d %d %d\n", max, mid, min);
//
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int x = 0;
//	scanf("%d%d", &a,& b);
//	for (i = 1;i <= a &&i <= b;i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			x = i;
//	}
//	printf("%d ", x);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//
//	scanf("%d%d", &a, &b);
//	while (a % b)
//	{
//		i = a % b;
//		a = b;
//		b = i;
//	}
//	printf("%d ", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum +=flag* 1.0 / i;
//		flag = -flag;
//
//	}
//	printf("%lf\n",sum);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 1;
//		for (j = 1;j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 2,3,4,5,6,7,8,9 };
//	int k = 10;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		if (arr[(left + right) / 2] < k)
//		{
//			left = (left + right) / 2 + 1;
//		}
//		else if (arr[(left + right) / 2] > k)
//		{
//			right = (left + right) / 2 - 1;
//
//		}
//		else
//		{
//			printf("�±���:%d\n", (left + right) / 2);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	
//	return 0;
//}

void menu()
{
	printf("**************************\n");
	printf("****  1.play   0.exit ****\n");
	printf("**************************\n");
	printf("**************************\n");

}
void game()
{
	printf("������\n");\
		int guess = 0;
	int ret = rand()%100+1;
	printf("��³�һ��1-100������\n");
	
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
			
		}
		else if (guess < ret)
		{
			printf("��С��\n");
			
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");

		}

	} while (1);
	return 0;
}














#define _CRT_SECURE_NO_WARNINGS
#define MAX 200
#include <stdio.h>

//查找一个范围内某个数的立方等于其之前的 连续的数 的立方和
int Cube(int x)
{
	return (x * x * x);
}
void Initarr(int* arr, int max)
{
	int i = 0;
	for (i = 0;i < max;i++)
	{
		arr[i] = i;
	}
}
int Sumcube(int* arr, int start, int num)
{
	int i = 0;
	int sum = 0;
	for (i = 0;i < num;i++)
	{
		sum += Cube(arr[start]);
		start++;
	}
	return sum;
}
int main()
{
	//设定查找数的最大值
	printf("请输入(1~200)：");
	int n = 0;
	scanf("%d", &n);
	int arr[MAX + 1] = { 0 };
	//初始化数组
	Initarr(arr, MAX + 1);
	int k = 0;
	for (k = 3;k <= n;k++)
	{
		int i = 0;
		//从哪个数开始
		for (i = 1;i <= k - 2;i++)
		{
			int j = 0;
			//几个数的立方和
			for (j = 2;j <= (k - i + 1);j++)
			{
				int sum = 0;
				//求和
				sum = Sumcube(arr, i, j);
				//判断是否相等
				if (sum == Cube(k))
				{
					printf("%d~%d的立方和等于%d的立方\n", arr[i], arr[i + j - 1], k);
					//break;
				}
			}
		}
	}
	return 0;
}
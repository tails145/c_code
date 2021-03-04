#define _CRT_SECURE_NO_WARNINGS
#define MAX 200
#include <stdio.h>
#include <math.h>


//求立方
int cube(int a)
{
	return a * a * a;
}
//求和
int sumcube(int* arr, int begin, int num)
{
	int i = 0;
	int sum = 0;
	for (i = 0;i < num;i++)
	{
		sum += cube(arr[begin]);
		//sum += (arr[begin]*arr[begin]*arr[begin]);
		begin++;
	}
	return sum;
}
//判断是否为整数的立方
int judge(int n)
{
	/*double ret = pow(n, 1.0 / 3);
	if ((ret - (int)ret) > 0)
	{
		return 0;
	}
	else
	{
		return (int)ret;
	}*/
	int i = 0;
	for (i = 1;i <= MAX;i++)
	{
		if (n == cube(i))
		{
			return i;
		}
	}
	return 0;
}
int main()
{
	int arr[201] = { 0 };
	printf("请输入查找范围(0~200)：");
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0;i <= n;i++)
	{
		arr[i] = i;
	}
	//从哪个数开始
	for (i = 1;i < n;i++)
	{
		int j = 0;
		//几个数的立方和
		for (j = 2;j <= n - i + 1;j++)
		{
			int sum = 0;
			sum = sumcube(arr, i, j);
			//判断sum是否为整数的立方
			int ret = judge(sum);
			if (ret)
			{   
				//打印满足条件的
				printf("从%d开始，加上后面%d个数，是%d的立方\n", arr[i], j-1, ret);
			}
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#define MAX 200
#include <stdio.h>
#include <math.h>


//������
int cube(int a)
{
	return a * a * a;
}
//���
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
//�ж��Ƿ�Ϊ����������
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
	printf("��������ҷ�Χ(0~200)��");
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0;i <= n;i++)
	{
		arr[i] = i;
	}
	//���ĸ�����ʼ
	for (i = 1;i < n;i++)
	{
		int j = 0;
		//��������������
		for (j = 2;j <= n - i + 1;j++)
		{
			int sum = 0;
			sum = sumcube(arr, i, j);
			//�ж�sum�Ƿ�Ϊ����������
			int ret = judge(sum);
			if (ret)
			{   
				//��ӡ����������
				printf("��%d��ʼ�����Ϻ���%d��������%d������\n", arr[i], j-1, ret);
			}
		}
	}
	return 0;
}
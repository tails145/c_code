#define _CRT_SECURE_NO_WARNINGS
#define MAX 200
#include <stdio.h>

//����һ����Χ��ĳ����������������֮ǰ�� �������� ��������
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
	//�趨�����������ֵ
	printf("������(1~200)��");
	int n = 0;
	scanf("%d", &n);
	int arr[MAX + 1] = { 0 };
	//��ʼ������
	Initarr(arr, MAX + 1);
	int k = 0;
	for (k = 3;k <= n;k++)
	{
		int i = 0;
		//���ĸ�����ʼ
		for (i = 1;i <= k - 2;i++)
		{
			int j = 0;
			//��������������
			for (j = 2;j <= (k - i + 1);j++)
			{
				int sum = 0;
				//���
				sum = Sumcube(arr, i, j);
				//�ж��Ƿ����
				if (sum == Cube(k))
				{
					printf("%d~%d�������͵���%d������\n", arr[i], arr[i + j - 1], k);
					//break;
				}
			}
		}
	}
	return 0;
}
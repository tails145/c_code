#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int ret = 0;
//	char password[20] = {0};
//	int ch = 0;
//printf("����������:>");
//scanf("%s", password);
//while ((ch = getchar()) != '\n')
//{
//	;
//};
//printf("��ȷ������(Y/N):>");
//ret = getchar();
//if (ret == 'Y')
//{
//	printf("ȷ�ϳɹ�\n");
//}
//else
//{
//	printf("ȷ��ʧ��\n");
//}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <=10;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &m);
//	for (n = 1;n <= m;n++)
//	{
//		for (i = 1,ret=1;i <= n;i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("�׳�=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,8,9,14 };
//	int k = 7;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//		while (left > right)
//		{
//			printf("�Ҳ���");
//			break;
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = { "Welcome to bit!!!!"};
//	char arr2[] = { "##################" };
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//		
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("������������˳�����\n");
	return 0;
}























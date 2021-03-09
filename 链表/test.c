#define _CRT_SECURE_NO_WARNINGS 1

#include "LinkList.h"

void menu()
{
	printf("**********����**********\n");
	printf("****1.����    2.����****\n");
	printf("****3.��    4.ȡֵ****\n");
	printf("****5.����    6.ɾ��****\n");
	printf("****7.����    8.�ÿ�****\n");
	printf("*********0.�˳�*********\n");
}

int main()
{
	int choose = 0;
	//ͷָ��
	LinkList* L = NULL;
	do
	{
		int length = 0;
		int age = 0;
		int num = 0;
		int delete = 0;
		menu();
		printf("��ѡ��:");
		scanf("%d", &choose);
		switch (choose)
		{
		case BUILD:
			L = InitList(L);
			printf("�����ɹ�\n");
			break;
		case CHAR:
			if (L == NULL)
			{
				printf("����δ����\n");
			}
			else
			{
				printf("���������䣺");
				int get = 0;
				scanf("%d", &get);
				L = CharList(get, L);
			}
			break;
		case LENGTH:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			length = Length(L);
			printf("����Ϊ%d\n", length);
			break;
		case GETNUM:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			printf("������Ҫ���ҵ���ţ�");
			scanf("%d", &num);
			if (num<1 || num>Length(L))
			{
				printf("��Ҫ���ҵ���Ų�����\n");
				break;
			}
			printf("���������Ӧ��������%d\n", GetNum(L, num));
			break;
		case FIND:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			printf("��������Ҫ���ҵ����䣬�����������ڵ�λ��\n");
			scanf("%d", &age);
			FindAge(L, age);
			break;
		case DELETE:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			printf("��������Ҫɾ��λ�õ���ţ�");
			scanf("%d", &delete);
			DeleteList(L,delete);
			break;
		case BREAK:
			if (L == NULL)
			{
				printf("����δ����,����ɾ��\n");
				break;
			}
			L = BreakList(L);
			break;
		case NONE:
			if (L == NULL)
			{
				printf("����δ����,�����ÿ�\n");
				break;
			}
			NoneList(L);
			printf("�������ÿ�\n");
			break;
		case EXIT:
			L = BreakList(L);
			printf("�˳�����\n");
			break;
		default:
			printf("�������,����������\n");
			break;
		}
	} while (choose);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkList.h"

void menu()
{
	printf("**********����**********\n");
	printf("****1.����    2.ǰ��****\n");
	printf("****3.��    4.ȡֵ****\n");
	printf("****5.����    6.ɾ��****\n");
	printf("****7.����    8.�ÿ�****\n");
	printf("****9.��ӡ    10.���***\n");
	printf("***11.����    12.˳��***\n");
	printf("****     0.�˳�     ****\n");
}

int main()
{
	int choose = 0;
	//ͷָ��
	LinkList* L = NULL;
	do
	{
		int length = 0;
		int data = 0;
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
		case BEFORE:
			if (L == NULL)
			{
				printf("����δ����\n");
			}
			else
			{
				printf("�����룺");
				int get = 0;
				scanf("%d", &get);
				AddList(get, L);
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
			printf("���������Ӧ��Ԫ����%d\n", GetNum(L, num));
			break;
		case FIND:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			printf("��������Ҫ���ҵ�Ԫ�أ������������ڵ�λ��\n");
			scanf("%d", &data);
			FindData(L, data);
			break;
		case DELETE:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			printf("��������Ҫɾ��λ�õ���ţ�");
			scanf("%d", &delete);
			DeleteList(L, delete);
			break;
		case BREAK:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			L = BreakList(L);
			break;
		case CLEAR:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			ClearList(L);
			printf("�������ÿ�\n");
			break;
		case EXIT:
			L = BreakList(L);
			printf("�˳�����\n");
			break;
		case PRINT:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			PrintList(L);
			break;
		case BEHIND:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			printf("�����룺");
			int get = 0;
			scanf("%d", &get);
			BehindAdd(get, L);
			break;
		case INVERSE:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			 InverseList(L);
			break;
		case SOUT:
			if (L == NULL)
			{
				printf("����δ����\n");
				break;
			}
			SortList(L);
			break;
		default:
			printf("�������,����������\n");
			break;
		}
	} while (choose);
	return 0;
}
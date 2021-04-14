#define _CRT_SECURE_NO_WARNINGS 1
#include "sqList.h"

void menu()
{
	printf("*********˳���**********\n");
	printf("****1.����    2.β��****\n");
	printf("****3.ͷ��    4.�ÿ�****\n");
	printf("****5.����    6.ɾ��****\n");
	printf("****7.��ӡ    8.��****\n");
	printf("****9.����    0.�˳�****\n");
}

int main()
{
	int choose = 0;
	//ͷָ��
	SqList L = { NULL,0 };
	do
	{
		int length = 0;
		char data = 0;
		int num = 0;
		int delete = 0;
		char get = 0;
		menu();
		printf("��ѡ��:");
		scanf("%d", &choose);
		switch (choose)
		{
		case BUILD:
			if (L.elem != NULL)
			{
				printf("˳����Ѵ����������ٴδ���\n");
				break;
			}
			InitList(&L);
			printf("�����ɹ�\n");
			break;
		case BEHIND:
			if (L.elem == NULL)
			{
				printf("˳���δ����\n");
				break;
			}
			printf("�������ַ���");
			getchar();
			scanf("%c", &get);
			BehindAdd(&L, get);
			break;
		case FIRST:
			if (L.elem == NULL)
			{
				printf("˳���δ����\n");
				break;
			}
			printf("�������ַ���");
			getchar();
			scanf("%c", &get);
			FirstAdd(&L, get);
			break;
		case FIND:
			if (L.elem == NULL)
			{
				printf("˳���δ����\n");
				break;
			}
			printf("��������Ҫ���ҵ�λ�ã������������ڵ�Ԫ��\n");
			scanf("%d", &num);
			if (num <= 0 || num > L.length)
			{
				printf("����λ�ò��Ϸ�\n");
				break;
			}
			data = FindData(&L, num);
			printf("��%d��λ�õ�Ԫ��Ϊ%c\n", num, data);
			break;
		case DELETE:
			if (L.elem == NULL)
			{
				printf("˳���δ����\n");
				break;
			}
			printf("��������Ҫɾ��λ�õ���ţ�");
			scanf("%d", &delete);
			if (delete <= 0 || delete > L.length)
			{
				printf("����λ�ò��Ϸ�\n");
				break;
			}
			DeleteList(&L, delete);
			break;
		case LENGTH:
			if (L.elem == NULL)
			{
				printf("˳���δ����\n");
				break;
			}
			printf("����Ϊ%d\n", L.length);
			break;
		case BREAK:
			if (L.elem == NULL)
			{
				printf("˳���δ����\n");
				break;
			}
			DestoryList(&L);
			break;
		case CLEAR:
			if (L.elem == NULL)
			{
				printf("˳���δ����\n");
				break;
			}
			ClearList(&L);
			printf("˳������ÿ�\n");
			break;
		case PRINT:
			if (L.elem == NULL)
			{
				printf("˳���δ����\n");
				break;
			}
			if (L.length == 0)
			{
				printf("˳���Ϊ��\n");
				break;
			}
			PrintList(&L);
			break;
		case EXIT:
			DestoryList(&L);
			printf("�˳�����\n");
			break;
		default:
			printf("�������,����������\n");
			break;
		}
	} while (choose);
	return 0;
}
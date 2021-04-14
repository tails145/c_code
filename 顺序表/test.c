#define _CRT_SECURE_NO_WARNINGS 1
#include "sqList.h"

void menu()
{
	printf("*********顺序表**********\n");
	printf("****1.创建    2.尾插****\n");
	printf("****3.头插    4.置空****\n");
	printf("****5.查找    6.删除****\n");
	printf("****7.打印    8.求长****\n");
	printf("****9.销毁    0.退出****\n");
}

int main()
{
	int choose = 0;
	//头指针
	SqList L = { NULL,0 };
	do
	{
		int length = 0;
		char data = 0;
		int num = 0;
		int delete = 0;
		char get = 0;
		menu();
		printf("请选择:");
		scanf("%d", &choose);
		switch (choose)
		{
		case BUILD:
			if (L.elem != NULL)
			{
				printf("顺序表已创建，无需再次创建\n");
				break;
			}
			InitList(&L);
			printf("创建成功\n");
			break;
		case BEHIND:
			if (L.elem == NULL)
			{
				printf("顺序表未创建\n");
				break;
			}
			printf("请输入字符：");
			getchar();
			scanf("%c", &get);
			BehindAdd(&L, get);
			break;
		case FIRST:
			if (L.elem == NULL)
			{
				printf("顺序表未创建\n");
				break;
			}
			printf("请输入字符：");
			getchar();
			scanf("%c", &get);
			FirstAdd(&L, get);
			break;
		case FIND:
			if (L.elem == NULL)
			{
				printf("顺序表未创建\n");
				break;
			}
			printf("请输入想要查找的位置，将返回其所在的元素\n");
			scanf("%d", &num);
			if (num <= 0 || num > L.length)
			{
				printf("输入位置不合法\n");
				break;
			}
			data = FindData(&L, num);
			printf("第%d个位置的元素为%c\n", num, data);
			break;
		case DELETE:
			if (L.elem == NULL)
			{
				printf("顺序表未创建\n");
				break;
			}
			printf("请输入想要删除位置的序号：");
			scanf("%d", &delete);
			if (delete <= 0 || delete > L.length)
			{
				printf("输入位置不合法\n");
				break;
			}
			DeleteList(&L, delete);
			break;
		case LENGTH:
			if (L.elem == NULL)
			{
				printf("顺序表未创建\n");
				break;
			}
			printf("长度为%d\n", L.length);
			break;
		case BREAK:
			if (L.elem == NULL)
			{
				printf("顺序表未创建\n");
				break;
			}
			DestoryList(&L);
			break;
		case CLEAR:
			if (L.elem == NULL)
			{
				printf("顺序表未创建\n");
				break;
			}
			ClearList(&L);
			printf("顺序表已置空\n");
			break;
		case PRINT:
			if (L.elem == NULL)
			{
				printf("顺序表未创建\n");
				break;
			}
			if (L.length == 0)
			{
				printf("顺序表为空\n");
				break;
			}
			PrintList(&L);
			break;
		case EXIT:
			DestoryList(&L);
			printf("退出程序\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	} while (choose);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include "LinkList.h"

void menu()
{
	printf("**********链表**********\n");
	printf("****1.创建    2.插入****\n");
	printf("****3.表长    4.取值****\n");
	printf("****5.查找    6.删除****\n");
	printf("****7.销毁    8.置空****\n");
	printf("*********0.退出*********\n");
}

int main()
{
	int choose = 0;
	//头指针
	LinkList* L = NULL;
	do
	{
		int length = 0;
		int age = 0;
		int num = 0;
		int delete = 0;
		menu();
		printf("请选择:");
		scanf("%d", &choose);
		switch (choose)
		{
		case BUILD:
			L = InitList(L);
			printf("创建成功\n");
			break;
		case CHAR:
			if (L == NULL)
			{
				printf("链表未创建\n");
			}
			else
			{
				printf("请输入年龄：");
				int get = 0;
				scanf("%d", &get);
				L = CharList(get, L);
			}
			break;
		case LENGTH:
			if (L == NULL)
			{
				printf("链表未创建\n");
				break;
			}
			length = Length(L);
			printf("长度为%d\n", length);
			break;
		case GETNUM:
			if (L == NULL)
			{
				printf("链表未创建\n");
				break;
			}
			printf("输入想要查找的序号：");
			scanf("%d", &num);
			if (num<1 || num>Length(L))
			{
				printf("所要查找的序号不存在\n");
				break;
			}
			printf("该序号所对应的年龄是%d\n", GetNum(L, num));
			break;
		case FIND:
			if (L == NULL)
			{
				printf("链表未创建\n");
				break;
			}
			printf("请输入想要查找的年龄，将返回其所在的位置\n");
			scanf("%d", &age);
			FindAge(L, age);
			break;
		case DELETE:
			if (L == NULL)
			{
				printf("链表未创建\n");
				break;
			}
			printf("请输入想要删除位置的序号：");
			scanf("%d", &delete);
			DeleteList(L,delete);
			break;
		case BREAK:
			if (L == NULL)
			{
				printf("链表未创建,无需删除\n");
				break;
			}
			L = BreakList(L);
			break;
		case NONE:
			if (L == NULL)
			{
				printf("链表未创建,无需置空\n");
				break;
			}
			NoneList(L);
			printf("链表已置空\n");
			break;
		case EXIT:
			L = BreakList(L);
			printf("退出程序\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	} while (choose);
	return 0;
}
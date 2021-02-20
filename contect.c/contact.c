#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(SIZE * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = SIZE;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增加容量
		struct PeoInfo* (ptr) = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("扩容成功\n");
		}
		else
		{
			printf("扩容失败\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//检测容量
	CheckCapacity(ps);
		printf("请输入名字:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
}

void ShowContact(struct Contact* ps)
{
	printf("%-10s %-4s %-5s %-12s %-20s\n", "名字", "年龄", "性别", "电话", "地址");
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		for (i = 0;i < ps->size;i++)
		{
			printf("%-10s %-4d %-5s %-12s %-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

//根据名字查找
int SearchByName(const struct Contact* ps, char* name)
{
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	//找不到
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除人的名字:");
	scanf("%s", name);
	int ret=SearchByName(ps, name);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		int j = 0;
		for (j = ret;j < ps->size-1;j++)
		{
			ps->data[j] = ps->data[j + 1];
			ps->size--;
		}
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入需要查找联系人的名字:");
	scanf("%s", name);
	int ret = SearchByName(ps, name);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%-10s %-4s %-5s %-12s %-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf(" % -10s % -4d % -5s % -12s % -20s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入想要修改联系人的名字:");
	scanf("%s", name);
	int ret = SearchByName(ps, name);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		int i = 0;
		next:
		printf("请输入想要修改该联系人信息的序号(1.姓名 2.年龄 3.性别 4.电话 5.地址 6.所有信息):");
			scanf("%d", &i);
			switch (i)
			{
			case 1:
				printf("请输入想要修改的名字:");
				scanf("%s", ps->data[ret].name);
				printf("修改成功\n");
				break;
			case 2:
				printf("请输入想要修改的年龄:");
				scanf("%d", ps->data[ret].age);
				printf("修改成功\n");
				break;
			case 3:
				printf("请输入想要修改的性别:");
				scanf("%s", ps->data[ret].sex);
				printf("修改成功\n");
				break;
			case 4:
				printf("请输入想要修改的电话:");
				scanf("%s", ps->data[ret].tele);
				printf("修改成功\n");
				break;
			case 5:
				printf("请输入想要修改的地址:");
				scanf("%s", ps->data[ret].addr);
				printf("修改成功\n");
				break;
			case 6:
				printf("请输入名字:\n");
				scanf("%s", ps->data[ps->size].name);
				printf("请输入年龄:");
				scanf("%d", &(ps->data[ps->size].age));
				printf("请输入性别:");
				scanf("%s", ps->data[ps->size].sex);
				printf("请输入电话:");
				scanf("%s", ps->data[ps->size].tele);
				printf("请输入地址:");
				scanf("%s", ps->data[ps->size].addr);
				printf("修改成功\n");
				break;
			default:
				printf("输入错误\n");
				goto next;
			}
	}
}

int cmp(const void* a, const void* b)
{
	char* name1 = ((struct PeoInfo*)a)->name;
	char* name2 = ((struct PeoInfo*)b)->name;
	return strcmp(name1, name2);
}
void SortContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空，无法排序\n");
	}
	else 
	{
		qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp);
		printf("排序成功\n");
	}
}

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
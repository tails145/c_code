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
		//��������
		struct PeoInfo* (ptr) = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//�������
	CheckCapacity(ps);
		printf("����������:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
}

void ShowContact(struct Contact* ps)
{
	printf("%-10s %-4s %-5s %-12s %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
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

//�������ֲ���
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
	//�Ҳ���
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ���˵�����:");
	scanf("%s", name);
	int ret=SearchByName(ps, name);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		int j = 0;
		for (j = ret;j < ps->size-1;j++)
		{
			ps->data[j] = ps->data[j + 1];
			ps->size--;
		}
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������Ҫ������ϵ�˵�����:");
	scanf("%s", name);
	int ret = SearchByName(ps, name);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%-10s %-4s %-5s %-12s %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("��������Ҫ�޸���ϵ�˵�����:");
	scanf("%s", name);
	int ret = SearchByName(ps, name);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		int i = 0;
		next:
		printf("��������Ҫ�޸ĸ���ϵ����Ϣ�����(1.���� 2.���� 3.�Ա� 4.�绰 5.��ַ 6.������Ϣ):");
			scanf("%d", &i);
			switch (i)
			{
			case 1:
				printf("��������Ҫ�޸ĵ�����:");
				scanf("%s", ps->data[ret].name);
				printf("�޸ĳɹ�\n");
				break;
			case 2:
				printf("��������Ҫ�޸ĵ�����:");
				scanf("%d", ps->data[ret].age);
				printf("�޸ĳɹ�\n");
				break;
			case 3:
				printf("��������Ҫ�޸ĵ��Ա�:");
				scanf("%s", ps->data[ret].sex);
				printf("�޸ĳɹ�\n");
				break;
			case 4:
				printf("��������Ҫ�޸ĵĵ绰:");
				scanf("%s", ps->data[ret].tele);
				printf("�޸ĳɹ�\n");
				break;
			case 5:
				printf("��������Ҫ�޸ĵĵ�ַ:");
				scanf("%s", ps->data[ret].addr);
				printf("�޸ĳɹ�\n");
				break;
			case 6:
				printf("����������:\n");
				scanf("%s", ps->data[ps->size].name);
				printf("����������:");
				scanf("%d", &(ps->data[ps->size].age));
				printf("�������Ա�:");
				scanf("%s", ps->data[ps->size].sex);
				printf("������绰:");
				scanf("%s", ps->data[ps->size].tele);
				printf("�������ַ:");
				scanf("%s", ps->data[ps->size].addr);
				printf("�޸ĳɹ�\n");
				break;
			default:
				printf("�������\n");
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
		printf("ͨѶ¼Ϊ�գ��޷�����\n");
	}
	else 
	{
		qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp);
		printf("����ɹ�\n");
	}
}

void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX1 5
#define MAX2 10

#include <stdio.h>
#include <stdlib.h>

typedef struct List1
{
	int elem[MAX1];
	int length;
}List1;

typedef struct List2
{
	int elem[MAX2];
	int length;
}List2;

void InitList2(List2* p)
{
	memset(p->elem, 0, MAX2 * sizeof(int));
	p->length = 0;
}

void Combine(List1* La, List1* Lb, List2* Lc)
{
	int i = 0;
	//����������La��Lb����һ������Ϊ0����û��Ԫ����
	while ((La->length != 0) && (Lb->length != 0))
	{
		//���La�е�ǰ����Ԫ�ر�Lb������Ԫ�ش����La������Ԫ�ظ�Lc��������ɾ��
		if ((La->elem[La->length - 1]) > (Lb->elem[Lb->length - 1]))
		{
			Lc->elem[i] = La->elem[La->length - 1];
			i++;
			Lc->length++;
			La->elem[La->length - 1] = 0;
			La->length--;
		}
		//���Lb�е�ǰ����Ԫ�ر�La������Ԫ�ش����Lb������Ԫ�ظ�Lc��������ɾ��
		else
		{
			Lc->elem[i] = Lb->elem[Lb->length - 1];
			i++;
			Lc->length++;
			Lb->elem[Lb->length - 1] = 0;
			Lb->length--;
		}
	}
	//��La��Lb�л���Ԫ�صĴӴ�С��ֵ��Lc
	if (La->length != 0)
	{
		while (La->length)
		{
			Lc->elem[i] = La->elem[La->length - 1];
			i++;
			Lc->length++;
			La->elem[La->length - 1] = 0;
			La->length--;
		}
	}
	else
	{
		Lc->elem[i] = Lb->elem[Lb->length - 1];
		i++;
		Lc->length++;
		Lb->elem[Lb->length - 1] = 0;
		Lb->length--;
	}
}

int main()
{
	//La��ֵ
	List1* La = (List1*)malloc(sizeof(List1));
	La->elem[0] = 1;
	La->elem[1] = 3;
	La->elem[2] = 4;
	La->elem[3] = 5;
	La->elem[4] = 8;
	La->length = 5;
	//Lb��ֵ
	List1* Lb = (List1*)malloc(sizeof(List1));
	Lb->elem[0] = 2;
	Lb->elem[1] = 3;
	Lb->elem[2] = 5;
	Lb->elem[3] = 8;
	Lb->elem[4] = 9;
	Lb->length = 5;
	//Lc��ʼ��
	List2* Lc = (List2*)malloc(sizeof(List2));
	InitList2(Lc);
	//�ϲ�
	Combine(La, Lb, Lc);
	//��ӡLc
	int i = 0;
	for (i = 0;i <= Lc->length - 1;i++)
	{
		printf("%d ", Lc->elem[i]);
	}

	return 0;
}
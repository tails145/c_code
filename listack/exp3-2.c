#define _CRT_SECURE_NO_WARNINGS 1

#include "Listack.h"

int main()
{
	LinkStack S = { NULL, 0 };
	//��ʼ��ջ
	InitStack(&S);
	system("pause");
	//�ж�ջ�Ƿ�Ϊ��
	int ret = IfNone(&S);
	if (ret == 1)
	{
		printf("ջΪ��\n");
	}
	else
	{
		printf("ջ��Ϊ��\n");
	}
	system("pause");
	//��Ԫ��abcde������ջ
	Push(&S, 'a');
	Push(&S, 'b');
	Push(&S, 'c');
	Push(&S, 'd');
	Push(&S, 'e');
	system("pause");
	//���ջ��Ԫ��
	char get = GetTop(&S);
	printf("ջ��Ԫ��Ϊ%c\n", get);
	system("pause");
	//���ջ�ĳ���
	int length = GetLength(&S);
	printf("ջ�ĳ���Ϊ%d\n", length);
	system("pause");
	//��ջ��Ԫ�����γ�ջ�����
	Delete(&S);
	Delete(&S);
	Delete(&S);
	Delete(&S);
	Delete(&S);
	system("pause");
	//�ж�ջ�Ƿ�Ϊ��
	ret = IfNone(&S);
	if (ret == 1)
	{
		printf("ջΪ��\n");
	}
	else
	{
		printf("ջ��Ϊ��\n");
	}
	system("pause");
	//����ջ
	Break(&S);
	system("pause");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include "sqstack.h"

int main()
{
	SqStack S = { NULL, NULL, 0 };
	//��ʼ��
	InitSqStack(&S);
	system("pause");
	//�ж�ջ�Ƿ�Ϊ�� Ϊ�շ���1����Ϊ�շ���0
	int ret = IfNone(&S);
	if (ret == 0)
	{
		printf("ջ��Ϊ��\n");
	}
	else
	{
		printf("ջΪ��\n");
	}
	system("pause");
	//��Ԫ��abcde���ν�ջ
	Push(&S,'a');
	Push(&S,'b');
	Push(&S,'c');
	Push(&S,'d');
	Push(&S,'e');
	system("pause");
	//���ջ��Ԫ��
	char get = GetTop(&S);
	printf("ջ��Ԫ��Ϊ%c\n", get);
	system("pause");
	//���ջ�ĳ���
	int length = GetLength(&S);
	printf("ջ�ĳ���Ϊ%d\n", length);
	system("pause");
	//��ջ�����
	Delete(&S);
	Delete(&S);
	Delete(&S);
	Delete(&S);
	Delete(&S);
	system("pause");
	//�ж�ջ�Ƿ�Ϊ��
	ret = IfNone(&S);
	if (ret == 0)
	{
		printf("ջ��Ϊ��\n");
	}
	else
	{
		printf("ջΪ��\n");
	}
	system("pause");
	//����ջ
	Break(&S);
	system("pause");

	return 0;
}

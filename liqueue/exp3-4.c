#define _CRT_SECURE_NO_WARNINGS 1

#include "LiQueue.h"

int main()
{
	LiQueue Q;
	//��ʼ��
	InitQueue(&Q);
	system("pause");
	//�ж϶����Ƿ�Ϊ��
	int ret = IfNone(&Q);
	if (ret == 1)
	{
		printf("����Ϊ��\n");
	}
	else
	{
		printf("���в�Ϊ��\n");
	}
	system("pause");
	//��Ԫ��abc�������

	Push(&Q, 'a');
	Push(&Q, 'b');
	Push(&Q, 'c');
	system("pause");
	//����һ��Ԫ�ز����
	char get = GetOne(&Q);
	printf("%c�ѳ���\n", get);
	system("pause");
	//������г���
	int length = GetLength(&Q);
	printf("���г���Ϊ%d\n", length);
	system("pause");
	//��Ԫ��def�������
	Push(&Q, 'd');
	Push(&Q, 'e');
	Push(&Q, 'f');
	system("pause");
	//������Ԫ�����γ��Ӳ����
	get = GetOne(&Q);
	printf("%c�ѳ���\n", get);
	get = GetOne(&Q);
	printf("%c�ѳ���\n", get);
	get = GetOne(&Q);
	printf("%c�ѳ���\n", get);
	get = GetOne(&Q);
	printf("%c�ѳ���\n", get);
	get = GetOne(&Q);
	printf("%c�ѳ���\n", get);
	system("pause");
	//���ٶ���
	Destory(&Q);
	system("pause");

	return 0;
}
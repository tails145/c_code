#define _CRT_SECURE_NO_WARNINGS 1

#include "sqstring.h"

int main()
{
	SString s;
	SString s1;
	//��ʼ��
	BuildString(&s, "abcdefghefghijklmn");
	BuildString(&s1, "xyz");
	system("pause");
	//�����s
	printf("��s:");
	Display(&s);
	system("pause");
	//������ĳ���
	int length = GetLength(&s);
	printf("��s�ĳ���Ϊ%d\n", length);
	system("pause");
	//���봮s1
	SString s2;
	Insert(&s, 9, &s1, &s2);
	printf("�ڴ�s�ĵ�9���ַ�λ�ò��봮s1��������s2:");
	Display(&s2);
	system("pause");
	//ɾ���ַ�
	SString s5;
	Delete(&s, 2, 5, &s5);
	printf("ɾ����s�ĵ�2���ַ���ʼ��5���ַ���������s2:");
	Display(&s5);
	system("pause");
	//�滻�ַ�
	SString s6;
	Change(&s, 2, 3, &s1, &s6);
	printf("����s�ĵ�2���ַ���ʼ��3���ַ��滻�ɴ�s1��������s2:");
	Display(&s6);
	system("pause");
	//��ȡ
	SString s3;
	Get(&s, 2, 10, &s3);
	printf("��ȡ��s�ĵ�2���ַ���ʼ��10���ַ���������s3:");
	Display(&s3);
	system("pause");
	//����s1 s
	SString s4;
	Connect(&s, &s1, &s4);
	printf("����s1�ʹ�s2����������������s4:");
	Display(&s4);
	system("pause");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct SString
{
	char* ch;
	int length;
}SString;

//����
void BuildString(SString* S, char* x)
{
	if (S == NULL)
	{
		printf("�Ҳ�������Ĵ�\n");
		exit(1);
	}
	int length = 0;
	while (x[length] != '\0')
	{
		length++;
	}
	S->ch = (char*)malloc((length + 1) * sizeof(char));
	if (S->ch == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	S->length = length;
	int i = 0;
	while (x[i] != '\0')
	{
		S->ch[i + 1] = x[i];
		i++;
	}
	printf("�������ɹ�\n");
}

//��ӡ
void Display(SString* S)
{
	if (S == NULL)
	{
		printf("�Ҳ�������Ĵ�\n");
		exit(1);
	}
	int i = 1;
	int length = S->length;
	while (length != 0)
	{
		printf("%c", S->ch[i]);
		i++;
		length--;
	}
	printf("\n��ӡ���\n");
}

//BF�㷨
int Bf(SString* s, int pos, SString* t)
{
	int i = pos;
	int j = 1;
	while (i <= s->length && j <= t->length)
	{
		if (s->ch[i] == t->ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > t->length)
	{
		return i - t->length;
	}
	else
	{
		return 0;
	}
}

int main()
{
	SString s;
	SString t;
	BuildString(&s, "abcabcdabcdeabcdefabcdefg");
	BuildString(&t, "abcdeabcdefab");
	printf("��s:");
	Display(&s);
	printf("��t:");
	Display(&t);
	int pos = 0;
	printf("������ƥ����ʼλ��(1-25):");
	scanf("%d", &pos);
	int ret = Bf(&s, pos, &t);
	if (ret == 0)
	{
		printf("ƥ�䲻�ɹ�\n");
	}
	else
	{
		printf("�����%d��ƥ��ɹ�\n",ret);
	}
	return 0;
}
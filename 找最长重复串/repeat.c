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

//����ظ��Ӵ�
void FindRepeat(SString* s)
{
	int i = 1;
	int j = 2;
	int get = 0;//��¼��ظ��Ӵ���ʼ�±�
	int length = 0;//��¼ʵʱ����
	int max = 0;//��¼��ظ��Ӵ�����
	while (i <= s->length)
	{
		j = i + 1;
		while (i <= s->length && j <= s->length)
		{
			if (s->ch[i] == s->ch[j])
			{
				i++;
				j++;
				length++;
				//������Ӵ�
				if (length > max)
				{
					max = length;
					get = i - length;
				}
			}
			else
			{
				j = j - length + 1;
				i = i - length;
				length = 0;
			}
		}
		i++;
	}
	if (max == 0)
	{
		printf("���ظ��Ӵ�\n");
	}
	else
	{
		printf("��һ����ظ��Ӵ����±�Ϊ%d,����Ϊ%d\n", get, max);
	}
}

int main()
{
	SString s;
	BuildString(&s, "dshadhad");
	printf("��Ϊ:");
	Display(&s);
	FindRepeat(&s);
	return 0;
}
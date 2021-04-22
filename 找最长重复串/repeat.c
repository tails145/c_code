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

//创建
void BuildString(SString* S, char* x)
{
	if (S == NULL)
	{
		printf("找不到传入的串\n");
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
	printf("串创建成功\n");
}

//打印
void Display(SString* S)
{
	if (S == NULL)
	{
		printf("找不到传入的串\n");
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
	printf("\n打印完成\n");
}

//找最长重复子串
void FindRepeat(SString* s)
{
	int i = 1;
	int j = 2;
	int get = 0;//记录最长重复子串开始下标
	int length = 0;//记录实时长度
	int max = 0;//记录最长重复子串长度
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
				//更新最长子串
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
		printf("无重复子串\n");
	}
	else
	{
		printf("第一个最长重复子串的下标为%d,长度为%d\n", get, max);
	}
}

int main()
{
	SString s;
	BuildString(&s, "dshadhad");
	printf("串为:");
	Display(&s);
	FindRepeat(&s);
	return 0;
}
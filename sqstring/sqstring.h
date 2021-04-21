#define _CRT_SECURE_NO_WARNINGS 1
#define MAXSIZE 100

#include <stdio.h>
#include <stdlib.h>

typedef struct SString
{
	char* ch;
	int length;
}SString;

//初始化
void BuildString(SString* S, char*);
//打印
void Display(SString* S);
//输出长度
int GetLength(SString* S);
//插入串（在S的第num个位置插入S1，并将结果放到S2中）
void Insert(SString* S, int num, SString* S1, SString* S2);
//删除字符串（删除S中从start开始的num个字符，并将结果放到S1中）
void Delete(SString* S, int start, int num, SString* S1);
//替换串(S中从start开始的num个字符替换成S1，并将结果放到S2中)
void Change(SString* S, int start, int num, SString* S1, SString* S2);
//提取（将S中第二个字符开始的num个字符提取出来放到S1中）
void Get(SString* S, int start, int num, SString* S1);
//连接（将S和S1连接，放到S2中）
void Connect(SString* S, SString* S1, SString* S2);

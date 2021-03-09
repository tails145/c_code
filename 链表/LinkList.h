#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//枚举常量设置选项
enum CHOOSE
{
	EXIT,
	BUILD,
	CHAR,
	LENGTH,
	GETNUM,
	FIND,
	DELETE,
	BREAK,
	NONE
};

//定义结构体类型
typedef struct LinkList
{
	int age;
	struct LinkList* next;
}LinkList;

//初始化链表
LinkList* InitList(LinkList* L);
//插入数据
LinkList* CharList(int get, LinkList* L);
//计算长度
int Length(LinkList* L);
//查找
void FindAge(LinkList* L, int age);
//取值
int GetNum(LinkList* L, int num);
//销毁链表
LinkList* BreakList(LinkList* L);
//删除
void DeleteList(LinkList* L, int n);
//置空链表
void NoneList(LinkList* L);


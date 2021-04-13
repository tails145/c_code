#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//枚举常量设置选项
enum CHOOSE
{
	EXIT,
	BUILD,
	BEFORE,
	LENGTH,
	GETNUM,
	FIND,
	DELETE,
	BREAK,
	CLEAR,
	PRINT,
	BEHIND,
	INVERSE,
	SOUT
};

//定义结构体类型
typedef struct LinkList
{
	int data;
	struct LinkList* next;
}LinkList;

//初始化链表
LinkList* InitList(LinkList* L);
//插入数据
void AddList(int data, LinkList* L);
//计算长度
int Length(LinkList* L);
//查找
void FindData(LinkList* L, int data);
//取值
int GetNum(LinkList* L, int num);
//销毁链表
LinkList* BreakList(LinkList* L);
//删除
void DeleteList(LinkList* L, int n);
//置空链表
void ClearList(LinkList* L);
//打印链表
void PrintList(LinkList* L);
//后插
void BehindAdd(LinkList* L, int data);
//逆置
void InverseList(LinkList* L);
//交换位置
void Swap(LinkList* L, int x, int y);
//排序
void SortList(LinkList* L);
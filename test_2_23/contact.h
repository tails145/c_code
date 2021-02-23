#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 1000

#define SIZE 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放一个信息
	int size;//记录当前已有元素的个数
	int capacity;//当前通讯录容量
};

//函数声明
//初始化通讯录
void InitContact(struct Contact* ps);
//添加一个信息到通讯录
void AddContact(struct Contact* ps);
//显示通讯录所有信息
void ShowContact(struct Contact* ps);
//删除指定的联系人信息
void DelContact(struct Contact* ps);
//查找指定的联系人信息
void SearchContact(const struct Contact* ps);
//修改指定的联系人信息
void ModifyContact(struct Contact* ps);
//按姓名排序
void SortContact(struct Contact* ps);
//删除动态内存
void DestroyContact(struct Contact* ps);
//保存信息至文件中
void SaveContact(struct Contact* ps);
//读取文件
void LoadContact(struct Contact* ps);
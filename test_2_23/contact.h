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

//ͨѶ¼����
struct Contact
{
	struct PeoInfo* data;//���һ����Ϣ
	int size;//��¼��ǰ����Ԫ�صĸ���
	int capacity;//��ǰͨѶ¼����
};

//��������
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//���һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//��ʾͨѶ¼������Ϣ
void ShowContact(struct Contact* ps);
//ɾ��ָ������ϵ����Ϣ
void DelContact(struct Contact* ps);
//����ָ������ϵ����Ϣ
void SearchContact(const struct Contact* ps);
//�޸�ָ������ϵ����Ϣ
void ModifyContact(struct Contact* ps);
//����������
void SortContact(struct Contact* ps);
//ɾ����̬�ڴ�
void DestroyContact(struct Contact* ps);
//������Ϣ���ļ���
void SaveContact(struct Contact* ps);
//��ȡ�ļ�
void LoadContact(struct Contact* ps);
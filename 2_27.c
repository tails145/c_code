#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//0ǿ��ת���ɽṹ��ָ��ĵ�ַ����ô����ṹ���Ա�ĵ�ַ���Ǹó�Ա��ƫ����
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)

struct S
{
	char a;
	int b;
	char c;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));

	return 0;
}
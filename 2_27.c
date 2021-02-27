#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//0强制转换成结构体指针的地址，那么后面结构体成员的地址就是该成员的偏移量
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
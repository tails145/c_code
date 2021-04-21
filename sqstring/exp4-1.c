#define _CRT_SECURE_NO_WARNINGS 1

#include "sqstring.h"

int main()
{
	SString s;
	SString s1;
	//初始化
	BuildString(&s, "abcdefghefghijklmn");
	BuildString(&s1, "xyz");
	system("pause");
	//输出串s
	printf("串s:");
	Display(&s);
	system("pause");
	//输出串的长度
	int length = GetLength(&s);
	printf("串s的长度为%d\n", length);
	system("pause");
	//插入串s1
	SString s2;
	Insert(&s, 9, &s1, &s2);
	printf("在串s的第9个字符位置插入串s1而产生串s2:");
	Display(&s2);
	system("pause");
	//删除字符
	SString s5;
	Delete(&s, 2, 5, &s5);
	printf("删除串s的第2个字符开始的5个字符而产生串s2:");
	Display(&s5);
	system("pause");
	//替换字符
	SString s6;
	Change(&s, 2, 3, &s1, &s6);
	printf("将串s的第2个字符开始的3个字符替换成串s1而产生串s2:");
	Display(&s6);
	system("pause");
	//提取
	SString s3;
	Get(&s, 2, 10, &s3);
	printf("提取串s的第2个字符开始的10个字符而产生串s3:");
	Display(&s3);
	system("pause");
	//连接s1 s
	SString s4;
	Connect(&s, &s1, &s4);
	printf("将串s1和串s2连接起来而产生串s4:");
	Display(&s4);
	system("pause");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//    //д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//�Ӽ����϶�ȡ�ַ���
//	char buf[1024] = { 0 };
//	fgets(buf, 100, stdin);
//	fputs(buf, stdout);
//    
//	return 0;
//}

struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 10,3.14,"bit" };
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}
	//��ʽ�����������
	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
	return 0;
}
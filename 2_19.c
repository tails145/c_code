#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>


struct S
{
	int n;
	int arr[];
};
int main()
{
	//柔性数组
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		ps->n = 100;
		int i = 0;
		for (i = 0;i < 5;i++)
		{
			ps->arr[i] = i;
		}
		//调整大小
		struct S* str = realloc(ps, 44);
		if (str != NULL)
		{
			ps = str;
		}
		for (i = 5;i < 10;i++);
		{
			ps->arr[i] = i;
		}
		for (i = 0;i < 10;i++)
		{
			printf("%d ", ps->arr[i]);
		}
	}
	return 0;
}
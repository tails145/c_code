#include <stdio.h>
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
int main()
{
	int a = 10;
	int* p = &a;
	int* n = &p;
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%p\n", n);

	return 0;
}
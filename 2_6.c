#include <stdio.h>

void swap(char* e1, char* e2,int width)
{
	int i = 0;
	for (i = 0;i < width;i++)
	{
		char tmp = 0;
		tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
int cmp_int(void* arr1, void* arr2)
{
	return *(int*)arr1 - *(int*)arr2;
}
void qsort(void* arr, int sz, int width, int(*cmp)(void*e1,void*e2))
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - i - 1;j++)
		{
			if (cmp((char*)arr+j*width,(char*)arr+(j+1)*width) > 0)
			{
				swap((char*)arr + j * width, (char*)arr + (j + 1) * width,width);
			}
		}
	}
}
int main()
{
	int arr[] = { 2,3,5,6,8,1,4,10,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#include <stdio.h>
#include <assert.h>

//void my_memcpy(void* dest, void* src, int num)
//{
//	assert(dest);
//	assert(src);
//	int i = num;
//	while (i--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,6,7,8,9 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//
//void my_memmove(void* dest, void* src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	if ((char*)dest < (char*)src)
//	{
//		//从前向后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前
//		while (count--)
//		{
//			*((char*)dest + count ) = *((char*)src + count );
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 1, arr, 20);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0X11223344;
//	int* pa = &a;
//	*pa = 0;//00 00 00 00
//	char* pc = &a;
//	*pc = 0;//00 33 22 11
//	//执政类型决定了指针进行解引用操作的时候，能偶访问字节的大小
//	
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int a = 0X11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pa+1);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素的地址
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化为随机值
//}

//指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* pa = &a;//1.初始化
//	//int* p = NULL;//2.NULL-用来初始化指针的，给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)//4.指针使用前检查有效性
//	{
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i + 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p=p + 1;
//	}*/
//	for (i + 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		*p -= 2;//指针可以加减整数
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", & arr[9] - &arr[0]);//指针-指针=中间的元素个数
//	&arr[9] - &ch[0];//不可以这样写.
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0');
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen-求字符串长度
//	//递归-模拟实现了strlen-计数器的方式1，递归-方式2
//	char arr[] = "bit";//bit\0
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr-&数组名-数组名不是首元素的地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//	//2。sizeof(arr)-sizeof(数组名)-数组名表示的整个数组-sizeof(数组名)计算的是整个数组的大小，单位是字节
//
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0};
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p + i));
//	}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p   ======   %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针变量
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int arr1[10] = {};
//	int* arr2[3] = {&a,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));//*解引用操作
//	}
//	return 0;
//
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int sum = 0;
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//Add是库函数
//	printf("%d\n", sum);
//	return 0;
//}
// 
//int main()
//{
//	//strcpy--字符串拷贝(char*destination,const char*source);*是一个地址。目的地址：源地址
//	//strlen--字符串长度
//	char arr1[] = "bit";
//	char arr2[] = "#######";
//	strcpy(arr2, arr1);//拷贝时结尾也拷贝进去
//	printf("%s\n", arr2);
//	
//	return 0;
//}
//int main()
//{
//	//memset--mem-内存 set-设置
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//目标：替换内容：替换数量
//	printf("%s\n", arr);
//	return 0;
//}

//get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(100, 200);
//	printf("max=%d\n", max);
//	return 0;
//}

//形参实例化之后其实是实参的一份临时拷贝
//Swap1不能完成任务
//void swap1(int x, int y)//int x和int y就是形参
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//Swap2(int* pa, int* pb)//*pa *pb是指针变量
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;//a,b就是实参
//	int b = 20;
//	//int* pa = &a;
//	//int* pb = &b;
//	Swap2(&a, &b);//
//	//swap1(a,b);//只需交换，无返回值
//	/*int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用地址
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	int len = 0;
//	//len = strlen("abc");
//	//printf("%d\n", len);
//	prinft("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf是打印字符的个数。
//	return 0;
//
//}

//头文件放声明，源文件放定义
//int Add(int x, int y);//函数的声明，声明后定义的函数才可用
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//函数的递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//stack overflow 栈溢出

//数组
//int main()
//{
//	//int arr[10] = {1,2,3};//不完全初始化。剩下的元素默认初始化为0；
//	//char arr2[5] = { '3','5' };
//	//char arr3[5] = "ab";//也是可以的
//	char arr4[] = "abcdef";
//	//printf("%d\n", sizeof(arr4));//7 sizeof是计算arr4所占空间的大小
//	//sizeof 计算变量，数组，类型的大小-单位是字节-操作符
//
//	//printf("%d\n", strlen(arr4));//6  strlen求字符串长度到\0停止，且\0不算进去
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//4
//	printf("%d\n", sizeof(arr2));
//3
//	printf("%d\n", strlen(arr1));
//3
//  printf("%d\n", strlen(arr2));
//1//strlen找的是\0，没有的话就输出随机值
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";//下标从0开始
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	//int len = strlen(arr);
//	for (i = 0; i<strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的大小可以计算出来
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的大小可以计算出来
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}//数组在内存中是连续存放的
//	return 0;
//}

//二维数组
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};//三行四列//属于不完全初始化，一行放完再放第二行
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("&arr[%d][%d]=%p\n", i, j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	//char ch[5][6];
//	//int arr[2][4] = { {1,2,3,4},{5,6,7,8} };//行可以省略，列不可省略
//
//	return 0;
//}
//二维数组的使用
//下标依然从0开始

//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int flag = 1;//假设这一趟排序已经有序
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;//break 作用的是前面的for循环
//		}
//
//	}
//}
//int main()
//{
//	int arr[] = { 3,4,8,7,5,0,1,2,6,5 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
//	bubble_sort(arr,sz);//冒泡排序
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.以上这个情况sizeof(数组名)-数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//代表从这里开始，取的是整个数组的地址
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr+1);
	//数组名就是数组首元素的地址。
	return 0;
}
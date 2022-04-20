#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//练习一：
//是素数返回一，不是素数返回0
//is_prime(int n)
//{
//	int j = 0;
//	//for (j=2; j < n ; j++)
//	for(j=2;j<sqrt(n);j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)//外部函数=1
//			printf("%d ", i);
//	}
//	return 0;
//}

//练习二:是否是闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(is_leap_year(year)==1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//练习三:实现二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//练习四：写一个函数，每调用一次这个函数，就将num的值加1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	//每调用一次，函数就增加1
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//return 0;
//}

//递归练习一：接受一个整型值（无符号），按照顺序打印它的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	//print(num);//print函数
//
//	return 0;
//}

//求字符串长度 用递归的方法相当于模拟strlen函数
//my_strlen(char* str)
//{
//	if (*str != '\0')//限制条件 逐渐接近
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//	//int count = 0;
//	/*while(*str !='\0')
//	{
//		count++;
//		str++;
//	}*/
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//数组传参，传过去的不是整个数组，而是第一个元素的地址,是指针
//	printf("len=%d\n", len);
//	return 0;
//}

//联系四：求n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//练习四：求第n个斐波那契数(用递归不合适)
//斐波那契数列：1 1 2 3 5 8 13 
// 递归的实现：
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
// 循环的实现
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int fsum = 0;
//	scanf("%d", &n);
//	fsum = fib(n);
//	printf("fsum=%d\n", fsum);
//	return 0;
//}

//联系五：汉诺塔问题
//void move(char pos1, char pos2)
//{
//	printf(" %c->%c ", pos1, pos2);
//}
//Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos2);
//		Hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	Hanoi(4, 'A', 'B', 'C');
//	printf("\n");
//	return 0;
//}n=1 1
// n=2 3
// n=3 7









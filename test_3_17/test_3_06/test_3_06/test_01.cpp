#include<stdio.h>
#include<string.h>
创建一个结构体类型
struct Book
{
	char name[20];//数组占的是地址，并不能直接改
	short price;
};
int main()
{
	//利用结构体类型-创建一个该类型的变量
    struct Book b1 = { "C语言程序语言",55 }:
	strcpy(b1.name, "C++");
	printf("%s\n", b1.name);
	struct Book* pd = &b1;
	// .   结构体变量.成员
	// ->  结构体指针-》成员
	//printf("%s\n", pd->name);//指向的是b1
	//printf("%d\n", pd->price);
	printf("%s\n", (pd*).name);   //（*pd）是结构体变量
	printf("%d\n", (pd*).price);
	/*printf("书名:%s\n", b1.name);
//	printf("价格:%d元", b1.price);*/
	return 0;
}
////int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	return 0;
//
//}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;  32-4;64-8
//	printf("%d\n", sizeof(pd));
	//printf("%f\n", d);
	//int a = 10;
	//int* p = &a; //&是取a的地址    p是一个变量-指针变量
	//printf("%p\n", &a);
	//printf("%p\n", p);
	////有一种变量是用来存放地址的-指针变量
	//*p = 20;// *-间接访问操作符/解引用操作符
	//printf("a=%d\n", a);
//	return 0;
//	
//}
//static 修饰全局变量,改变了他的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法使用了
//static修饰局部变量，使局部变量的生命周期变长
//static修饰函数,也是改变了函数的链接属性   使外部链接属性-》内部链接属性

//声明一个外部函数
//extern int Add(int, int);
// 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
////int main()
//{
//	extern int g_val;//extern--声明外部符号的
//	printf("g_val=%d\n", g_val);
//
//
//	return 0;
//
//}
//void test()
//{
//	static int a = 1;//a就是静态的局部变量，static修饰局部变量，使局部变量的生命周期变长
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
	/*typedef unsigned int u_int;    将unsigned int类型 重定义为u_int类型，则这两种类型就是一样的了
	unsigned int num = 20;
	u_int num2 = 20;*/
	//signed int a= 1;//int 是有符号位的
	//unsigned int  //是无符号位，那不管后面是正是负，都是正
//	register int a = 10;//建议把a定义成寄存器变量
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);//()--函数调用操作符
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max= %d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//
//	int a = 10;
//	//int b = a++;//后置++，是b先使用a，a再++,所以b=10,a=11;
//	//int b = ++a;//前置++,先++,再使用,a=11,b=11
//	int b = a--;  //a=9,b=10
//	//int b = --a; //a=9,b=9
//	printf("a=%d\n b=%d\n", a, b);
//	return 0;
//}	
//int main()
//{
//
//
//	int a = 0;
//	int b = ~a;
//	printf("b=%d\n", b);//b=-1     源码，补码，反码
//	//b是有符号位的整型
//	// 打印出的b是原码，补码-1再按位取反就是原码
//	//~~--按位（二进制位）取反
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//计算数组大小。单位是字节
//	printf("%d\n", sizeof a);//sizeof是一个操作符，可不加括号，函数不可以。
//	printf("%d\n", sizeof(arr) / sizeof(arr[1]));//计算元素的个数
//	
//	return 0;
//
//}

//int main()//main 函数是程序得入口-代码是从main 函数的第一行开始执行的
////一个工程中，有且仅有一个main函数
//{
//	//printf -库函数-得引入头文件--stdio.h
//	printf("Practice makes perfect!");
//	return 0;

//}
//int main()
//{
//
//
//	printf("v     v\n v   v\n   v  \n");
//	
//	return 0;
//}
//int main()
//{
//
//	printf("the size of short is %d bytes,\n", sizeof(short));
//	printf("the size of long is %d bytes,", sizeof(long));
//	return 0;
//}
//int num = 10;
//int main()
//{
//	int num = 1;//局部变量优于全局变量
//	printf("num=%d\n",num);
//	return 0;
//}
//int main()//求两个数的较大值的一般方法
//{
//	int num1 = 10;
//	int num2 = 12;
//	if (num1 > num2)
//		printf("较大值是: %d\n", num1);
//	else
//		printf("较大值是: %d\n", num2);
//	
//	return 0;
//}
//int Max(int x, int y)//用函数求两个数的较大值；
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max=Max(num1, num2);
//	printf("max=%d\n", max);
//
//
//	return 0;
//
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//int a= 5%2;//商2余1
//	double a = 5/ 2.0;//至少有一个是浮点数
//	printf("a=%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	a >> 1;//右移一位
//	return 0;
//}

//练习1：交换两个值，不用第三个变量
//int main()
//{
//这是应该用的方法
//	int tmp = 0;
//	int a = 6;//011
//	int b = 7;//101
//	tmp = a;
//	a = b;
//	b = tmp;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//异或的方法
//	a = a ^ b;//110=6
//	b = a ^ b;//101=011
//	a = a ^ b;//011=101
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//练习2：求一个整数存储在内存中二进制中1的个数；
//int main()
//{
//	
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个一
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))//右移一位，末位与一相与
//			count++;
//	}
//	printf("count=%d\n", count);
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("count=%d\n", count);*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a+=2://复合赋值符:+=,-=;*=;/=;%=;>>=;<<=;&=;|=;^=
//	return 0;
//
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2  sizeof里的表达式不直接运算的
//	printf("%d\n", s);//0
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a=a | (1<< 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//
//	//int a =0;
//	////~ 按位取反
//	//printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(类型),此形式是强制类型转换
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])//数组传参，传过去的是首元素地址.地址拿指针接收，指针是4个字节的
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//是4，指针大小
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
// &按位与   |按位或
//&&逻辑与  ||逻辑或
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&& b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	a = a++ && ++b && d++;//逻辑与操作，只要最左边是假(为0)，就不再继续后面的操作打印0234
//	//i = a++ || ++b || d++;//a++为2为真，后边不再算.
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//条件操作符
//int main()
//{
//	int a = 4;
//	int b = 8;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//	printf("max=%d\n", max);
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	//b = (a > 5 ? 3 : -3);//(exp1?exp1:exp3)当exp1为真 exp2输出，否则exp3输出
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("a=%d b=%d c=%d ", a, b, c);
//	//if (a = b + 1, c = a / 2, d > 0);//判断里也可用逗号表达式
//	return 0;
//}

//创建一个结构体类型-学生struct stu
//struct Stu
//{
//	char name[20];
//	int age; 
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct Stu 这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20, "201941619" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);//和printf("%s\n", (*ps).name)是一样的
//	//结构体指针->对象
//	//printf("%s\n", (*ps).name);//解引用操作
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	//10000010--c
//	printf("%d\n", c);
//	//11111111111111111111111110000010--补码
//	//11111111111111111111111110000001--反码
//	//00000000000000000000000001111110--原码
//	return 0；
//}

//整型提升
//实例
//int main()
//{
//	return 0;
//	char a = 0xb7;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//
//	if (c == 0xb6000000)
//		printf("c");
//}
////%u

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a +3;
//	printf("%d\n", c);
//	return 0;
//}



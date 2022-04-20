#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct 结构体关键字  Stu 结构体标签  struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//typedef struct Stu//typeof指struct Stu改名为Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//类型
//int main()
//{
//	Stu s1 = { "张三",19,"12345667890","男"};//局部变量
//	struct Stu s2;
//
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}

void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);//结构体指针
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",40,"12833395737","男" };
	//Print1(s);//空间浪费严重
	//函数传参的时候，参数是需要压栈的，如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能下降
	Print2(&a);//2较好，因为传的是地址，只需要四个或八个字节
	//结构体传参的时候，要传结构体的地址
	return 0;
}


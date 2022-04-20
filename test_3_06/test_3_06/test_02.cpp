#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    while (i <= 10)
    {
        i++;
        if (i == 5)
            // break;//此时打印出1 2 3 4,就跳出了循环
            continue;//陷入死循环,终止本次循环的，continue后面的代码不会再执行，直接到while语句的判断部分。
        printf("%d ", i);
        //i++;
    }
    return 0;
}
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)//此时n=2,不执行case1
//        {
//        case 1:
//            n++;
//        case 2:
//            m++, n++;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m=%d,n=%d\n", m, n);
//    return 0;
//
//}
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)//switch语句必须是整型
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("工作日\n");
//        break;
//    case 6:
//    case 7:
//        printf("休息日\n");
//        break;
//    default://默认
//        printf("输入错误\n");
//    }
//    return 0;
//}
   
    //case 1://case也必须是整型常量表达式；
    //    printf("星期1\n");//break用于跳出switch语句；
    //    break;
    //case 2:
    //    printf("星期2\n");
    //    break;
    //case 3:
    //    printf("星期3\n");
    //    break;
    //case 4:
    //    printf("星期4\n");
    //    break;
    //case 5:
    //    printf("星期5\n");
    //    break;
    //case 6:
    //    printf("星期6\n");
    //    break;
    //case 7:
    //    printf("星期7\n");//switch用于跳入，break用于跳出语句
    //    break;

    
 

//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        printf("%d ", i);//法三
//        i += 2;
//    }
//    //while (i<=100)
//    //{
//    //    //if (i % 2 == 1)//法二
//    //    if(i%2!=0//法一
//    //        printf("%d ", i);
//    //    i++;
//    // }
//    return 0;
//}

//int main()
//{
//    int num = 4;
//    if (5==num)
//    {
//        printf("hehe\n");
//    }
//
//    return 0;
//
//}
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("haha\n");
//    }
//        else
//            printf("hehe\n");//大括号的位置很重要
//    return 0;
//}
//int main()
//{
//    int age = 91;
//    if (age < 18)
//        printf("未成年\n");
//    else if (age >= 18 && age < 28)
//        printf("青年\n");
//    else if (age >= 28 && age < 50)
//        printf("壮年\n");
//    else if (age >= 50 && age < 90)
//        printf("老年\n");
//    else
//        printf("老不死\n");
//    /*if (age < 18)
//        printf("未成年\n");
//    else
//        printf("成年人\n");*/
//    return 0;
//}
//static int g_val = 2020; //全局变量
//定义一个函数

//int Add(int x, int y)
//
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = {0};
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	//个数=数组总大小/每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);



//	int a = 10;
//
//	printf("%d\n",sizeof (a) );//sizeof 计算的是变量、类型所占的空间的大小，单位是字节
//	printf("%d\n", sizeof(int)); 
//	return 0;
//}
//int main()
//{
//	/*单目操作符！
//	双目操作符
//	三目操作符*/
//	a = a + 10;
//	a += 10;  //复合赋值符
//	/*(2进制)位操作
//	& 按位与
//	| 按位或
//	^ 按位异或*/
//	int a = 3;
//	int b = 5;
//	int c = a|b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5%2;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};  //定义一个存放10个整数数字的数组
//	//char ch[20]; //字符类型数组
//	//float arr2[5];
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]); //利用数组下标访问元素
//		i++;
//
//	}
//
//	
//	return 0;
//}

/*int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line<20000)
	{ 
		printf("敲一行代码: %d\n",line);
		line++;
	}
	if (line >= 20000);
		printf("好offer");
	

	return 0;
}*/
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer");
//	else
//		printf("卖红薯");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));   // 打印出13个字符 //转义字符是一个字符  \32-- 32是两个8进制字符
//	return 0;
//}
//int main()
//{
//	printf("c:\\test\\32\\test.c");   // "\\"双斜杠 防止被转义
//	/*printf("%c\n", '\'');
//	printf("%s\n", "\"");*/
//	return 0;
//}

//int main()
//{
//	printf("abc");
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//strlen-string lenght-计算字符长度
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"--'a,'b','c','\0'--'\0'为字符串的结束标志
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//}


//#include <stdio.h>
 //4.枚举常量
//枚举-一一列举
//例如性别，三原色，星期，月份
//枚举关键 —enum
//enum  Color
//{
//	YELLOW,
//	RED,
//	BLUE
//
//};
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//
//};
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}
//2.const 常变量
//int main()
//{
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	int arr[n] = { 0 };
//	//const - 常属性
//	//const 修饰的常变量
//	//const int num = 4;
//	//printf("%d\n",num);
//	//num = 8;//num=4已经是常量，不能改变
//	//printf("%d\n", num);
//	return 0;
//
//}
//3.#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX];
//	printf("%d\n", MAX);
//	return 0;
//}

//test_3_06.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//
//#include <stdio.h>
//std—standard input output 
//int main()
//{
//    int arr[10] = {0};
//    return 0;
   /* int num = 0;
    printf("num=%d\n", num);
    return 0;*/
    //}


    //int main()  //主函数—程序的入口--全局变量定义在代码块之外的
    //{                              
                                  //这里完成任务

        //printf("hello world\n");  //在屏幕上输出内容，打印函数
       // char ch = 'A';          //内存
        //printf("%c\n", ch);      //%c -- 打印字符格式的数据
        //short int -短整型
        //int -整型
        //short age = 20;    2^16-1=65535//向内存申请2个字节存放20
        // float weight = 95.bf;//向内存申请4个字节。存放小数
        //printf("%d\n", age);      //%d -- 打印字符格式的数据
        //long 长整型
        //long num = 100;
        //float f = 5.0;
        //printf("%f\n", f);
        //printf("%d\n", a);
       /* int num1 = 0;
        int num2 = 0;
        int sum = 0;*/
        //C语言语法规定，变量要定义在当前代码块的最前面
        //输入数据-使用输入函数scanf
       // scanf("%d%d", &num1, &num2);  //取地址符号&
        //sum = num1 + num2;
        //printf("sum =%d\n", sum);
        //return 0;                 
    //}  //库函数—C语言本身提供给我们使用的函数
       //别人的东西—打招呼
       //#include

    //int 是整型的意思
    //main前面的int表示main函数用返回一个整数型
    // 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
    // 调试程序: F5 或调试 >“开始调试”菜单

    // 入门使用技巧: 
    //   1. 使用解决方案资源管理器窗口添加/管理文件
    //   2. 使用团队资源管理器窗口连接到源代码管理
    //   3. 使用输出窗口查看生成输出和其他消息
    //   4. 使用错误列表窗口查看错误
    //   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
    //   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件#



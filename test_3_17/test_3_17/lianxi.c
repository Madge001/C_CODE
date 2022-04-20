#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.从大到小输出数字
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//scanf("%d%d%d", &a, &b, &c);
//	
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d %d\n", a, b, c);
//
//	return 0;
//}

//练习二：打印三的倍数
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1;i <= 100; i++)
//	{
//		if(i%3==0)
//			printf("%d ", i);
//	}
//	return 0;
//}

// 练习三:打印arr1
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1 - 1);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令得一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//练习四：求两个数的最大公约数
//辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n) {
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//联系五:打印1000到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否是闰年
//		//普通年份能被4整除并且不能被100整除是闰年
//		//世纪年份能被400整除是闰年
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//简化
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//练习六：打印100-200的素数；
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否是素数
// 素数只能整除1和它本身
//			//素数判断规则：1.试除法
//			//产生2->i-1
//		/*int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i) */ //
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)//sqrt是一个数学库函数
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i < 201; i += 2)
//	{
//		if ((i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0) && (i%11!=0)&& (i % 13 != 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//练习六：编写程序数一下1到100的所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//9 19 29 39 49 59 69 79 89 99 
//		{
//			printf("%d ", i);
//			count++;
//		}
//	    if(i / 10 == 9)91 92 93 94 95 96 97 98 99
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//练习七:分数求和：计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//练习八：求十个数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//保证所有的整数(正，负)都可以比较
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数=数组长度除以单位长度
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//练习九：乘法口诀表。
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//3.24日:猜数字游戏：电脑会生成一个随机数，猜他生成的随机数
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("****************************\n");
//	printf("******1. play   0. exit  ***\n");
//	printf("****************************\n");
//}
//void game()
//{
//	//1.生成一个1-100之间随机数
//	int guess = 0;
//	int ret = 0;
//	ret=rand()%100+1;//取模生成的是0-99的数+1到100
//	//printf("%d\n", ret);
//	while (1) {
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else {
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("结束游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system)-执行系统命令的
//
//	system("shutdown -s -t 60");
//	printf("请注意，你的电脑在1分钟内关机，如果输入：你是猪，就取消关机\n请输入>:");
//again:
//	scanf("%s", &input);
//	if (strcmp(input, "你是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system)-执行系统命令的

	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入：你是猪，就取消关机\n请输入>:");
		scanf("%s", &input);
		if (strcmp(input, "你是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	
	return 0;

}
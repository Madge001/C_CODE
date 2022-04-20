#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//void test(int x)
//{
//	x = 1024;
//	printf("test函数内部 x=%d\n", x);
//}
//int main()
//{
//	
//	int x = 1;
//	printf("调用test前 x=%d\n", x);
//	test x;
//	printf("调用test后 x=%d\n", x);
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("三次均错误，退出程序\n");
//	return 0;
//
//}
//二分查找法*******
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	int left= 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else {
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//阶乘相加
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	for ( n= 1; n <= 10; n++)
//	{
//
//		ret = 1;//得保证ret 每次从1开始
//		for (i = 1; i <= n; i++)//i=2
//		{
//			ret = ret * i;//1=1*1=1;1*1*2=2;1*1*2*3=6;.....
//		}
//		sum = sum + ret;
//	}
//		
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}

//计算n的阶乘；
//int main()
//{
//	int n = 0;
//	int j = 1;
//	int i = 0;
//	scanf("%d", &n);//指输入n
//	for (i = 1; i <= n; i++)
//	{
//		j = i * j;
//	}
//	printf("j=%d\n", j);
//	return 0;
//}

//int main()
//{
//	int n = 300;
//	int i = 1;
//	for (i=1;i<= n;i++)
//	{
//		printf("I love you %d\n", i);
//		
//	}
//	printf("I love you more than %d\n", n);
//	return 0;
//}
//int main()
//{
//	//变种2
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	int j = 0;
//	int i = 0;
//	for (i=0; i <10; i++)
//	{
//		for (j=0;j < 10;j++)//j=0不可随便省略；
//		{
//			printf("hehe\n");
//		}
//	}
//return 0;
	
//}
//int main()
//{
//	int ch = 0;
//
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOf-end of file 文件结束标志  ==-1
//	while (ch=getchar() !=  EOF)
//	{
//		putchar(ch);
//	}
//int ret = 0;
//int ch = 0;
//char password[20] = {0};
//printf("请输入密码:>");
//scanf("%s", password);
//缓冲区还有一个'\n'
//读取'\n'
//getchar();
//while ((ch = getchar()) != '\n')   //
//{
//	;
//}
//printf("请确认(Y/N):>");
//ret = getchar();
//if (ret == 'Y')
//{
//	printf("确认成功\n");
//}
//else
//{
//	printf("放弃确认\n");
//}
//	return 0;
//}

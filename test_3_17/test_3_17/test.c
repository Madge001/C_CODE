#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//void test(int x)
//{
//	x = 1024;
//	printf("test�����ڲ� x=%d\n", x);
//}
//int main()
//{
//	
//	int x = 1;
//	printf("����testǰ x=%d\n", x);
//	test x;
//	printf("����test�� x=%d\n", x);
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("���ξ������˳�����\n");
//	return 0;
//
//}
//���ֲ��ҷ�*******
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	int left= 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//�׳����
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
//		ret = 1;//�ñ�֤ret ÿ�δ�1��ʼ
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

//����n�Ľ׳ˣ�
//int main()
//{
//	int n = 0;
//	int j = 1;
//	int i = 0;
//	scanf("%d", &n);//ָ����n
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
//	//����2
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
//		for (j=0;j < 10;j++)//j=0�������ʡ�ԣ�
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
//	//EOf-end of file �ļ�������־  ==-1
//	while (ch=getchar() !=  EOF)
//	{
//		putchar(ch);
//	}
//int ret = 0;
//int ch = 0;
//char password[20] = {0};
//printf("����������:>");
//scanf("%s", password);
//����������һ��'\n'
//��ȡ'\n'
//getchar();
//while ((ch = getchar()) != '\n')   //
//{
//	;
//}
//printf("��ȷ��(Y/N):>");
//ret = getchar();
//if (ret == 'Y')
//{
//	printf("ȷ�ϳɹ�\n");
//}
//else
//{
//	printf("����ȷ��\n");
//}
//	return 0;
//}

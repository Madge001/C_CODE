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
//	int sum = Add(a, b);//Add�ǿ⺯��
//	printf("%d\n", sum);
//	return 0;
//}
// 
//int main()
//{
//	//strcpy--�ַ�������(char*destination,const char*source);*��һ����ַ��Ŀ�ĵ�ַ��Դ��ַ
//	//strlen--�ַ�������
//	char arr1[] = "bit";
//	char arr2[] = "#######";
//	strcpy(arr2, arr1);//����ʱ��βҲ������ȥ
//	printf("%s\n", arr2);
//	
//	return 0;
//}
//int main()
//{
//	//memset--mem-�ڴ� set-����
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//Ŀ�꣺�滻���ݣ��滻����
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

//�β�ʵ����֮����ʵ��ʵ�ε�һ����ʱ����
//Swap1�����������
//void swap1(int x, int y)//int x��int y�����β�
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//Swap2(int* pa, int* pb)//*pa *pb��ָ�����
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;//a,b����ʵ��
//	int b = 20;
//	//int* pa = &a;
//	//int* pb = &b;
//	Swap2(&a, &b);//
//	//swap1(a,b);//ֻ�轻�����޷���ֵ
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
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����õ�ַ
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
//	printf("%d", printf("%d", printf("%d", 43)));//printf�Ǵ�ӡ�ַ��ĸ�����
//	return 0;
//
//}

//ͷ�ļ���������Դ�ļ��Ŷ���
//int Add(int x, int y);//��������������������ĺ����ſ���
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


//�����ĵݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//stack overflow ջ���

//����
//int main()
//{
//	//int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0��
//	//char arr2[5] = { '3','5' };
//	//char arr3[5] = "ab";//Ҳ�ǿ��Ե�
//	char arr4[] = "abcdef";
//	//printf("%d\n", sizeof(arr4));//7 sizeof�Ǽ���arr4��ռ�ռ�Ĵ�С
//	//sizeof ������������飬���͵Ĵ�С-��λ���ֽ�-������
//
//	//printf("%d\n", strlen(arr4));//6  strlen���ַ������ȵ�\0ֹͣ����\0�����ȥ
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
//1//strlen�ҵ���\0��û�еĻ���������ֵ
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";//�±��0��ʼ
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ĵ�С���Լ������
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ĵ�С���Լ������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}//�������ڴ�����������ŵ�
//	return 0;
//}

//��ά����
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};//��������//���ڲ���ȫ��ʼ����һ�з����ٷŵڶ���
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
//	//int arr[2][4] = { {1,2,3,4},{5,6,7,8} };//�п���ʡ�ԣ��в���ʡ��
//
//	return 0;
//}
//��ά�����ʹ��
//�±���Ȼ��0��ʼ

//ð������
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int flag = 1;//������һ�������Ѿ�����
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
//			break;//break ���õ���ǰ���forѭ��
//		}
//
//	}
//}
//int main()
//{
//	int arr[] = { 3,4,8,7,5,0,1,2,6,5 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	bubble_sort(arr,sz);//ð������
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
	//1.����������sizeof(������)-��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
	//2.&�������������������������飬&��������ȡ��������������ĵ�ַ
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//��������￪ʼ��ȡ������������ĵ�ַ
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr+1);
	//����������������Ԫ�صĵ�ַ��
	return 0;
}
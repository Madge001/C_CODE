#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0X11223344;
//	int* pa = &a;
//	*pa = 0;//00 00 00 00
//	char* pc = &a;
//	*pc = 0;//00 33 22 11
//	//ִ�����;�����ָ����н����ò�����ʱ����ż�����ֽڵĴ�С
//	
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	int a = 0X11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pa+1);
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�صĵ�ַ
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ��Ϊ���ֵ
//}

//ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* pa = &a;//1.��ʼ��
//	//int* p = NULL;//2.NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)//4.ָ��ʹ��ǰ�����Ч��
//	{
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i + 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p=p + 1;
//	}*/
//	for (i + 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		*p -= 2;//ָ����ԼӼ�����
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", & arr[9] - &arr[0]);//ָ��-ָ��=�м��Ԫ�ظ���
//	&arr[9] - &ch[0];//����������д.
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0');
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen-���ַ�������
//	//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�-��ʽ2
//	char arr[] = "bit";//bit\0
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr-&������-������������Ԫ�صĵ�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//	//2��sizeof(arr)-sizeof(������)-��������ʾ����������-sizeof(������)���������������Ĵ�С����λ���ֽ�
//
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0};
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p + i));
//	}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p   ======   %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ�����
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int arr1[10] = {};
//	int* arr2[3] = {&a,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));//*�����ò���
//	}
//	return 0;
//
//}

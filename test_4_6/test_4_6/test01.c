#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//int a= 5%2;//��2��1
//	double a = 5/ 2.0;//������һ���Ǹ�����
//	printf("a=%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	a >> 1;//����һλ
//	return 0;
//}

//��ϰ1����������ֵ�����õ���������
//int main()
//{
//����Ӧ���õķ���
//	int tmp = 0;
//	int a = 6;//011
//	int b = 7;//101
//	tmp = a;
//	a = b;
//	b = tmp;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//���ķ���
//	a = a ^ b;//110=6
//	b = a ^ b;//101=011
//	a = a ^ b;//011=101
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//��ϰ2����һ�������洢���ڴ��ж�������1�ĸ�����
//int main()
//{
//	
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�Ĳ������м���һ
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))//����һλ��ĩλ��һ����
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
//	a+=2://���ϸ�ֵ��:+=,-=;*=;/=;%=;>>=;<<=;&=;|=;^=
//	return 0;
//
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2  sizeof��ı��ʽ��ֱ�������
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
//	////~ ��λȡ��
//	//printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(����),����ʽ��ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])//���鴫�Σ�����ȥ������Ԫ�ص�ַ.��ַ��ָ����գ�ָ����4���ֽڵ�
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//��4��ָ���С
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
// &��λ��   |��λ��
//&&�߼���  ||�߼���
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
//	a = a++ && ++b && d++;//�߼��������ֻҪ������Ǽ�(Ϊ0)���Ͳ��ټ�������Ĳ�����ӡ0234
//	//i = a++ || ++b || d++;//a++Ϊ2Ϊ�棬��߲�����.
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//����������
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
//	//b = (a > 5 ? 3 : -3);//(exp1?exp1:exp3)��exp1Ϊ�� exp2���������exp3���
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("a=%d b=%d c=%d ", a, b, c);
//	//if (a = b + 1, c = a / 2, d > 0);//�ж���Ҳ���ö��ű��ʽ
//	return 0;
//}

//����һ���ṹ������-ѧ��struct stu
//struct Stu
//{
//	char name[20];
//	int age; 
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",20, "201941619" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);//��printf("%s\n", (*ps).name)��һ����
//	//�ṹ��ָ��->����
//	//printf("%s\n", (*ps).name);//�����ò���
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
//	//11111111111111111111111110000010--����
//	//11111111111111111111111110000001--����
//	//00000000000000000000000001111110--ԭ��
//	return 0��
//}

//��������
//ʵ��
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



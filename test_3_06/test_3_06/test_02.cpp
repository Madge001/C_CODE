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
            // break;//��ʱ��ӡ��1 2 3 4,��������ѭ��
            continue;//������ѭ��,��ֹ����ѭ���ģ�continue����Ĵ��벻����ִ�У�ֱ�ӵ�while�����жϲ��֡�
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
//        switch (n)//��ʱn=2,��ִ��case1
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
//    switch (day)//switch������������
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("������\n");
//        break;
//    case 6:
//    case 7:
//        printf("��Ϣ��\n");
//        break;
//    default://Ĭ��
//        printf("�������\n");
//    }
//    return 0;
//}
   
    //case 1://caseҲ���������ͳ������ʽ��
    //    printf("����1\n");//break��������switch��䣻
    //    break;
    //case 2:
    //    printf("����2\n");
    //    break;
    //case 3:
    //    printf("����3\n");
    //    break;
    //case 4:
    //    printf("����4\n");
    //    break;
    //case 5:
    //    printf("����5\n");
    //    break;
    //case 6:
    //    printf("����6\n");
    //    break;
    //case 7:
    //    printf("����7\n");//switch�������룬break�����������
    //    break;

    
 

//int main()
//{
//    int i = 1;
//    while (i <= 100)
//    {
//        printf("%d ", i);//����
//        i += 2;
//    }
//    //while (i<=100)
//    //{
//    //    //if (i % 2 == 1)//����
//    //    if(i%2!=0//��һ
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
//            printf("hehe\n");//�����ŵ�λ�ú���Ҫ
//    return 0;
//}
//int main()
//{
//    int age = 91;
//    if (age < 18)
//        printf("δ����\n");
//    else if (age >= 18 && age < 28)
//        printf("����\n");
//    else if (age >= 28 && age < 50)
//        printf("׳��\n");
//    else if (age >= 50 && age < 90)
//        printf("����\n");
//    else
//        printf("�ϲ���\n");
//    /*if (age < 18)
//        printf("δ����\n");
//    else
//        printf("������\n");*/
//    return 0;
//}
//static int g_val = 2020; //ȫ�ֱ���
//����һ������

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
//	//���������Ԫ�ظ���
//	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);



//	int a = 10;
//
//	printf("%d\n",sizeof (a) );//sizeof ������Ǳ�����������ռ�Ŀռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(int)); 
//	return 0;
//}
//int main()
//{
//	/*��Ŀ��������
//	˫Ŀ������
//	��Ŀ������*/
//	a = a + 10;
//	a += 10;  //���ϸ�ֵ��
//	/*(2����)λ����
//	& ��λ��
//	| ��λ��
//	^ ��λ���*/
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};  //����һ�����10���������ֵ�����
//	//char ch[20]; //�ַ���������
//	//float arr2[5];
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]); //���������±����Ԫ��
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
	printf("�������\n");
	while (line<20000)
	{ 
		printf("��һ�д���: %d\n",line);
		line++;
	}
	if (line >= 20000);
		printf("��offer");
	

	return 0;
}*/
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer");
//	else
//		printf("������");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));   // ��ӡ��13���ַ� //ת���ַ���һ���ַ�  \32-- 32������8�����ַ�
//	return 0;
//}
//int main()
//{
//	printf("c:\\test\\32\\test.c");   // "\\"˫б�� ��ֹ��ת��
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
//	printf("%d\n", strlen(arr2));//strlen-string lenght-�����ַ�����
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"--'a,'b','c','\0'--'\0'Ϊ�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//}


//#include <stdio.h>
 //4.ö�ٳ���
//ö��-һһ�о�
//�����Ա���ԭɫ�����ڣ��·�
//ö�ٹؼ� ��enum
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
//2.const ������
//int main()
//{
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	int arr[n] = { 0 };
//	//const - ������
//	//const ���εĳ�����
//	//const int num = 4;
//	//printf("%d\n",num);
//	//num = 8;//num=4�Ѿ��ǳ��������ܸı�
//	//printf("%d\n", num);
//	return 0;
//
//}
//3.#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX];
//	printf("%d\n", MAX);
//	return 0;
//}

//test_3_06.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//
//
//#include <stdio.h>
//std��standard input output 
//int main()
//{
//    int arr[10] = {0};
//    return 0;
   /* int num = 0;
    printf("num=%d\n", num);
    return 0;*/
    //}


    //int main()  //����������������--ȫ�ֱ��������ڴ����֮���
    //{                              
                                  //�����������

        //printf("hello world\n");  //����Ļ��������ݣ���ӡ����
       // char ch = 'A';          //�ڴ�
        //printf("%c\n", ch);      //%c -- ��ӡ�ַ���ʽ������
        //short int -������
        //int -����
        //short age = 20;    2^16-1=65535//���ڴ�����2���ֽڴ��20
        // float weight = 95.bf;//���ڴ�����4���ֽڡ����С��
        //printf("%d\n", age);      //%d -- ��ӡ�ַ���ʽ������
        //long ������
        //long num = 100;
        //float f = 5.0;
        //printf("%f\n", f);
        //printf("%d\n", a);
       /* int num1 = 0;
        int num2 = 0;
        int sum = 0;*/
        //C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
        //��������-ʹ�����뺯��scanf
       // scanf("%d%d", &num1, &num2);  //ȡ��ַ����&
        //sum = num1 + num2;
        //printf("sum =%d\n", sum);
        //return 0;                 
    //}  //�⺯����C���Ա����ṩ������ʹ�õĺ���
       //���˵Ķ��������к�
       //#include

    //int �����͵���˼
    //mainǰ���int��ʾmain�����÷���һ��������
    // ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
    // ���Գ���: F5 ����� >����ʼ���ԡ��˵�

    // ����ʹ�ü���: 
    //   1. ʹ�ý��������Դ�������������/�����ļ�
    //   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
    //   3. ʹ��������ڲ鿴���������������Ϣ
    //   4. ʹ�ô����б��ڲ鿴����
    //   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
    //   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�#



#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.�Ӵ�С�������
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

//��ϰ������ӡ���ı���
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

// ��ϰ��:��ӡarr1
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
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��ϰ�ģ��������������Լ��
//շת�����
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

//��ϵ��:��ӡ1000��2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�������
//		//��ͨ����ܱ�4�������Ҳ��ܱ�100����������
//		//��������ܱ�400����������
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
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//��
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//��ϰ������ӡ100-200��������
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�������
// ����ֻ������1��������
//			//�����жϹ���1.�Գ���
//			//����2->i-1
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
//		for (j = 2; j < sqrt(i); j++)//sqrt��һ����ѧ�⺯��
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
//��ϰ������д������һ��1��100�����������г��ֶ��ٸ�����9
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
//��ϰ��:������ͣ�����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ
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
//��ϰ�ˣ���ʮ�����е����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//��֤���е�����(������)�����ԱȽ�
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���=���鳤�ȳ��Ե�λ����
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
//��ϰ�ţ��˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//3.24��:��������Ϸ�����Ի�����һ����������������ɵ������
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
//	//1.����һ��1-100֮�������
//	int guess = 0;
//	int ret = 0;
//	ret=rand()%100+1;//ȡģ���ɵ���0-99����+1��100
//	//printf("%d\n", ret);
//	while (1) {
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else {
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��>:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("������Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system)-ִ��ϵͳ�����
//
//	system("shutdown -s -t 60");
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//again:
//	scanf("%s", &input);
//	if (strcmp(input, "������") == 0)
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
	//system)-ִ��ϵͳ�����

	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	
	return 0;

}
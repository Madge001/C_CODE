#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//������ҵ
//int main()
//{
//	{
//		int a = 10;
//	}
    //aֻ�����ڸ�������ڲ�ʹ��
//	printf("%d\n", a);
//	return 0;
//}l

//���飺��ϰ10
//����ĳ�ʼ��������Ĵ�ӡ�ͷ�ת
//void Init(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        arr[i] = 0;
//    }
//}
//void Print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left<right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    //Init(arr,sz);//�������ʼ��0
//    Print(arr, sz);
//    Reverse(arr,sz);
//    Print(arr, sz);
//    return 0;
//}

//��ϰ11�����齻��
//int main()
//{
//    int arr1[] = { 1,3,5,7,9 };
//    int arr2[] = { 2,4,6,8,10 };
//    int tmp = 0;
//    int i = 0;
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    for (i = 0; i < sz; i++)
//    {
//        tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;//char*ֻ�ܷ���һ���ֽ�.
//    printf("%x\n", a);
//    return 0;
//}
//int i = 0;
//int main()
//{
//    i--;//-1.
//    if (i > sizeof(i))//sizeof()-�������/������ռ�ڴ�Ĵ�С >=0 ���޷�����
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
 //return 0;
//}

//int main()
//{
//    int a, b, c;
//    a = 5;
//    c = ++a;
//    b = ++c, c++, ++a, a++;
//    b += a++ + c;
//    printf("a = % d b = % d c = % d\n", a, b, c);
//    return 0;
//}

//ͳ�ƶ�������һ�ĸ���
//int count_bit_one(unsigned int n)
//{
//    int count = 0;
//    while (n)
//    {
//        if (n % 2 == 1)
//        {
//            count++;
//        }
//        n = n / 2;
//    }
//    return count;
//
//int count_bit_one(int n)
//{
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((n >> i) & 1 == 1)
//            count++;
//    }
//    return count;
//}
//��������n=n&(n-1)
//���Ч�����
//int count_bit_one(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    //������ԭ�룬���룬���룬�����һ
//    int a = 0;
//    scanf("%d", &a);
//    //дһ��������a�Ķ�����(����)��ʾ���м���һ
//    int count = count_bit_one(a);
//    //13
//    //00000000000000000000000000001101
//    printf("count=%d\n", count);
//    return 0;
//}

//������int�����Ķ����Ʊ���У��ж��ٸ�λ��ͬ
//int get_diff_bit(int m, int n)
//{
//    int tmp = m ^ n;//m��n�����1�ĸ�������λ�Ĳ�ͬ
//    //return count_bit_one(tmp);
//    int count = 0;
//    while (tmp)
//    {
//        tmp = tmp & (tmp - 1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int count=get_diff_bit(m, n);
//    printf("count=%d\n", count);
//    return 0;
//}

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//void print(int m)
//{
//    00000000000000000000000000001100
//    int i = 0;
//    printf("����λ:\n");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (m >> i) & 1);
//    }
//    printf("\n");
//    printf("ż��λ:\n");
//    for (i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (m >> i) & 1);
//    }
//    printf("\n");
//}
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    print(m);
//    return 0;
//}

//��������������ʹ����ʱ���������
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("a=%d b=%d ", a, b);
//    return 0;
//}

//��ָ���ӡ����
//void print(int* p, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//int main()
//{
//    int arr[] = { 1,5,3,4,5,6,8,88,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print(arr, sz);
//    return 0;
//}

//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}

//��ӡһ���Լ��������ĳ˷��ھ���
//void print_table(int n)
//{
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-3d ", i, j, i * j);//-3dָ�������λ
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print_table(n);
//    return 0;
//}

//�ַ������򣨵ݹ�ʵ�֣����������ַ����е��ַ���������
//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//}
//void reverse_string(char arr[])
//{
//    /*int left = 0;
//    int right = my_strlen(arr) - 1;
//    while (left<right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;*/
//    char tmp = arr[0];
//    int len = my_strlen(arr);
//    arr[0] = arr[len - 1];
//    arr[len - 1] = '0';
//    if (my_strlen(arr +1) >= 2)
//        reverse_string(arr + 1);
//    arr[len - 1] = tmp;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    reverse_string(arr);
//    printf("%s\n", arr);
//    return 0;
//}

//����һ���Ǹ���������DigitSum(n),����������֮��,�ݹ�
//int DigitSum(unsigned int num)
//{
//    if (num > 9)
//    {
//        return DigitSum(num / 10) + num % 10;
//    }
//    else
//    {
//        return num;
//    }
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%d", &num);
//    int ret = DigitSum(num);
//    printf("ret=%d\n", ret);
//    return 0;
//}

//�õݹ�ʵ��n��k�η�
int Pow(int n, int k)
{
    //n^k=n*n^(k-1)
    if (k < 0)
        return (1.0 / (Pow(n, -k)));
    else if (k == 0)
        return 1;
    else
        return Pow(n, k);
}
int main()
{
    int n = 0;
    int k = 0;
    scanf("%d%d", n, k);
    double ret=Pow(n,k);
    printf("ret=%lf\n", ret);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  MAXS 10


int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	int num;
	for (i;i<10;i++)
	{
		num = rand();
		printf("%d\n", num);
	}
	return 0;
}

int main9()
{
	char a[] = {'a','b','c'};//�ַ�����
	char b[10] = { 'a','b','c','d','\0' };// �ַ���
	char c[10] = { 'a','b','c',0 };//�ַ��� ,û�и�ֵ���Զ���ʼ��Ϊ0
	printf("a=%s\n", a);//�����abc����,û�н�����
	printf("b=%s\n", b);//����\0����0�͵����ǽ�����
	printf("c=%s\n", c);
	char d[] = "abcd";//�ַ�������ĩβ�Զ�����\0
	printf("d=%s\n", d);
	printf("%d\n", sizeof(d));//���5
	return 0;
}

int main7(int argc,char *argv[])
{
	//��ά�����ʼ����ʽһ
	/*int a[3][5] = {
						{1,2,3,4,5},
						{7,8,5,3,1},
						{0,9,1,3,2}
						};*/
	//��ά�����ʼ����ʽ��
	int a[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int len = sizeof(a) / sizeof(a[0]);
	int n = sizeof(a[0]) / sizeof(a[0][0]);
	printf("%d\n", len);
	printf("%d\n", n);
	for (int i=0;i<len;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}

	printf("%d", a);
	return 0;
}
int main6()
{
	int arr[] = { 21,2,3,1,0,11,8 };
	int n = sizeof(arr) / sizeof(int) - 1;
	int tmp;
	for (int i=0;i<n+1;i++)
	{
		for (int j=i;j<n;j++)
		{
			if (arr[i] > arr[j + 1]) {
				tmp = arr[i];
				arr[i] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i=0;i<n+1;i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

int main5()
{
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(a[0]) - 1;//��ֹ����Խ��
	printf("%d\n", n);
	int tmp;
	for (int i=0;i<sizeof(a)/sizeof(a[0])/2;i++)
	{
		tmp = a[n -i];
		a[n - i] = a[i];
		a[i] = tmp;
	}

	for (int i=0;i<sizeof(a) / sizeof(a[0]);i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
int main4()
{
	int arr[10];
	const int  n = 10;
	//int a[n];
	int a[MAXS] = {3,5,1,7,9,0,11};
	//a = 20; ��������һ������,����������Ԫ�ص��׵�ַ
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%d\n", sizeof(a));//����Ĵ�СΪ����Ԫ�صĸ���*����������ռ���ڴ��С
	int nx = sizeof(a) / sizeof(int);//�����Ԫ�صĸ���
	printf("%d\n", nx);
	int s = 10;
	int d = 9;
	int f = 20;
	int g = (s > d ? s : d) > f ? (s > d ? s : d) :f ;
	printf("%d\n", g);

	int max = a[0];
	printf("%d\n", max);
	for (int i=1;i<sizeof(a)/sizeof(int);i++)
	{
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("%d", max);
	return 0;
}
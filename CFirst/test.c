#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100
int main2() {
	int a=4, b=3, c;
	c = a + b;
	printf("%d\n", c);
	extern int d; //����һ������,����û�б�����,û���ڴ�洢�ռ�,���ʱ���ܸ�ֵ
	//d = 10;
	const int x = 10;
	//x = 100; //const���εı���Ϊһ������,ֵ���ܱ��ı�
	int y = x;
	y = 200;
	printf("%o\n", y);
	//char j = 'abc';// ������
	//printf("%c", j); -> c
	float q = 100.9f;
	printf("%f\n", q);
	double w = 1000.9;
	printf("%lf\n", w);

	char m;
	printf("�������ַ�m:");
	scanf("%c", &m); //��������Ĭ�ϰ���������ݶ�ȡ��������,printf��ʱ��ӻ�����ȡ
	printf("%d\n",m);
	char u;
	printf("�������ַ�u:");
	scanf("%c", &u);
	printf("%d\n", u);
	char k;
	printf("�������ַ�k:");
	scanf("%c", &k);
	printf("%d\n", k);
	u = getchar();
	char g;
	printf("�������ַ�l:");
	g = getchar();
	printf("%d",g);
	return 0;
}
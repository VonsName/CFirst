#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100
int main2() {
	int a=4, b=3, c;
	c = a + b;
	printf("%d\n", c);
	extern int d; //声明一个变量,但是没有被定义,没有内存存储空间,这个时候不能赋值
	//d = 10;
	const int x = 10;
	//x = 100; //const修饰的变量为一个常量,值不能被改变
	int y = x;
	y = 200;
	printf("%o\n", y);
	//char j = 'abc';// 不合理
	//printf("%c", j); -> c
	float q = 100.9f;
	printf("%f\n", q);
	double w = 1000.9;
	printf("%lf\n", w);

	char m;
	printf("请输入字符m:");
	scanf("%c", &m); //编译器会默认把输入的数据读取到缓冲区,printf的时候从缓冲区取
	printf("%d\n",m);
	char u;
	printf("请输入字符u:");
	scanf("%c", &u);
	printf("%d\n", u);
	char k;
	printf("请输入字符k:");
	scanf("%c", &k);
	printf("%d\n", k);
	u = getchar();
	char g;
	printf("请输入字符l:");
	g = getchar();
	printf("%d",g);
	return 0;
}
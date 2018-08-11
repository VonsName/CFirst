#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main16()
{
	char buf[] = "  098po123avb";
	int num = atoi(buf);//提取字符串中的数字,直到遇到非数字以及\0结束
	printf("%d\n", num);
	num=atof(buf);
	printf("%d\n", num);
	return 0;
}


int main15()
{
	char buf[] = "mike marry jack";
	char *buf1=strtok(buf, " ");//切割字符串,返回一个匹配的元素的首地址
	printf("buf1=%s\n", buf1);

	char *buf2 = strtok(nullptr, " ");
	printf("buf2=%s\n", buf2);

	char *buf3 = strtok(nullptr, " ");
	printf("buf3=%s\n", buf3);
	//strtok会破坏原来字符串的结构
	printf("buf=%s\n", buf);
	return 0;
}


int main14()
{
	char buf[] = "abcdf";
	//在buf中查找d,有就返回d所在的地址,么有就返回null
	char *p = strstr(buf, "bc");
	if (p == nullptr)
	{
		printf("查询失败\n");
	}
	else {
		printf("p=%s\n", p);
	}
	return 0;
}


int main13()
{
	char buf[] = "abcdf";
	//在buf中查找d,有就返回d所在的地址,么有就返回null
	char *p=strchr(buf, 'x');
	if (p==nullptr)
	{
		printf("查询失败\n");
	}
	else {
		printf("p=%s\n",p);
	}
	return 0;
}

int main12()
{
	int a, b, c;
	/*printf("亲输入a b c");
	scanf("%d %d %d", &a, &b, &c);
	printf("a=%d b=%d c=%d", a, b, c);*/

	//char buf[]="1 2 3";
	//
	//sscanf_s(buf, "%d %d %d", &a, &b, &c);
	//sscanf(buf, "%d %d %d", &a, &b, &c);
	//printf("a=%d b=%d c=%d", a, b, c);


	char str[] = "a=4 b=5 c=6";
	//将str字符数组对应的变量的值提取出来到定义的变量中
	sscanf(str, "a=%d b=%d c=%d", &a, &b, &c);
	printf("a=%d b=%d c=%d\n", a, b, c);

	char tmp[] = "abc def xyz";
	char m[10], n[10], k[10];
	sscanf(tmp, "%s %s %s", m, n, k);
	printf("m=%s n=%s k=%s\n", m, n, k);
	return 0;
}
int main11()
{
	int x = 10;
	char a = 'a';
	char buf[] = "hello";
	char dest[100];
	//sprintf 把字符串连接到dest字符数组中
	sprintf(dest, "x=%d,a=%c,buf=%s", x, a, buf);
	printf("%s", dest);
	return 0;
}
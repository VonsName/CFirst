#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main16()
{
	char buf[] = "  098po123avb";
	int num = atoi(buf);//��ȡ�ַ����е�����,ֱ�������������Լ�\0����
	printf("%d\n", num);
	num=atof(buf);
	printf("%d\n", num);
	return 0;
}


int main15()
{
	char buf[] = "mike marry jack";
	char *buf1=strtok(buf, " ");//�и��ַ���,����һ��ƥ���Ԫ�ص��׵�ַ
	printf("buf1=%s\n", buf1);

	char *buf2 = strtok(nullptr, " ");
	printf("buf2=%s\n", buf2);

	char *buf3 = strtok(nullptr, " ");
	printf("buf3=%s\n", buf3);
	//strtok���ƻ�ԭ���ַ����Ľṹ
	printf("buf=%s\n", buf);
	return 0;
}


int main14()
{
	char buf[] = "abcdf";
	//��buf�в���d,�оͷ���d���ڵĵ�ַ,ô�оͷ���null
	char *p = strstr(buf, "bc");
	if (p == nullptr)
	{
		printf("��ѯʧ��\n");
	}
	else {
		printf("p=%s\n", p);
	}
	return 0;
}


int main13()
{
	char buf[] = "abcdf";
	//��buf�в���d,�оͷ���d���ڵĵ�ַ,ô�оͷ���null
	char *p=strchr(buf, 'x');
	if (p==nullptr)
	{
		printf("��ѯʧ��\n");
	}
	else {
		printf("p=%s\n",p);
	}
	return 0;
}

int main12()
{
	int a, b, c;
	/*printf("������a b c");
	scanf("%d %d %d", &a, &b, &c);
	printf("a=%d b=%d c=%d", a, b, c);*/

	//char buf[]="1 2 3";
	//
	//sscanf_s(buf, "%d %d %d", &a, &b, &c);
	//sscanf(buf, "%d %d %d", &a, &b, &c);
	//printf("a=%d b=%d c=%d", a, b, c);


	char str[] = "a=4 b=5 c=6";
	//��str�ַ������Ӧ�ı�����ֵ��ȡ����������ı�����
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
	//sprintf ���ַ������ӵ�dest�ַ�������
	sprintf(dest, "x=%d,a=%c,buf=%s", x, a, buf);
	printf("%s", dest);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main09()
{
	char src[] = "hello mike";
	char des[100] = "abc";
	strcat(des, src);//�ַ�������,������ʱ��ҲҪ��ֹ����Խ��,
							//�����ӵ��ַ����鳤�ȱ�����ڵ��������ַ�����Ĵ�С
	printf("%s\n", des);

	char src1[] = "hello mike";
	char des1[100] = "abc";
	strncat(des1, src1, 3);
	printf("%s\n", des1);
	return 0;
}

int main06()
{
	char src[] = "abc";
	char des[] = "abca";
	int a=strcmp(des, src);//=0��ʾ��� �Ƚϵ���ÿһ���ַ���ascii��ֵ -1 ��ʾС��, 1��ʾ����
	a = strncmp(des, src,3);//strncmp ���Ը���ָ�����ַ������Ƚ�,ָ���Ƚ�ǰ��3���ַ�
	printf("%d", a);
	return 0;
}

int main05()
{
	char buf[10] = "abc";
	char des[10];
	strcpy(des, buf);
	printf("des=%s\n", des);
	printf("buf=%s\n", buf);

	char buf1[10] = "abc\0efg";
	char des1[10];
	strcpy(des1, buf1);//����ֱ������\0
	printf("des1=%s\n", des1);
	printf("buf1=%s\n", buf1);

	char buf2[10] = "abc\0efg";
	char des2[10];
	strncpy(des2, buf2,10);
	printf("des2=%s\n", des2+5);
	printf("buf2=%s\n", buf2);

	char buf3[] = "abcdesfdfds";
	char des3[10];
	strcpy(des3, buf3);//���������������Խ�����,des3���ֻ�ܽ��ܿ���9���ַ�,(��һ������\0)
	return 0;
}

int main04()
{
	char buf[] = "hello";
	fputs(buf, stdout);//û�л��� ���
	int len = strlen(buf);//����\0����� ���ټ���������ݵĳ���
	printf("%d\n", len);
	printf("%d\n", sizeof(buf));//�������������\0
	return 0;
}

int main03()
{
	char buf[10]="hello";
	printf("%s\n", buf);
	puts(buf);//�൱��printf,���Զ�����
	return 0;
}

int main02()
{
	char buf[10];
	fgets(buf, sizeof(buf),stdin);//��ȡ��������,�����������ֻȡ��sizeof(buf)-1
	printf("%s", buf);
	return 0;
}

int main01()
{
	char str[10];
	gets_s(str,sizeof(str));//����scanf();
	printf("%s", str);
	return 0;
}
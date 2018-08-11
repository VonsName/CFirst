#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	char buf[10];
	fgets(buf, sizeof(buf),stdin);//获取键盘输入,输入内容最大只取到sizeof(buf)-1
	printf("%s", buf);
	return 0;
}

int main01()
{
	char str[10];
	gets_s(str,sizeof(str));//类似scanf();
	printf("%s", str);
	return 0;
}
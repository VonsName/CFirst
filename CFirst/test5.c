#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main09()
{
	char src[] = "hello mike";
	char des[100] = "abc";
	strcat(des, src);//字符串连接,操作的时候也要防止数组越界,
							//被连接的字符数组长度必须大于等于两个字符数组的大小
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
	int a=strcmp(des, src);//=0表示相等 比较的是每一个字符的ascii码值 -1 表示小于, 1表示大于
	a = strncmp(des, src,3);//strncmp 可以根据指定的字符数来比较,指定比较前面3个字符
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
	strcpy(des1, buf1);//拷贝直到遇到\0
	printf("des1=%s\n", des1);
	printf("buf1=%s\n", buf1);

	char buf2[10] = "abc\0efg";
	char des2[10];
	strncpy(des2, buf2,10);
	printf("des2=%s\n", des2+5);
	printf("buf2=%s\n", buf2);

	char buf3[] = "abcdesfdfds";
	char des3[10];
	strcpy(des3, buf3);//这里拷贝会出现数据越界错误,des3最多只能接受拷贝9个字符,(有一个用作\0)
	return 0;
}

int main04()
{
	char buf[] = "hello";
	fputs(buf, stdout);//没有换行 输出
	int len = strlen(buf);//遇到\0会结束 不再计算后面数据的长度
	printf("%d\n", len);
	printf("%d\n", sizeof(buf));//计算包含结束符\0
	return 0;
}

int main03()
{
	char buf[10]="hello";
	printf("%s\n", buf);
	puts(buf);//相当于printf,会自动换行
	return 0;
}

int main02()
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
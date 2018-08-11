#include <stdio.h>

int main3()
{
	goto Mike;
	char a;
	printf("请输入字符a:");
	a = getchar();//相当于scanf();
	printf("%d", a);
	
Mike:
	printf("333");
	return 0;
}
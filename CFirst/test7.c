#include <stdio.h>
#include <stdlib.h>

int my_str_len(char str[]);

int main()
{

	char buf[] = "abc";
	int len = my_str_len(buf);
	printf("%d\n", len);

	return 0;
}


int my_str_len(char str[]) {
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
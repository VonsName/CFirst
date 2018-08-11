#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main1() {
	int a;
	int b;
	int c;
	//»ã±à
	_asm {
		mov a, 3
		mov b, 4
		mov eax, a
		add eax, b
		mov c, eax
	}
	printf("%d\n", c);
	return 0;
}
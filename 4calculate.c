#include <stdio.h>

int main(void) {
	int x = 150;
	int y = 13;

	printf("x=%d\n", x);
	printf("y=%d\n", y);

	printf("x+y=%d\n", x + y);
	printf("x-y=%d\n", x - y);
	printf("x*y=%d\n", x * y);
	printf("x/y=%d\n", x / y);
	printf("x\%y=%d\n", x % y);
}

/*
/ 기호는 몫만 반환, % 기호는 나머지 반환
*/
#include <stdio.h>

int main(void) {
	int a;
	a = 10;
	printf("%d\n", a);
	printf("변수 a의 메모리 크기는 % d입니다.\n", sizeof(a));
	return 0;
}

/*
정수 하나의 메모리 크기는 4바이트
*/
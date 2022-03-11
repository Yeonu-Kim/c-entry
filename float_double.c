#include <stdio.h>

int main(void) {
	int x = 10;
	float y = 1111111113141.592;
	double z = 1111111113141.592;

	printf("x=%d\n", x);
	printf("y=%.2f\n", y);
	printf("z=%.2f\n", z);

	printf("x가 차지하는 메모리 크기는 %d입니다.\n", sizeof(x));
	printf("y가 차지하는 메모리 크기는 %d입니다.\n", sizeof(y));
	printf("z가 차지하는 메모리 크기는 %d입니다.\n", sizeof(z));
}

/*
float와 double 모두 소수점까지 표현 가능
float의 메모리 크기는 4, double은 8이므로 double이 더 많은 범위 표현 가능
*/
#include <stdio.h>
#include <limits.h>

int main(void) {
	int x = INT_MAX;
	printf("x=%d\n", x);
	printf("x+1=%d\n", x + 1);
}

/*
int로 표현 가능한 최댓값을 넘어서면 오버 플로 발생
-> 최댓값+1=최솟값
*/
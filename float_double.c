#include <stdio.h>

int main(void) {
	int x = 10;
	float y = 1111111113141.592;
	double z = 1111111113141.592;

	printf("x=%d\n", x);
	printf("y=%.2f\n", y);
	printf("z=%.2f\n", z);

	printf("x�� �����ϴ� �޸� ũ��� %d�Դϴ�.\n", sizeof(x));
	printf("y�� �����ϴ� �޸� ũ��� %d�Դϴ�.\n", sizeof(y));
	printf("z�� �����ϴ� �޸� ũ��� %d�Դϴ�.\n", sizeof(z));
}

/*
float�� double ��� �Ҽ������� ǥ�� ����
float�� �޸� ũ��� 4, double�� 8�̹Ƿ� double�� �� ���� ���� ǥ�� ����
*/
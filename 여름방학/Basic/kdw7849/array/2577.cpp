#include<stdio.h>

int main() {
	int A = 0, B = 0, C = 0, result = 0, num[10] = { NULL };
	scanf("%d\n%d\n%d", &A, &B, &C);
	result = A * B * C;
	while (result != 0) {
		num[result % 10]++;
		result = result / 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}

#include<stdio.h>

int main() {
	int N[5001] = { NULL }, K = 0, num = 0, count = 0, A = 0;
	scanf("%d %d", &num, &K);
	for (int i = 1; i <= num; i++) {
		N[i]++;
	}
	for (int i = 1; i <= num; i++) {
		if (i == 1) {
			printf("<");
		}
		count = 0;
		while (count != K) {
			if (N[A] == 1) {
				count++;
				if (count == K && i != num) {
					N[A] = 0;
					printf("%d, ", A);
				}
				else if (count == K && i == num) {
					N[A] = 0;
					printf("%d>", A);
				}
			}
			if (A == num) {
				A = 1;
			}
			else
				A++;
		}
	}
	return 0;
}

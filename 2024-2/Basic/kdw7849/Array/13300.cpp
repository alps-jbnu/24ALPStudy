#include<stdio.h>

int main() {
	int N = 0, K = 0, students[2][7] = { NULL }, count = 0, A = 0, B = 0, sum = 0;
	scanf("%d %d\n", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%d %d\n", &A, &B);
		students[A][B]++;
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 7; j++) {
			count = 0;
			if (students[i][j] > K) {
				count = students[i][j] / K;
				if (students[i][j] % K != 0) {
					count++;
				}
			}
			else if (students[i][j] > 0)
				count++;
			sum += count;
		}
	}
	printf("%d", sum);
	return 0;
}

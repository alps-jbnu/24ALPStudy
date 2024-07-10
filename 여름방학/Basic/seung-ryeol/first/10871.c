#include <stdio.h>
int main(void)
{
	int N, X;
	scanf("%d %d", &N, &X);
	int a[10000];
	for (int b = 0; b < N; b++) {
		scanf("%d", &a[b]);
		if (a[b] < X) {
			printf("%d ", a[b]);
		}
	}
	return 0;
}

#include <stdio.h>

int main() {
	int N = 0, b = 0, v = 0;
	int a[205] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &b);
		a[b + 100]++;
	}

	scanf("%d", &v);
	printf("%d", a[v + 100]);
	return 0;
}

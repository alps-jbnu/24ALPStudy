#include<stdio.h>

int main() {
	int n = 0, a[2000001] = { NULL }, x = 0, y = 0, sum = 0, num = 0;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		if (i < n - 1) {
			scanf("%d ", &num);
		}
		else
			scanf("%d\n", &num);
		a[num]++;
	}
	scanf("%d", &x);

	for (int i = 0; i < 2000001; i++) {
		if (a[i] == 1) {
			y = x - i;
			if (y > 0) {
				if (a[y] == 1) {
					sum++;
				}
			}
		}
	}
	sum = sum / 2;
	printf("%d", sum);
	return 0;
}

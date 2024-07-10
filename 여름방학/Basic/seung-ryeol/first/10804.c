#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int fir = 0;
	int sec = 0;
	int x = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &fir, &sec);
		int y = sec;
		for (int i = fir; i < sec; i++) {
			if (y < i) {
				break;
			}
			x = arr[i-1];
			arr[i-1] = arr[y-1];
			arr[y-1] = x;
			y--;
		}
	}

	for (int a = 0; a < 20; a++) {
		printf("%d ", arr[a]);
	}

	return 0;
}

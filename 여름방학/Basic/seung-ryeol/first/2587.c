#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 

void bubble_sort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int x[6];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &x[i]);
		sum = sum + x[i];
	}
	bubble_sort(x, 5);

	printf("%d\n", sum/5);
	printf("%d", x[2]);
	return 0;
}

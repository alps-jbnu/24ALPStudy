#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2) {
		return 1;
	}
	else if (num1 < num2) {
		return -1;
	}
	else {
		return 0;
	}
}

int main(void)
{
	int sum1 = 0;
	int	sum2 = 0;

	int arr[9] = { 0, };
	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum1 = sum1 + arr[i];
	}

	qsort(arr, size, sizeof(int), compare);

	for (int i = 0; i < 9; i++){
		for (int j = i + 1; j < 9; j++){
			sum2 = sum1;                        
			sum2 = sum2 - arr[i] - arr[j];   
			if (sum2 == 100){
				for (int k = 0; k < 9; k++){
					if (k != i && k != j){
						printf("%d\n", arr[k]);
					}
				}
				return 0;
			}
		}
	}
	return 0;
}

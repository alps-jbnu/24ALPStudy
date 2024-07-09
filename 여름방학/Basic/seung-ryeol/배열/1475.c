#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char arr[1000000] = { "", };
	int num[9] = { 0 , };
	char fir = '0';
	char nine = '9';
	int x = -1;
	
	scanf("%s", &arr);
	
	for (int j = 0; j < 9; j++) {
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == fir) {
				num[fir - 48]++;
			}
		}
		fir++;
	}
	
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == nine) {
			num[6]++;
		}
	}
	
	if (num[6] % 2 != 0) {
		num[6]++;
	}
	
	num[6] = num[6] / 2;

	for (int i = 0; i < 9; i++) {
		if (x < num[i]) {
			x = num[i];
		}
	}
	
	printf("%d", x);
	
	return 0;
}

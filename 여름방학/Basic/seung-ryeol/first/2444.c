#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main(void)
{
	int a;
	
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < a; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = 0; k < (a - i) * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

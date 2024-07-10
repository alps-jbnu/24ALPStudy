#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main(void)
{
	int a;
	
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int k = 0; k < a - i - 1; k++) {
			printf("  ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i < a; i++) {
		for (int j = 0; j < a - i; j++) {
			printf("*");
		}
		for (int k = 0; k < i; k++) {
			printf("  ");
		}
		for (int j = 0; j < a - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

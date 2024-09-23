#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	for (int i = a; i > 0; i--) {
		for (int k = a - i; k > 0; k--) {
			printf(" ");
		}
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

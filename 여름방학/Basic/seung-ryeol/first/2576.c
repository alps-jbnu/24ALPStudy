#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main(void)
{
	int a;
	int min = 101;
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &a);
		if (a % 2 != 0) {
			sum = sum + a;
			if (a < min) {
				min = a;
			}
		}
		
	}
	if(min != 101){
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	else {
		printf("%d", -1);
	}
	return 0;
}

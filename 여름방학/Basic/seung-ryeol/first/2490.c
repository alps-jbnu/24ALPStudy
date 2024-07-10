#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main(void)
{
	int yut[4] = {0 };
	int sum=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &yut[j]);
			sum = sum + yut[j];
		}

		if (sum == 0) { printf("D\n"); }
		else if (sum == 1) { printf("C\n"); }
		else if (sum == 2) { printf("B\n"); }
		else if (sum == 3) { printf("A\n"); }
		else { printf("E\n"); }
		sum = 0;
	}

	
	return 0;
}

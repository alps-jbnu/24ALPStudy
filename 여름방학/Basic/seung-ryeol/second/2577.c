#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
		int a, b, c, x;
		scanf("%d %d %d", &a, &b, &c);
		int N[10] = { 0 };
		x = a * b * c;
		int s = x;
		while (s > 0)
		{
			if (s % 10 == 0) { N[0] = N[0] + 1; }
			else if (s % 10 == 1) { N[1] = N[1] + 1; }
			else if (s % 10 == 2) { N[2] = N[2] + 1; }
			else if (s % 10 == 3) { N[3] = N[3] + 1; }
			else if (s % 10 == 4) { N[4] = N[4] + 1; }
			else if (s % 10 == 5) { N[5] = N[5] + 1; }
			else if (s % 10 == 6) { N[6] = N[6] + 1; }
			else if (s % 10 == 7) { N[7] = N[7] + 1; }
			else if (s % 10 == 8) { N[8] = N[8] + 1; }
			else { N[9] = N[9] + 1; }
			s /= 10;
		}
		for (int i = 0; i < 10; i++) {
			printf("%d\n", N[i]);
		}
		
	return 0;
}

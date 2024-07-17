#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int k, line = 1;

	scanf("%d", &k);
	for(; line != k+1; line++)
	{
		for (int i = k; i != 0; i-- )
		{
			if (i > line)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
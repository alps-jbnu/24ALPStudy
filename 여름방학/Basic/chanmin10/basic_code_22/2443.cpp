#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int k, line = 1;

	scanf("%d", &k);
	for(; line != k+1; line++)
	{
		for (int i = k*2-(line*2-1), n = line-1; i != 0;)
		{
			if (n != 0)
			{
				printf(" ");
				n--;
			}
			else
			{
				printf("*");
				i--;
			}
		}
		printf("\n");
	}
	return 0;
}
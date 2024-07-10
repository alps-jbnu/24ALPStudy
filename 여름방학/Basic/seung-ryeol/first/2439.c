#include <stdio.h>
int main(void)
{
	int H;
	scanf("%d", &H);
	int B;
	int S;
	for (B = 1; B <= H; B++) 
	{for (S = H - B; S > 0; S--) 
		{printf(" ");}
		for (S = 0; S < B; S++)
		{printf("*");}
		printf("\n");}
	return 0;
}

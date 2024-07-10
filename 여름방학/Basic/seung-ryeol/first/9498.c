#include <stdio.h>
int main(void)
{
	int x;
	scanf("%d", &x);
	if (100 >= x && x >= 90)
	{
		printf("A");
	}
	else if (89 >= x && x >= 80)
	{
		printf("B");
	}
	else if (79 >= x && x >= 70)
	{
		printf("C");
	}
	else if (69 >= x && x >= 60)
	{
		printf("D");
	}
	else if (59 >= x && x >= 0)
    {
		printf("F");
    }
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n + i; j++)
            {
                if (j < n - i) printf(" ");
                else printf("*");
            }
        printf("\n");
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 1; j <= n * 2 - 2 - i; j++)
            {
                if (j < 2 + i) printf(" ");
                else printf("*");
            }
        printf("\n");
    }
}
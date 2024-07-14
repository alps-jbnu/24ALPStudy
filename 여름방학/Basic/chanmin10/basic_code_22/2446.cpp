#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int k;
    scanf("%d", &k);

    int i, j;
    for(i = 0; i < k-1; i++)
    {
        for(j = 0; j < i; j++)
            printf(" ");
        for(j = 0; j < 2 * (k - i) - 1; j++)
            printf("*");
        printf("\n");
    } 
    
    for(i = 0; i < k; i++)
    {
        for(j = 0; j < k - 1 - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
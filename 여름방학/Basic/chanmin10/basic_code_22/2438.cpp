#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main(void)
{
    int N, i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 1 + i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
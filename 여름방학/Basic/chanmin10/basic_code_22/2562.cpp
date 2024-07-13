#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int number[9], max = 1, n;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &number[i]);
        if (max < number[i])
        {
            max = number[i];
            n = i + 1;
        }
    }
    printf("%d \n%d", max, n);
    return 0;
}
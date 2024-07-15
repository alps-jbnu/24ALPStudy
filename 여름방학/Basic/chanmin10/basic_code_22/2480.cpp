#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n[3], max = 0, k = 1, same;
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = i + 1; j < 3; j++)
        {
            if(n[i] == n[j])
            {
                k++;
                same = n[i];
                n[i] = -1;
            }
        }
    }
    if(k == 1)
    {
            for(int i = 0; i < 3; i++)
            {
                if(max < n[i])
                    max = n[i];
            }
            printf("%d", max * 100);
    }
    else
    {
        printf("%.0f", pow(10, k + 1) + same * pow(10, k));
    }
    return 0;
} 
#include <stdio.h>

int main()
{
    int n;
    int m = 1;
    int solution;
    scanf("%d", &n);
    
    if(n == 1)
    {
        solution = 1;
    }
    else
    {
        solution = 2;
        while(1)
        {
            if(n == 2)
                break;
            else
            {
                if(n % 2 == 0)
                {
                    n /= 2;
                    m *= 2;
                    solution += m;
                }
                else
                {
                    n = (n + 1)/2;
                    m *= 2;
                }
            }
        }
    }
    printf("%d", solution);
}

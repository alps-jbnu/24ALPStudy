#include <stdio.h>

int main(void)
{
    int i, j, arr[4], cnt;
    for(i = 0; i < 3; i++)
    {
        cnt = 0;
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[j]) cnt++;
        }
        if(cnt == 3) printf("A\n");
        else if(cnt == 2) printf("B\n");
        else if(cnt == 1) printf("C\n");
        else if(cnt == 0) printf("D\n");
        else printf("E\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i,x,n,arr[10000];
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        
    for (i=0;i<n;i++)
    {
        if(arr[i]<x)
            printf("%d ",arr[i]);
    }
    return 0;
}

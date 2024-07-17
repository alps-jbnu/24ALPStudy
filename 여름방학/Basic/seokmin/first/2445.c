#include <stdio.h>
int main()
{
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j>=0;j--)
            printf("*");
        //8 6 4 2 0
        for(k=(2*n-2)-2*i;k>0;k--)
            printf(" ");
        for(l=i;l>=0;l--)
            printf("*");
        printf("\n");
    }
    for (i=0;i<n-1;i++)
    {
        for(j=(n-1)-i;j>0;j--)
            printf("*");
        //2 4 6 8
        for(k=2+2*i;k>0;k--)
            printf(" ");
        for(l=(n-1)-i;l>0;l--)
            printf("*");
        printf("\n");
        
    }
    
}

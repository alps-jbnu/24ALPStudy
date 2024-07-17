#include <stdio.h>
int main()
{
    int max=0,i,n,count=0,ans;
    for (i=0;i<9;i++)
    {
        scanf("%d",&n);
        count++;
        if (max<n){
            max=n;
            ans=count;
        }
       
    }
    printf("%d\n%d",max,ans);
}

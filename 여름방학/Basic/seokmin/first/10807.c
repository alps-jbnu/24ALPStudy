#include <stdio.h>
int main()
{
    int n,i,key,arr[100]={0},count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&key);
    
    for(i=0;i<n;i++)
    {
        if (arr[i]==key)
            count++;
    }
    printf("%d",count);
    return 0;
}

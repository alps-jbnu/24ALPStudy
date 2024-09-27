#include <stdio.h>
int main()
{
    int arr[3];
    int i,j,tmp;
    for(i=0;i<3;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<3;i++)
        for(j=3;i<j;j--)
            if (arr[i]>arr[j])
            {
                tmp=arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
            }
    for(i=0;i<3;i++)
        printf("%d ",arr[i]);
    return 0;
}

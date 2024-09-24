#include <stdio.h>
int main()
{
    int a,b,temp,lar,arrtemp[20],arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for (int i=0;i<10;i++){
        scanf("%d %d",&a,&b);
        lar=b-a+1;
        a=a-1;
        b=b-1;
        for(int j=0;j<lar;j++){
            arrtemp[a]=arr[a];
            a++;
        }
        a=a-lar;
        for(int k=0;k<lar;k++){
            arr[a]=arrtemp[b];
            a++;
            b--;
        }
    }
    for(int i=0;i<20;i++)
        printf("%d ",arr[i]);
    
}

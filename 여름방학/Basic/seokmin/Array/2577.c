#include <stdio.h>
int main()
{
    int num1,num2,num3,arr[10]={0},abc,s,i;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    abc=num1*num2*num3;
    
    for(i=0;abc>0;i++){
        s=abc%10;
        abc=abc/10;
        arr[s]+=1;
    } 
    
    for (i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}

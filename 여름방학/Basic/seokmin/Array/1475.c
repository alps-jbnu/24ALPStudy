#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,arr[10]={0},num6,max=0;
    char num[7];
    scanf("%s",&num);
    
    for(int i=0;i<strlen(num);i++){
        arr[num[i]-'0']++;
    }
    num6=ceil((arr[6]+arr[9])/2.0);
    arr[6]=num6;
    
    for(int i=0;i<9;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("%d",max);
    
    
}

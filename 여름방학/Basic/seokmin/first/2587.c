#include <stdio.h>
int main()
{
    int arr[6]={0,0,0,0,0,101},sum=0,sw;
    
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    
    for(int j=0;j<10000;j++){
        for(int i=0;i<5;i++){
            if(arr[i]>arr[i+1]){
                sw=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=sw;
        }
    }
    }
    
    printf("%d\n%d",sum/5,arr[2]);
}

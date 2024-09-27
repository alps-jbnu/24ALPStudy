#include <stdio.h>
int main()
{
    unsigned long long num1,num2,ans1,i;
    
    scanf("%lld %lld",&num1,&num2);
    
    if (num1<num2){
        ans1=num2-num1-1;
        printf("%lld\n",ans1);
        for (i = num1+ 1; i < num2; i++)
			   printf("%lld ", i);
	}
    
    if(num2<num1){
       ans1=num1-num2-1;
       printf("%lld\n",ans1);
        for (i = num2+ 1; i < num1; i++)
			   printf("%lld ", i);
	}
       
    
    if(num1==num2){
        printf("%d",0);
        
    }
}

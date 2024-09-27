#include <stdio.h>
int main()
{
    int y=0,m=0,n,num;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        y+=10*(num/30+1);
        m+=15*(num/60+1);
    }
    
    if (y < m) printf("Y %d", y);
	else if (y == m) printf("Y M %d", y);
	else printf("M %d", m);
    
    return 0;
}

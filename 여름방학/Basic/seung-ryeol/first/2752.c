#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c && b > c) { printf("%d %d %d", c,b,a); }// a>b>c
    else if (a > b && a > c && b < c) { printf("%d %d %d",b,c,a); }//a>c>b
    else if (a < b && a > c && b > c) { printf("%d %d %d",c,a,b); }//b>a>c
    else if (a < b && a < c && b > c) { printf("%d %d %d",a,c,b); }//b>c>a
    else if (a > b && a < c && b < c) { printf("%d %d %d",b,a,c); }//c>a>b
    else if (a < b && a < c && b < c) { printf("%d %d %d",a,b,c); }//c>b>a
       
    return 0;
}

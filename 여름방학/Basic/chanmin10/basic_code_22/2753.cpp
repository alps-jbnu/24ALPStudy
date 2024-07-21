#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main(void)
{
    int n, a;
    scanf("%d",&n);
    a = n%4==0 && (n%100!=0||n%400==0);
    printf("%d", a);
    return 0;
}

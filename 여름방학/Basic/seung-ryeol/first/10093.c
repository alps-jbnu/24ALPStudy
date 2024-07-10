#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	long long a,b;
	scanf("%lld %lld", &a, &b);
	if(b > a){
		printf("%lld\n", b - a - 1);
		for (long long i = a + 1; i <= b - 1; i++) {
			printf("%lld ", i);
		}
	}
	else if (b == a) {
		printf("0");
	}
	else
		printf("%lld\n", a - b - 1);
	for (long long i = b + 1; i <= a - 1; i++) {
		printf("%lld ", i);
	}


	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 

int occur[2000001] = { 0, };
int arr[100001] = { 0, };

int main(void) {
	int n;
	int arr[100001] = { 0, };
	int end;
	int count = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &end);

	for (int i = 0; i < n; i++) {
		if (end - arr[i] > 0 && occur[end - arr[i]]) { 
			count++; 
		}
		occur[arr[i]] = 1;
	}
	printf("%d", count);
	return 0;
}

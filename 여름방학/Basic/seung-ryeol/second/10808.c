#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char arr[101] = { "", };
	int alp[26] = { 0 };
	char a = 'a';
	scanf("%s", &arr);
	for (int j = 0; j < 26; j++) {
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == a) {
				alp[a - 97]++;
			}
		}
		a++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alp[i]);
	}
	return 0;
}

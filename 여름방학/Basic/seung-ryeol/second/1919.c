#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 

int main(void)
{
    char arr1[1001] = { "", };
    char arr2[1001] = { "", };
    
    char a = 'a';

    int cou1[26] = { 0, };
    int cou2[26] = { 0, };

    int count = 0;

    scanf("%s", &arr1);
    scanf("%s", &arr2);

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < strlen(arr1); j++) {
            if (arr1[j] == a) {
                cou1[i]++;
            }
        }
        a++;
    }

    a = 'a';

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < strlen(arr2); j++) {
            if (arr2[j] == a) {
                cou2[i]++;
            }
        }
        a++;
    }

    for (int i = 0; i < 26; i++) {
        if (cou1[i] != cou2[i]) {
            if (cou1[i] > cou2[i]) {
                count = count + cou1[i] - cou2[i];
            }
            else {
                count = count + cou2[i] - cou1[i];
            }
        }
        else {
            
        }
    }
    printf("%d", count);
    return 0;
}

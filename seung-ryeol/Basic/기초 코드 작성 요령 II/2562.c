#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x[100] = { 0, };
    int y = 0;
    int z = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &x[i]);
        if (x[i] > y) {
            y = x[i];
            z = i + 1;
        }
    }
        printf("%d\n", y);
        printf("%d", z);
        return 0;
    
}

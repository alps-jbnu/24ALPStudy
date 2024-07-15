#include <stdio.h>

int main(void) {
    int n, list[100], count[201] = { 0 }, target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
        count[list[i]+100]++;
    }
    scanf("%d", &target);

    printf("%d", count[target+100]);

    return 0;
}

#include <stdio.h>

int main(void) {
	char str[101];
	int alphabet[26] = { 0 };

	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++)
		alphabet[str[i] - 97]++;

	for (int i = 0; i < 26; i++)
		printf("%d ", alphabet[i]);

	return 0;
}

#include<stdio.h>
#include<string.h>
int main() {
	int alphabet[26] = { NULL };
	char word[101] = { NULL };
	scanf("%s", &word, 101);
	for (int i = 0; i < strlen(word); i++) {
		alphabet[word[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
	return 0;
}

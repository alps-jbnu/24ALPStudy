#include<stdio.h>
#include<string.h>

int main() {
	int alphabet1[26] = { NULL }, alphabet2[26] = { NULL }, count = 0;
	char word1[1001] = { NULL }, word2[1001] = { NULL };
	scanf("%s\n", &word1, 1001);
	scanf("%s", &word2, 1001);
	for (int j = 0; j < strlen(word1); j++) {
		alphabet1[word1[j] - 'a']++;
	}
	for (int j = 0; j < strlen(word2); j++) {
		alphabet2[word2[j] - 'a']++;
	}
	for (int j = 0; j < 26; j++) {
		if (alphabet1[j] > alphabet2[j]) {
			count += alphabet1[j] - alphabet2[j];
		}
		else if (alphabet1[j] < alphabet2[j]) {
			count += alphabet2[j] - alphabet1[j];
		}
	}
	printf("%d", count);
	return 0;
}

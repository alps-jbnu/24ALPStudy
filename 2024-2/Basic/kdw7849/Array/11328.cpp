#include<stdio.h>
#include<string.h>

int main() {
	int alphabet1[26] = { NULL }, alphabet2[26]{ NULL }, N = 0, count;
	char word1[1001] = { NULL }, word2[1001] = { NULL };
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++) {
		count = 0;
		scanf("%s ", &word1, 1001);
        scanf("%s\n", &word2, 1001);
		for (int j = 0; j < 26; j++) {
			alphabet1[j] = 0, alphabet2[j] = 0;
		}
		for (int j = 0; j < strlen(word1); j++) {
			alphabet1[word1[j] - 'a']++;
		}
		for (int j = 0; j < strlen(word2); j++) {
			alphabet2[word2[j] - 'a']++;
		}
		for (int j = 0; j < 26; j++) {
			if (alphabet1[j] != alphabet2[j]) {
				count++;
			}
		}
		if (count == 0) {
			printf("Possible\n");
		}
		else
			printf("Impossible\n");
	}
	return 0;
}

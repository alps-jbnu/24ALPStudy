#include <iostream>
using namespace std;

int main(void) {
	string text;
	int a[26] = { 0 };

	cin >> text;

	for (int i = 0; i < 100; i++) {
		if (text[i] < 97 || text[i] > 122)
			break;
		a[text[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}

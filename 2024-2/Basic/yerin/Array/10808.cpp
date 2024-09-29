#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int count[26] = { 0 };
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		count[s[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) cout << count[i] << " ";
	return 0;
}

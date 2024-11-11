#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2;
	cin >> str1 >> str2;
	int used1[26] = { 0 };
	int used2[26] = { 0 };
	for (int i = 0; i < str1.length(); i++) {
		used1[str1[i] - 97]++;
	}
	for (int i = 0; i < str2.length(); i++) {
		used2[str2[i] - 97]++;
	}
	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (used1[i] < used2[i]) count += (used2[i] - used1[i]);
		else if (used1[i] > used2[i]) count += (used1[i] - used2[i]);
	}
	cout << count;
	return 0;
}

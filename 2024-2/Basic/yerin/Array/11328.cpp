#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	string str1, str2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str1 >> str2;
		int used[26] = { 0 };
		for (int j = 0; j < str1.length(); j++) {
			used[str1[j]-97]++;
			used[str2[j]-97]--;
		}
		bool isPossible = true;
		for (int k = 0; k < 26; k++) {
			if (used[k] != 0) {
				isPossible = false;
				break;
			}
		}
		if (isPossible) cout << "Possible" << endl;
		else cout << "Impossible" << endl;
	}
	return 0;
}

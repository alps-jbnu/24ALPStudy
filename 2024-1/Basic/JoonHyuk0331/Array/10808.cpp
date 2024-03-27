#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	for (char ch = 'a'; ch <= 'z'; ch++) {
		int cnt = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ch) {
				cnt++;
			}
		}
		cout << cnt << ' ';
	}
}

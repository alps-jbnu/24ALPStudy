#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string S;
	cin >> S;
	int arr[26] = { 0 };
	for (int i = 0; i < S.size(); i++) {
		arr[S[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

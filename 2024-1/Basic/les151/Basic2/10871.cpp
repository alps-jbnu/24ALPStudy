#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x;
	cin >> n >> x;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num < x) {
			cout << num << " ";
		}
	}
	return 0;
}

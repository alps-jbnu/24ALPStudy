#include <iostream>
using namespace std;

int inNum[100001];
bool num[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x;
	int count = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> inNum[i];
	}

	cin >> x;
	for (int i = 0; i < n; i++) {
		if (x - inNum[i] <= 1000000 && x - inNum[i] > 0 && num[x - inNum[i]]) count++;
		num[inNum[i]] = true;
	}

	cout << count;
	return 0;
}

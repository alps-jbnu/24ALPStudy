#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m = 101;
	int sum = 0;
	int num;
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 == 1) {
			m = min(m, num);
			sum += num;
		}
	}
	if (sum == 0)
		cout << -1;
	else {
		cout << sum << "\n" << m;
	}
	return 0;
}

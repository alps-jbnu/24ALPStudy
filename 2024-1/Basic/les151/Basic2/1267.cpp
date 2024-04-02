#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t, y=0, m=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		y += (t / 30 + 1) * 10;
		m += (t / 60 + 1) * 15;
	}
	if (y == m)
		cout << "Y M " << m;
	else if (y > m)
		cout << "M " << m;
	else
		cout << "Y " << y;
	return 0;
}

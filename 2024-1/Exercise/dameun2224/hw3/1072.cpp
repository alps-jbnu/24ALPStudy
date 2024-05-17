#include <iostream>
using namespace std;

#define MAX 1000000000
#define ll long long

ll x, y, z;
int cnt = 1;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> x >> y;
	z = y * 100 / x;

	if (z >= 99) {
		cout << -1 << '\n';
		return 0;
	}

	int l = 0, r = MAX;
	while (l <= r) {
		int mid = (l + r) / 2;
		int tmp = (y + mid) * 100 / (x + mid);
		if (z < tmp) r = mid - 1;
		else l = mid + 1;
	}
	
	cout << l << '\n';

	return 0;
}

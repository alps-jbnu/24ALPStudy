#include <iostream>
#include <algorithm>

int list[1000001] = {};
int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k;
	std::cin >> n >> k;

	int a, b;
	int m = 0;
	for (int i{ 0 }; i < n; i++) {
		std::cin >> a >> b;
		for (int j{ a }; j < b; j++) {
			list[j]++;
		}
		m = std::max(m, b);
	}

	int s = 0, e = 0, ans = 0;
	while (e <= m) {
		if (ans < k) {
			ans += list[e++];
		}
		else if(ans > k) {
			ans -= list[s++];
		}
		else {
			break;
		}
	}

	if (ans == k) std::cout << s << " " << e << "\n";
	else std::cout << "0 0\n";
}

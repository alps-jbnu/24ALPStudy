#include <iostream>
#include <algorithm>
#include <queue>

int list[1000000] = {};
int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k;
	std::cin >> n >> k;

	for (int i{ 0 }; i < n; i++) {
		std::cin >> list[i];
	}

	std::queue<int> q;
	int cnt = 0;
	int s = 0;
	int ans = 0;
	for (int i{ 0 }; i < n; i++) {
		if (list[i] % 2 == 1) {
			if (q.size() == k) {
				s = q.front()+1;
				q.pop();
				q.push(i);
			}
			else {
				q.push(i);
			}
		}
		ans = std::max(ans, i - s+1);
	}

	if (!q.empty()) std::cout << ans - q.size() << "\n";
	else std::cout << ans << "\n";
}

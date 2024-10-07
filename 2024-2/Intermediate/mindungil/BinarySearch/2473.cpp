#include <iostream>
#include <algorithm>

long long list[5000] = {};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::cin >> n;

	for (int i{ 0 }; i < n; i++) {
		std::cin >> list[i];
	}

	std::sort(list, list + n);
	long long res[3] = {};
	long long ans = 9223372036854775806;

	for (int i{ 0 }; i < n; i++) {
		for (int j{ i+1 }; j < n; j++) {
			long long s = 0, e = n - 1, mid;
			long long k = list[i] + list[j];

			while (s < e) {
				mid = (s + e) / 2;
				if (k + list[mid] < 0) {
					s = mid + 1;
				}
				else {
					e = mid;
				}

				if (i != j && mid != i && mid != j) {
					if (std::abs(list[i] + list[j] + list[mid]) < std::abs(ans)) {
						res[0] = list[i], res[1] = list[j], res[2] = list[mid];
						ans = res[0] + res[1] + res[2];
					}
				}
			}
			if (i != j && e != i && e != j) {
				if (std::abs(list[i] + list[j] + list[e]) < std::abs(ans)) {
					res[0] = list[i], res[1] = list[j], res[2] = list[e];
					ans = res[0] + res[1] + res[2];
				}
			}
		}
	}
	std::sort(res, res + 3);
	
	std::cout << res[0] << " " << res[1] << " " << res[2] << "\n";
}

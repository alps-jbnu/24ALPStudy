#include <iostream>
#include <algorithm>

long long snack[1000000] = {};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int m, n;
	std::cin >> m >> n;

	for (int i{ 0 }; i < n; i++) {
		std::cin >> snack[i];
	}
	std::sort(snack, snack + n);

	//if (n == 1) {
	//	std::cout << snack[0]/m << "\n";
	//	return 0;
	//}

	int res = 0, num = 0;
	int s = 0, e = snack[n-1], mid;

	while (s <= e) {
		mid = (s + e) / 2;
		if (mid == 0) {
			s = 1;
			mid = 1;
		};
		num = 0;
		
		for (int i{ 0 }; i < n; i++) {
			if (mid != 0) {
				num += snack[i] / mid;
			}
		}

		if (num < m) {
			e = mid-1;
		}
		else {
			res = std::max(res, mid);
			s = mid+1;
		}
	}

	std::cout << res << "\n";
}

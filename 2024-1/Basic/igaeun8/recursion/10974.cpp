#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}
	do {
		for (auto k : num) cout << k << " ";
		cout << "\n";
	} while (next_permutation(num.begin(), num.end()));

}

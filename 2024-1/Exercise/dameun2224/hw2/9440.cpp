#include <iostream>
#include <algorithm>
#include <limits.h>
#include <string>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (1) {
		int n;
		cin >> n;
		if (!n) break;

		int zero = 0;
		int arr[15] = {};

		int idx = 0;
		int num;

		for (int i = 0; i < n; i++) {
			cin >> num;
			if (num == 0) zero++;
			else arr[idx++] = num;
		}
		sort(arr, arr + idx);

		bool one = true, two = false;
		string n1 = {};
		string n2 = {};

		int i = 0;
		while (i != idx) {
			if (one) {
				if (n1.length() && zero > 0) { // 첫번째 자리수가 아니고 0이 남아있다면
					n1 += '0';
					zero--;
				}
				else n1 += to_string(arr[i++]);
			}
			else if (two) {
				if (n2.length() && zero > 0) {
					n2 += '0';
					zero--;
				}
				else n2 += to_string(arr[i++]);
			}
			one = !one;
			two = !two;
		}

		while (zero) {
			if (one) {
				n1 += '0';
				zero--;
			}
			else if (two) {
				n2 += '0';
				zero--;
			}
			one = !one;
			two = !two;
		}
		
		cout << stoll(n1) + stoll(n2) << '\n';
	}

	return 0;
}

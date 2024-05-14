#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int arr[7];
int ans[7];
void func(int num) {
	int prev = 0;
	if (num == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (prev != arr[i]) {
				prev = arr[i];
				ans[num] = arr[i];
				func(num + 1);
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	func(0);
	return 0;
}

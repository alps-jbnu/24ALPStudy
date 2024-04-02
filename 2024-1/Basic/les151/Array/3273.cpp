#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x;
	cin >> n;
	int arr[100001] = { 0 };
	bool arr2[2000001] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> x;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (x - arr[i] > 0 && arr2[x - arr[i]])
			ans++;
		arr2[arr[i]] = 1;
	}
	cout << ans;
	return 0;
}

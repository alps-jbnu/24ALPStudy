#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, v;
	cin >> n;
	int arr[101] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> v;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == v)
			ans++;
	}
	cout << ans;
	return 0;
}

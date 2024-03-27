#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, ans=0;
	cin >> N;
	int arr[9] = { 0 };
	do {
		if (N % 10 == 9)
			arr[6]++;
		else
			arr[N % 10]++;
		N /= 10;
	} while (N);
	arr[6] = (arr[6] + 1) / 2;
	for (int i = 0; i < 9; i++) {
		ans = max(ans, arr[i]);
	}
	cout << ans;
	return 0;
}

#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[9] = { 0 };
	int idx, maxVal = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (arr[i] > maxVal) {
			idx = i;
			maxVal = arr[i];
		}
	}
	cout << maxVal << " " << idx + 1;
	return 0;
}

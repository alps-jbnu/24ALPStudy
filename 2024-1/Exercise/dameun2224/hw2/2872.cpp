#include <iostream>
using namespace std;

// 밑에서부터 위로가며 가장 긴 감소하는 부분 수열의 길이 구하기

const int MAX = 300000;

int n;
int arr[MAX + 5];

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	int cnt = 0;
	int curNum = n;
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] == curNum) {
			curNum--;
			cnt++;
		}
	}

	cout << n - cnt << '\n';

	return 0;
}

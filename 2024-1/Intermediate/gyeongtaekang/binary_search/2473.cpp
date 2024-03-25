#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

ll n; // 입력될 요소의 개수
ll a[5004]; // 요소들을 저장할 배열
ll ans[4]; // 결과를 저장할 배열
ll ret = 1e18; 

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n; // 요소의 개수를 입력받음.
	for (int i = 1; i <= n; i++) {
		cin >> a[i]; // 배열 a에 요소들을 입력받음.
	}
	sort(a + 1, a + 1 + n); // 배열 a를 오름차순으로 정렬.

	// 세 개의 요소를 선택하는 모든 조합에 대해 반복
	for (int i = 1; i <= n - 2; i++) {
		ll st = i + 1; // 두 번째 요소의 시작 지점
		ll en = n; // 세 번째 요소의 시작 지점
		while (st < en) {
			ll v = a[i] + a[st] + a[en]; // 현재 조합의 합
			if (abs(v) < ret) { // 현재 조합의 합의 절대값이 현재까지의 최소값보다 작은 경우
				ret = abs(v); // 최소값 업데이트
				ans[1] = a[i]; // 결과 배열에 현재 조합 저장
				ans[2] = a[st];
				ans[3] = a[en];
			}
			if (v < 0) st++; // 합이 0보다 작으면 두 번째 요소를 큰 값으로 이동
			else en--; // 합이 0보다 크면 세 번째 요소를 작은 값으로 이동
		}
	}
	cout << ans[1] << ' ' << ans[2] << ' ' << ans[3];
	return 0;
}

#include<iostream>
#include<stack>
using namespace std;
int main() { // O(n^2) 연산 시 시간초과
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, h;
	cin >> n;
	stack<int> st; // monotone stack을 통해 시간복잡도 O(n)에 해결
	cin >> h;
	st.push(h);
	long long int ans = 0; // int자료형의 최대값을 넘어가므로 long long int 선언
	for (int i = 0; i < n - 1; i++) {
		cin >> h;
		while (!st.empty() && h >= st.top()) // 빌딩의 높이가 같거나 크면 더 이상 옥상을 볼 수 없으므로
			st.pop(); // pop하여 스택을 내림차순으로 유지
		ans += st.size(); // 스택에는 옥상을 볼 수 있는 빌딩만 있으므로 ans+=스택의 size
		st.push(h);
	}
	cout << ans;
	return 0;
}

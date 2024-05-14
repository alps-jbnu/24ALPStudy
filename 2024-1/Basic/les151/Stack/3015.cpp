#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, h;
	cin >> n;
	stack<pair<int, int>> st; // pair의 first에 키 저장 second에 같은 키를 가진 사람의 수 저장
	long long int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> h;
		while (!st.empty() && h > st.top().first) { // 스택에 있는 사람의 키 보다 h가 클 경우
			ans += st.top().second; // h 이후의 사람을 볼 수 없으므로 같은 키를 가진 사람의 수 만큼 ans에 더하고
			st.pop(); // 스택에서 제거
		}
		if (!st.empty()) { // 위 과정 이후 스택이 비어있지 않다면
			if (h == st.top().first) { // 키가 같을 때 
				ans += st.top().second; // second 값만큼 키가 같으므로 ans에 더함 
				if (st.size() > 1) // 키가 같은 사람 앞에 키가 작은 다른 사람이 있으면
					ans++; 
				st.top().second++;
			}
			if (h < st.top().first) {
				ans++;
				st.push({ h, 1 });
			}
		}
		else
			st.push({ h, 1 });
	}
	cout << ans;
	return 0;
}

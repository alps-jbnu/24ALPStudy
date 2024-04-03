#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	stack<int> st;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 0) {
			st.pop();
		}
		else {
			st.push(x);
		}
	}
	int ans = 0;
	while (!st.empty()) {
		ans += st.top();
		st.pop();
	}
	cout << ans;
	return 0;
}

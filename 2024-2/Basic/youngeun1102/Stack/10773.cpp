#include <iostream>
#include <stack>
using namespace std;


int k, ans = 0;
stack<int> s;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> k;
	while (k--) {
		int n;
		cin >> n;
		if (n == 0) s.pop();
		else s.push(n);
	}
	while (!s.empty()) {
		ans += s.top();
		s.pop();
	}
	cout << ans;
}

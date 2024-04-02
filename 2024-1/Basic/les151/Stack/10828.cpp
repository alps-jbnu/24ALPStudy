#include<iostream>
#include<stack>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	stack<int> st;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			st.push(x);
		}
		if (str == "top") {
			if (st.empty())
				cout << -1 << '\n';
			else
				cout << st.top() << "\n";
		}
		if (str == "pop") {
			if (st.empty())
				cout << -1 << "\n";
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		if (str == "size") {
			cout << st.size() << "\n";
		}
		if (str == "empty") {
			if (st.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
	}
	return 0;
}

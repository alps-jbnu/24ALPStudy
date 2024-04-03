#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	queue<int> q;
	int back = 0;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			q.push(x);
			back = x;
		}
		if (str == "pop") {
			if (!q.empty()) {
				cout << q.front() << "\n";
				q.pop();
			}
			else
				cout << -1 << "\n";
		}
		if (str == "size") {
			cout << q.size() << "\n";
		}
		if (str == "empty") {
			cout << q.empty() << "\n";
		}
		if (str == "front") {
			if (!q.empty()) {
				cout << q.front() << "\n";
			}
			else
				cout << -1 << "\n";
		}
		if (str == "back") {
			if (!q.empty())
				cout << back << "\n";
			else
				cout << -1 << "\n";
		}
	}
	return 0;
}

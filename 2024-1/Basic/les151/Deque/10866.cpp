#include<iostream>
#include<deque>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	deque<int> deq;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "push_front") {
			int x;
			cin >> x;
			deq.push_front(x);
		}
		if (str == "push_back") {
			int x;
			cin >> x;
			deq.push_back(x);
		}
		if (str == "pop_front") {
			if (!deq.empty()) {
				cout << deq.front() << "\n";
				deq.pop_front();
			}
			else
				cout << -1 << "\n";
		}
		if (str == "pop_back") {
			if (!deq.empty()) {
				cout << deq.back() << "\n";
				deq.pop_back();
			}
			else
				cout << -1 << "\n";
		}
		if (str == "size")
			cout << deq.size() << "\n";
		if (str == "empty")
			cout << deq.empty() << "\n";
		if (str == "front") {
			if (!deq.empty()) {
				cout << deq.front() << "\n";
			}
			else
				cout << -1 << "\n";
		}
		if (str == "back") {
			if (!deq.empty()) {
				cout << deq.back() << "\n";
			}
			else
				cout << -1 << "\n";
		}
	}
	return 0;
}

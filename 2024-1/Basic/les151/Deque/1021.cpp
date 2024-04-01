#include<iostream>
#include<deque>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	deque<int> deq;
	for (int i = 1; i <= n; i++) {
		deq.push_back(i);
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		int idx;
		for (int j = 0; j < deq.size(); j++) {
			if (x == deq[j]) {
				idx = j;
				break;
			}
		}
		if (deq.size() - idx > idx) {
			while (deq.front() != x) {
				deq.push_back(deq.front());
				deq.pop_front();
				cnt++;
			}
			deq.pop_front();
		}
		else {
			while (deq.back() != x) {
				deq.push_front(deq.back());
				deq.pop_back();
				cnt++;
			}
			deq.pop_back();
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

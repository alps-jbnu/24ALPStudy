#include<iostream>
#include<deque>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	deque<int> deq;
	deq.push_back(n);
	int vis[100001] = { 0 };
	vis[n] = 1;
	while (!deq.empty()) {
		int cur = deq.front();
		deq.pop_front();
		if (cur * 2 <= 100000 && !vis[cur * 2]) {
			vis[cur * 2] = vis[cur];
			deq.push_front(cur * 2);
		}
		for (int i : {cur - 1, cur + 1}) {
			if (i <= 100000 && i >= 0 && !vis[i]) {
				vis[i] = vis[cur] + 1;
				deq.push_back(i);
			}
		}
	}
	cout << vis[k] - 1;
	return 0;
}

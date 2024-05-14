#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	queue<int> q;
	q.push(n);
	int vis[100001] = { 0 };
	vis[n] = 1;
	while (!q.empty()) {
		int cur = q.front();
		if(cur == k){
			cout << vis[cur] - 1;
			return 0;
		}
		q.pop();
		for (auto a : { cur + 1, cur - 1, cur * 2 }) {
			if (a < 0 || a>100000 || vis[a])
				continue;
			q.push(a);
			vis[a] = vis[cur] + 1;
		}
	}
	return 0;
}

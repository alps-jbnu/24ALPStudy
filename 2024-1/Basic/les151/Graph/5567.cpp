#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> vec[501];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	queue<pair<int, int>> q;
	q.push({ 1, 0 });
	bool vis[501] = { 0 };
	vis[1] = 1;
	int ans = 0;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < vec[cur.first].size(); i++) {
			int nx = vec[cur.first][i];
			if (vis[nx] || cur.second > 1)
				continue;
			q.push({ nx, cur.second + 1 });
			vis[nx] = 1;
			ans++;
		}
	}
	cout << ans;
	return 0;
}

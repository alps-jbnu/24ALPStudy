#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> vec[101];
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	bool vis[101] = { 0 };
	queue<int> q;
	q.push(1);
	vis[1] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < vec[cur].size(); i++) {
			int nx = vec[cur][i];
			if (!vis[nx]) {
				q.push(nx);
				vis[nx] = 1;
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (vis[i])
			ans++;
	}
	cout << ans - 1;
	return 0;
}

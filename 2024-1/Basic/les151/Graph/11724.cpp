#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> arr[1001];
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	bool vis[1001] = { 0 };
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (vis[i])
			continue;
		ans++;
		queue<int> q;
		q.push(i);
		vis[i] = 1;
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int j = 0; j < arr[cur].size(); j++) {
				if (vis[arr[cur][j]])
					continue;
				q.push(arr[cur][j]);
				vis[arr[cur][j]] = 1;
			}
		}
	}
	cout << ans;
	return 0;
}

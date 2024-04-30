#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	bool arr[100][100] = { 0 };
	bool arr2[100][100] = { 0 };
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr2[b][a] = 1;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		queue<int> q;
		bool vis[100] = { 0 };
		q.push(i);
		vis[i] = 1;
		int heavy = 0, light = 0;
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int j = 1; j <= n; j++) {
				if (vis[j])
					continue;
				if (arr[cur][j]) {
					light++;
					q.push(j);
					vis[j] = 1;
				}
			}
		}
		if (light > n / 2) {
			ans++;
			continue;
		}
		q.push(i);
		bool vis2[100] = { 0 };
		vis2[i] = 1;
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int j = 1; j <= n; j++) {
				if (vis[j])
					continue;
				if (arr2[cur][j]) {
					heavy++;
					q.push(j);
					vis[j] = 1;
				}
			}
		}
		if (heavy > n / 2)
			ans++;
	}
	cout << ans;
	return 0;
}

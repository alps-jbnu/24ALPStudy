#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, v;
bool vis2[1001] = { 0 };
vector<int> vec[1001];
void dfs(int num) {
	vis2[num] = 1;
	cout << num << " ";
	for (int i = 0; i < vec[num].size(); i++) {
		int nx = vec[num][i];
		if (!vis2[nx])
			dfs(nx);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> v;
	bool vis1[1001] = { 0 };
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
		sort(vec[i].begin(), vec[i].end());
	dfs(v);
	cout << "\n";
	queue<int> q;
	q.push(v);
	vis1[v] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (int i = 0; i < vec[cur].size(); i++) {
			int nx = vec[cur][i];
			if (!vis1[nx]) {
				q.push(nx);
				vis1[nx] = 1;
			}
		}
	}
	return 0;
}

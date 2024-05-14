#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> vec[20001];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	queue<pair<int, int>> q;
	q.push({ 1, 0 });
	bool vis[20001] = { 0 };
	vis[1] = 1;
	int ans[20001] = { 0 };
	int num = 0;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < vec[cur.first].size(); i++) {
			int nx = vec[cur.first][i];
			if (vis[nx])
				continue;
			vis[nx] = 1;
			q.push({ nx, cur.second + 1 });
			ans[nx] = cur.second + 1;
			num = max(num, cur.second + 1);
		}
	}
	int cnt = 0;
	int number;
	for (int i = n; i >= 1; i--) {
		if (ans[i] == num) {
			cnt++;
			number = i;
		}
	}
	cout << number << " " << num << " " << cnt;
	return 0;
}

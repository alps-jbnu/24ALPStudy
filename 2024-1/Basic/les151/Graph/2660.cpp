#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	bool arr[51][51] = { 0 };
	while (true) {
		int a, b;
		cin >> a >> b;
		if (a == -1 && b == -1)
			break;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	if (n == 0) {
		cout << "0 0";
		return 0;
	}
	int cnt[51] = { 0 };
	for (int i = 1; i <= n; i++) {
		queue<pair<int, int>> q;
		q.push({ i, cnt[i] });
		bool vis[51] = { 0 };
		vis[i] = 1;
		while (!q.empty()) {
			auto cur = q.front();
			q.pop();
			cnt[i] = cur.second;
			for (int j = 1; j <= n; j++) {
				if (vis[j] || !arr[cur.first][j])
					continue;
				vis[j] = 1;
				q.push({ j, cnt[i] + 1 });
			}
		}
	}
	int ans = 51;
	for (int i = 1; i <= n; i++) {
		ans = min(ans, cnt[i]);
	}
	cout << ans << " ";
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		if (cnt[i] == ans)
			v.push_back(i);
	}
	cout << v.size() << "\n";
	for (auto k : v)
		cout << k << " ";
	return 0;
}

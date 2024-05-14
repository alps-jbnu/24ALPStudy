#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int v, e;
		cin >> v >> e;
		vector<int> vec[20001];
		for (int i = 0; i < e; i++) {
			int a, b;
			cin >> a >> b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}
		queue<int> q;
		bool vis[20001] = { 0 };
		bool jud[20001] = { 0 };
		for (int i = 1; i <= v; i++) {
			if (!vis[i]) {
				q.push(i);
				while (!q.empty()) {
					int cur = q.front();
					q.pop();
					for (int j = 0; j < vec[cur].size(); j++) {
						int nx = vec[cur][j];
						if (vis[nx])
							continue;
						q.push(nx);
						vis[nx] = 1;
						jud[nx] = jud[cur] ? 0 : 1;
					}
				}
			}
		}
		bool pos = true;
		for (int i = 1; i <= v; i++) {
			for (int j = 0; j < vec[i].size(); j++) {
				if (jud[i] == jud[vec[i][j]]) {
					pos = false;
					break;
				}
			}
			if (!pos)
				break;
		}
		if (pos)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}

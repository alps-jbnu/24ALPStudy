#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	cin >> n >> m;
	string board[1001];
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	if (n == 1 && m == 1) {
		cout << 1;
		return 0;
	}
	queue<pair<pair<int, int>, int>> q;
	q.push({{ 0, 0 }, 0});
	int vis[1001][1001][2] = { 0 };
	vis[0][0][0] = 1;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first.first + dx[dir];
			int ny = cur.first.second + dy[dir];
			if (nx == n - 1 && ny == m - 1) {
				cout << vis[cur.first.first][cur.first.second][cur.second] + 1;
				return 0;
			}
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)
				continue;
			if (board[nx][ny] == '1' && cur.second == 0) {
				if (vis[nx][ny][1])
					continue;
				q.push({ { nx, ny }, 1 });
				vis[nx][ny][1] = vis[cur.first.first][cur.first.second][0] + 1;
			}
			if (board[nx][ny] == '0') {
				if (vis[nx][ny][cur.second])
					continue;
				q.push({ { nx, ny }, cur.second });
				vis[nx][ny][cur.second] = vis[cur.first.first][cur.first.second][cur.second] + 1;
			}
		}
	}
	cout << -1;
	return 0;
}

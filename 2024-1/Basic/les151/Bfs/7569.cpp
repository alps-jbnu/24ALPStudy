#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n, h;
	cin >> m >> n >> h;
	int dx[6] = { 1, 0, -1, 0, 0, 0 };
	int dy[6] = { 0, 1, 0, -1, 0, 0 };
	int dz[6] = { 0, 0, 0, 0, 1, -1 };
	int board[101][101][101] = { 0 };
	int vis[101][101][101] = { 0 };
	queue<pair<pair<int, int>, int>> q;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> board[j][k][i];
				if (board[j][k][i] == 1) {
					q.push({ { j, k }, i});
					vis[j][k][i] = 1;
				}
			}
		}
	}
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 6; dir++) {
			int nx = cur.first.first + dx[dir];
			int ny = cur.first.second + dy[dir];
			int nz = cur.second + dz[dir];
			if (nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h)
				continue;
			if (vis[nx][ny][nz] || board[nx][ny][nz] == -1)
				continue;
			q.push({ {nx, ny}, nz });
			vis[nx][ny][nz] = vis[cur.first.first][cur.first.second][cur.second] + 1;
		}
	}
	int ans = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (board[j][k][i] != -1 && vis[j][k][i] == 0) {
					cout << -1;
					return 0;
				}
				ans = max(ans, vis[j][k][i]);
			}
		}
	}
	cout << ans - 1;
	return 0;
}

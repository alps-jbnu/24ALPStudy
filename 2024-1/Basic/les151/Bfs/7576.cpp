#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	queue<pair<int, int>> q;
	int board[1001][1001] = { 0 };
	int vis[1001][1001] = { 0 };
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) {
				q.push({ i, j });
				vis[i][j] = 1;
			}
		}
	}
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= m || ny >= n || vis[nx][ny] || board[nx][ny] == -1)
				continue;
			q.push({ nx, ny });
			vis[nx][ny] = vis[cur.first][cur.second] + 1;
		}
	}
	int maxValue = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!vis[i][j] && board[i][j] != -1) {
				cout << -1;
				return 0;
			}
			maxValue = max(maxValue, vis[i][j]);
		}
	}
	cout << maxValue - 1;
	return 0;
}

#include<iostream>
#include<queue>
using namespace std;
int n, m;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int board[301][301] = { 0 };
void func() {
	bool vis[301][301] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] != 0) {
				vis[i][j] = 1;
				int cnt = 0;
				for (int dir = 0; dir < 4; dir++) {
					int nx = i + dx[dir];
					int ny = j + dy[dir];
					if (nx < 0 || ny < 0 || nx >= n || ny >= m || vis[nx][ny] || board[nx][ny])
						continue;
					cnt++;
				}
				board[i][j] = max(board[i][j] - cnt, 0);
			}
		}
	}
}
bool connected() {
	queue<pair<int, int>> q;
	bool vis[301][301] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j]) {
				vis[i][j] = 1;
				if (q.empty()) {
					q.push({ i, j });
					vis[i][j] = 0;
				}
			}
		}
	}
	if (q.empty())
		return false;
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m || !vis[nx][ny])
				continue;
			q.push({ nx, ny });
			vis[nx][ny] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j])
				return false;
		}
	}
	return true;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	int ans = 0;
	do {
		func();
		ans++;
	} while (connected());
	bool empty = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j])
				empty = false;
		}
	}
	if (empty)
		cout << 0;
	else
		cout << ans;
	return 0;
}

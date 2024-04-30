#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, m, n, k;
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	cin >> T;
	while (T--) {
		cin >> m >> n >> k;
		bool board[51][51] = { 0 };
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}
		bool vis[51][51] = { 0 };
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == 1 && !vis[i][j]) {
					cnt++;
					queue<pair<int, int>>q;
					q.push({ i, j });
					vis[i][j] = 1;
					while (!q.empty()) {
						auto cur = q.front();
						q.pop();
						for (int dir = 0; dir < 4; dir++) {
							int nx = cur.first + dx[dir];
							int ny = cur.second + dy[dir];
							if (nx < 0 || ny < 0 || nx >= n || ny >= m || vis[nx][ny] || board[nx][ny] == 0)
								continue;
							q.push({ nx, ny });
							vis[nx][ny] = vis[cur.first][cur.second] + 1;
						}
					}
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}

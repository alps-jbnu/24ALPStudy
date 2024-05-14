#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	bool board[501][501];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	bool vis[501][501] = { 0 };
	int cnt = 0, maxSize = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 1 && !vis[i][j]) {
				vis[i][j] = 1;
				cnt++;
				int tmpSize = 1;
				queue<pair<int, int>> q;
				q.push({ i, j });
				while (!q.empty()) {
					auto cur = q.front();
					q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || ny < 0 || nx >= n || ny >= m || vis[nx][ny] || !board[nx][ny])
							continue;
						vis[nx][ny] = 1;
						tmpSize++;
						q.push({ nx, ny });
					}
				}
				maxSize = max(maxSize, tmpSize);
			}
		}
	}
	cout << cnt << "\n" << maxSize;
	return 0;
}

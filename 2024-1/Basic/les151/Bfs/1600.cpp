#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k, w, h;
	cin >> k >> w >> h;
	int dx[12] = { 1, 0, -1, 0, 2, -2, 1, -1, 1, -1, 2, -2 };
	int dy[12] = { 0, 1, 0, -1, 1, 1, 2, 2, -2, -2, -1, -1 };
	bool board[201][201] = { 0 };
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> board[i][j];
		}
	}
	int vis[201][201][31] = { 0 };
	queue<pair<pair<int, int>, int>> q;
	q.push({ {0, 0}, 0 });
	vis[0][0][0] = 1;
	while (!q.empty()) {
		auto cur = q.front();
		if (cur.first.first == h - 1 && cur.first.second == w - 1) {
			cout << vis[cur.first.first][cur.first.second][cur.second] - 1;
			return 0;
		}
		q.pop();
		for (int dir = 0; dir < 12; dir++) {
			int nx = cur.first.first + dx[dir];
			int ny = cur.first.second + dy[dir];
			int nz = cur.second + (dir >= 4 ? 1 : 0);
			if (nx < 0 || ny<0 || nx >= h || ny >= w || nz>k || board[nx][ny] == 1 || vis[nx][ny][nz])
				continue;
			vis[nx][ny][nz] = vis[cur.first.first][cur.first.second][cur.second] + 1;
			q.push({ { nx, ny }, nz });
		}
	}
	cout << -1;
	return 0;
}

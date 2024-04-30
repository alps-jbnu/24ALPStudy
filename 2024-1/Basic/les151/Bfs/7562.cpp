#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	int dx[8] = { 2, 2, 1, 1, -1, -1, -2, -2 };
	int dy[8] = { 1, -1, 2, -2, 2, -2, 1, -1 };
	while (T--) {
		int l, x1, y1, x2, y2;
		cin >> l >> x1 >> y1 >> x2 >> y2;
		queue<pair<int, int>> q;
		q.push({ x1, y1 });
		int vis[301][301] = { 0 };
		vis[x1][y1] = 1;
		while (!q.empty()) {
			auto cur = q.front();
			q.pop();
			for (int dir = 0; dir < 8; dir++) {
				int nx = cur.first + dx[dir];
				int ny = cur.second + dy[dir];
				if (nx < 0 || ny < 0 || nx >= l || ny >= l || vis[nx][ny])
					continue;
				q.push({ nx, ny });
				vis[nx][ny] = vis[cur.first][cur.second] + 1;
			}
		}
		cout << vis[x2][y2] - 1 << "\n";
	}
	return 0;
}

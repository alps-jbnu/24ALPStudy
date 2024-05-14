#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	string board[101];
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	queue<pair<int, int>> q;
	q.push({ 0, 0 });
	int vis[101][101] = { 0 };
	vis[0][0] = 1;
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx == n - 1 && ny == m - 1) {
				cout << vis[cur.first][cur.second] + 1;
				return 0;
			}
			if (nx < 0 || ny < 0 || nx >= n || ny >= m || board[nx][ny] == '0' || vis[nx][ny])
				continue;
			q.push({ nx, ny });
			vis[nx][ny] = vis[cur.first][cur.second] + 1;
		}
	}
	return 0;
}

#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	string board[101];
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	bool vis1[101][101] = { 0 };
	bool vis2[101][101] = { 0 };
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!vis1[i][j]) {
				queue<pair<int, int>>q;
				q.push({ i, j });
				vis1[i][j] = 1;
				cnt1++;
				while (!q.empty()) {
					auto cur = q.front();
					q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || ny < 0 || nx >= n || ny >= n || board[nx][ny] != board[i][j] || vis1[nx][ny])
							continue;
						q.push({ nx, ny });
						vis1[nx][ny] = 1;
					}
				}
			}
			if (!vis2[i][j]) {
				queue<pair<int, int>> q;
				q.push({ i, j });
				vis2[i][j] = 1;
				cnt2++;
				while (!q.empty()) {
					auto cur = q.front();
					q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || ny < 0 || nx >= n || ny >= n || vis2[nx][ny])
							continue;
						if (board[i][j] == 'B' && board[nx][ny] != 'B' || board[i][j] != 'B' && board[nx][ny] == 'B')
							continue;
						q.push({ nx, ny });
						vis2[nx][ny] = 1;
					}
				}
			}
		}
	}
	cout << cnt1 << " " << cnt2;
	return 0;
}

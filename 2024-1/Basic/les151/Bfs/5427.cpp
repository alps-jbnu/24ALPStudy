#include<iostream>
#include<queue>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	cin >> T;
	while (T--) {
		int w, h;
		cin >> w >> h;
		queue<pair<int, int>> q1;
		queue<pair<int, int>> q2;
		int vis1[1001][1001] = { 0 };
		int vis2[1001][1001] = { 0 };
		string str;
		char board[1001][1001];
		for (int i = 0; i < h; i++) {
			cin >> str;
			for (int j = 0; j < w; j++) {
				board[i][j] = str[j];
				if (board[i][j] == '@') {
					q1.push({ i, j });
					vis1[i][j] = 1;
				}
				if (board[i][j] == '*') {
					q2.push({ i, j });
					vis2[i][j] = 1;
				}
			}
		}
		while (!q2.empty()) {
			auto cur = q2.front();
			q2.pop();
			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.first + dx[dir];
				int ny = cur.second + dy[dir];
				if (nx < 0 || ny < 0 || nx >= h || ny >= w || vis2[nx][ny] || board[nx][ny] == '#')
					continue;
				q2.push({ nx, ny });
				vis2[nx][ny] = vis2[cur.first][cur.second] + 1;
			}
		}
		bool pos = false;
		while (!q1.empty()) {
			auto cur = q1.front();
			q1.pop();
			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.first + dx[dir];
				int ny = cur.second + dy[dir];
				if (nx < 0 || ny < 0 || nx >= h || ny >= w) {
					cout << vis1[cur.first][cur.second] << "\n";
					pos = true;
					break;
				}
				if (vis1[nx][ny] || board[nx][ny] == '#')
					continue;
				if (vis2[nx][ny] && vis1[cur.first][cur.second] + 1 >= vis2[nx][ny])
					continue;
				q1.push({ nx, ny });
				vis1[nx][ny] = vis1[cur.first][cur.second] + 1;
			}
			if (pos)
				break;
		}
		if (!pos)
			cout << "IMPOSSIBLE\n";
	}
}

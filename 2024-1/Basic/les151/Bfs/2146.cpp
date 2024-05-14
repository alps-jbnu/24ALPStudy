#include<iostream>
#include<queue>
using namespace std;
int n;
int num = 2;
int arr[101][101] = { 0 };
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
bool vis[101][101] = { 0 };
int ans = 100000;
void func() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == num) {
				for (int k = 0; k < n; k++) {
					for (int l = 0; l < n; l++) {
						if (arr[k][l] != 0 && arr[k][l] != num)
							ans = min(ans, abs(i - k) + abs(j - l) - 1);
					}
				}
			}
		}
	}
};
void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	vis[x][y] = 1;
	arr[x][y] = num;
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n)
				continue;
			if (vis[nx][ny] || arr[nx][ny] != 1)
				continue;
			vis[nx][ny] = 1;
			arr[nx][ny] = num;
			q.push({ nx, ny });
		}
	}
};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] != 0 && !vis[i][j]) {
				bfs(i, j);
				func();
				num++;
			}
		}
	}
	cout << ans;
	return 0;
}

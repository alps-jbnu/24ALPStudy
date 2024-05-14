#include<iostream>
#include<queue>
using namespace std;
char board[5][5];
int ans = 0;
pair<int, int> arr[7];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
bool connected() {
	bool vis[5][5] = { 0 };
	for (int i = 0; i < 7; i++) {
		vis[arr[i].first][arr[i].second] = 1;
	}
	queue<pair<int, int>> q;
	q.push(arr[0]);
	vis[arr[0].first][arr[0].second] = 0;
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5)
				continue;
			if (!vis[nx][ny])
				continue;
			vis[nx][ny] = 0;
			q.push({ nx, ny });
		}
	}
	bool pos = true;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (vis[i][j] == 1) {
				pos = false;
				break;
			}
		}
	}
	return pos;
}
void func(int x, int y, int num, int cnt) {
	if (num == 7) {
		if (cnt >= 4) {
			if (connected()) {
				ans++;
			}
		}
		return;
	}
	for (int i = x; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i * 5 + j > x * 5 + y) {
				arr[num] = { i, j };
				func(i, j, num + 1, board[i][j] == 'S' ? cnt + 1 : cnt);
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	for (int i = 0; i < 5; i++) {
		cin >> str;
		for (int j = 0; j < 5; j++) {
			board[i][j] = str[j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[0] = { i, j };
			func(i, j, 1, board[i][j] == 'S' ? 1 : 0);
		}
	}
	cout << ans;
	return 0;
}

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
using namespace std;

int r, c, k, ans;
char map[10][10];
int vis[10][10];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void bt(int x, int y, int l) {
	if (x == 0 && y == c - 1) {
		if (l == k) ans++;
		else return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		int nl = l + 1;
		if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
		if (map[nx][ny] == 'T') continue;
		if (nl > k) continue;
		if (vis[nx][ny]) continue;
		vis[nx][ny] = 1;
		bt(nx, ny, nl);
		vis[nx][ny] = 0;
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    cin >> r >> c >> k;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> map[i][j];
        }
    }

	vis[r - 1][0] = 1;
	bt(r - 1, 0, 1);
	cout << ans << '\n';

	return 0;
}

//#define X first
//#define Y second
//
//int r, c, k, ans;
//char map[10][10];
//int vis[10][10];
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//
//// 시작: r-1, 0
//// 끝: 0, c-1
//
//int main(void) {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> r >> c >> k;
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            cin >> map[i][j];
//            cout << i << ' ' << j << ' ' << map[i][j] << "  ";
//        }
//        cout << '\n';
//    }
//
//    queue<pair<pair<int, int>, int>> q;
//    q.push({ { r - 1,0 },1 });
//    while (!q.empty()) {
//        auto cur = q.front(); q.pop();
//        int cx = cur.X.X;
//        int cy = cur.X.Y;
//        int cl = cur.Y;
//        cout << cx << ' ' << cy << ' ' << cl << '\n';
//        for (int i = 0; i < 4; i++) {
//            int nx = cx + dx[i];
//            int ny = cy + dy[i];
//            int nl = cl + 1;
//            if (nx == 0 && ny == c - 1) {
//                ans++;
//                continue;
//            }
//            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
//            if (vis[nx][ny]) continue;
//            vis[nx][ny] = 1;
//            q.push({ { nx,ny }, nl });
//        }
//    }
//
//    cout << ans << '\n';
//
//    return 0;
//}

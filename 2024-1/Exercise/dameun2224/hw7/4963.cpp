#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <array>
using namespace std;

int w, h;
int map[55][55];
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (1) {
        cin >> h >> w;
        if (!w && !h) break;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                cin >> map[i][j];
            }
        }

        int ans = 0;
        queue<pair<int, int>> q;
        int vis[55][55] = {};
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                if (map[i][j] == 1 && !vis[i][j]) {
                    q.push({ i,j });
                    vis[i][j]++;
                    ans++;
                }
                while (!q.empty()) {
                    int cx = q.front().first;
                    int cy = q.front().second;
                    q.pop();
                    for (int k = 0; k < 8; k++) {
                        int nx = cx + dx[k];
                        int ny = cy + dy[k];
                        if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
                        if (vis[nx][ny]) continue;
                        if (map[nx][ny] == 0) continue;
                        q.push({ nx,ny });
                        vis[nx][ny]++;
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}

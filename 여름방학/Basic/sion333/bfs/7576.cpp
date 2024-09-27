#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[1000][1000];
int dis[1000][1000];  // dis = day
queue<pair<int, int>> Q;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  int mx = 0;

  cin >> m >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j];
      dis[i][j] = -1;
      if (board[i][j] == 1) {
        Q.push({i, j});
        dis[i][j] = 0;
      }
    }
  }
    while (!Q.empty())
    {
      pair<int, int> cur = Q.front();
      Q.pop();
      for (int dir = 0; dir < 4; dir++) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (dis[nx][ny] != -1 || board[nx][ny] == -1) continue;
        dis[nx][ny] = dis[cur.X][cur.Y] + 1;
        mx = max(mx, dis[nx][ny]);
        Q.push({nx, ny});
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (dis[i][j] == -1 && board[i][j] != -1) {
          cout << -1; return 0;
        }}}
  // for (int i = 0; i < n; i++) {
  // for (int j = 0; j < m; j++) {
  //   cout << board[i][j] << ' ';
  // }
  // cout << endl;
  // }

  // for (int i = 0; i < n; i++) {
  // for (int j = 0; j < m; j++) {
  //   cout << dis[i][j] << ' ';
  // }
  // cout << endl;
  // }
  cout << mx;

  return 0;
  }

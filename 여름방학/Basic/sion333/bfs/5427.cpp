#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char board[1003][1003];
int disF[1003][1003];
int disJ[1003][1003];
queue<pair<int, int>> Q;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  bool found;
  int n, m;
  cin >> T;
  while (T--)
  {
    found = 0;
    while (!Q.empty())
    {
      Q.pop();
    }

  cin >> m >> n;
  for (int i = 0; i < n; i++) {
  for (int j = 0;  j < m; j++) {
    cin >> board[i][j];
    disJ[i][j] = -1;
    disF[i][j] = -1;
  }}

    // BFS: Fire
    for (int i = 0; i < n; i++) {
    for (int j = 0;  j < m; j++) {
    if (board[i][j] == '*') {
      Q.push({i, j});
      disF[i][j] = 0;
    }
    }}

    while (!Q.empty())
    { 
      pair<int, int> cur = Q.front();
      Q.pop();
      for (int dir = 0; dir < 4; dir++) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (disF[nx][ny] != -1 || board[nx][ny] == '#') continue;
        
        disF[nx][ny] = disF[cur.X][cur.Y] + 1;
        Q.push({nx, ny});
      }
    }
    
    // BFS: Jihoon
    for (int i = 0; i < n; i++) {
    for (int j = 0;  j < m; j++) {
    if (board[i][j] == '@') {
      Q.push({i, j});
      disJ[i][j] = 0;
    }
    }}
    while (!Q.empty())
    {
      pair<int, int> cur = Q.front(); Q.pop();
      if (cur.X == 0 || cur.X == n-1 || cur.Y == 0 || cur.Y == m-1) {
        // cout << nx << ' ' << ny << endl;
        cout << disJ[cur.X][cur.Y] + 1 << '\n';
        found = 1;
        break;
      }
      for (int dir = 0; dir < 4; dir++) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (disJ[nx][ny] != -1 || board[nx][ny] == '#') continue;
        if (disF[nx][ny] != -1 && disJ[cur.X][cur.Y] >=  disF[nx][ny] - 1) continue;
        disJ[nx][ny] = disJ[cur.X][cur.Y] + 1;
        Q.push({nx, ny});
      }
    }
    if (found == 1) continue;
    else cout << "IMPOSSIBLE" << endl;

  }
  return 0;
  }

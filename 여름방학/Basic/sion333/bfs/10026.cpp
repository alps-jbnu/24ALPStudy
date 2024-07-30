#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  char board[102][102];
  bool vis[102][102];
  int dx[4] = {1, 0, -1, 0};  
  int dy[4] = {0, 1, 0, -1};
  // input
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
  for (int j = 0; j < N; j++) {
  cin >> board[i][j];
  }}
  // BFS_1 (R != G)
  for (int i = 0; i < N; i++) {
  for (int j = 0; j < N; j++) {
    vis[i][j] = 0;
  }}
    
  int cnt = 0;
  pair <int, int> cur;
  queue <pair<int, int>> Q;
  for (int i = 0; i < N; i++) {
  for (int j = 0; j < N; j++) {
    if (!vis[i][j]) {
      cnt++;
      vis[i][j] = 1;
      Q.push({i, j});
      while (!Q.empty())
      {
        cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];
          if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
          if (vis[nx][ny]) continue;
          if (board[nx][ny] != board[i][j])  continue;
          vis[nx][ny] = 1;
          Q.push({nx,ny});
        }
      }
    }
  }}
  cout << cnt << ' ';

  // BFS_2 (R = G)
  // 색약 필터, vis 초기화
  for (int i = 0; i < N; i++) {
  for (int j = 0; j < N; j++) {
    if (board[i][j] == 'G') board[i][j] = 'R';
    vis[i][j] = 0;
  }}

  cnt = 0;
  for (int i = 0; i < N; i++) {
  for (int j = 0; j < N; j++) {
    if (!vis[i][j]) {
      cnt++;
      vis[i][j] = 1;
      Q.push({i, j});
      while (!Q.empty())
      {
        cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];
          if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
          if (vis[nx][ny]) continue;
          if (board[nx][ny] != board[i][j])  continue;
          vis[nx][ny] = 1;
          Q.push({nx,ny});
        }
      }
    }
  }}
  cout << cnt;
  return 0;
}

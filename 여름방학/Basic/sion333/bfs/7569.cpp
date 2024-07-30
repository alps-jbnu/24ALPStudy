#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

struct cor
{
  int x;
  int y;
  int z;
};

int board[102][102][102];
int dis[102][102][102];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ans = 0;
  
  int dx[6] = {1, 0, -1, 0, 0, 0};  
  int dy[6] = {0, 1, 0, -1, 0, 0};
  int dz[6] = {0, 0, 0, 0, 1, -1};
  queue <cor> Q;
  // input
  int N, M, H;
  cin >> M >> N >> H;
  for (int k = 0; k < H; k++) {
  for (int i = 0; i < N; i++) {
  for (int j = 0; j < M; j++) {
    cin >> board[i][j][k];
    dis[i][j][k] = -1;
    if (board[i][j][k] == 1)  {
      Q.push({i, j, k});
      dis[i][j][k] = 0;
    }
  }}}
  cor cur;
  while (!Q.empty())
  {
    cur = Q.front();
    Q.pop();
    for (int dir = 0; dir < 6; dir++) {
      int nx = cur.x + dx[dir];
      int ny = cur.y + dy[dir];
      int nz = cur.z + dz[dir];
      if (nx < 0 || nx > N || ny < 0 || ny > M || nz < 0 || nz > H) continue;
      if (dis[nx][ny][nz] != -1 || board[nx][ny][nz] == -1)  continue;
      dis[nx][ny][nz] = dis[cur.x][cur.y][cur.z] + 1;
      ans = dis[nx][ny][nz];
      Q.push({nx, ny, nz});
    }
  }

  //  //  test
  // cout << "board";
  // for (int k = 0; k < H; k++) {
  // for (int i = 0; i < N; i++) {
  // for (int j = 0; j < M; j++) {
  //   cout << board[i][j][k] << ' ';
  // }
  // cout << endl;
  // }
  // cout << endl;
  // }
  // cout << "dis" << endl;
  // for (int k = 0; k < H; k++) {
  // for (int i = 0; i < N; i++) {
  // for (int j = 0; j < M; j++) {
  //   cout << dis[i][j][k] << ' ';
  // }
  // cout << endl;
  // }
  // cout << endl;
  // }
  for (int k = 0; k < H; k++) {
  for (int i = 0; i < N; i++) {
  for (int j = 0; j < M; j++) {
    if (board[i][j][k] == 0 && dis[i][j][k] == -1){
      cout << -1;
      return 0;
    }

  }}}
  cout << ans;
  
  
  return 0;
}

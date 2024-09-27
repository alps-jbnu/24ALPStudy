#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx1[4] = {1, 0, -1, 0};
int dy1[4] = {0, -1, 0, 1};

int dx2[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy2[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int H, W, K; // nx > k => continue;
bool board[200][200];
int dist[200][200][31];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  
  // input (K, W, H가 주어지고 격자판이 주어진다. 장애물 = 1, W, H = 1 ~ 200, K - 0 ~ 30 인 자연수)
  cin >> K >> W >> H; // z, y, x에 대응
  for (int k = 0; k <= K; k++)
  for (int i = 0; i < H; i++)
  for (int j = 0; j < W; j++)
  dist[i][j][k] = -1;

  for (int i = 0; i < H; i++) {
  for (int j = 0; j < W; j++) {
    cin >> board[i][j];
  }  
  }

  queue<tuple<int, int, int>> Q;
  Q.push({0, 0, 0});
  dist[0][0][0] = 0;
  while (!Q.empty())
  {
    int curX, curY, curZ;
    tie(curX, curY, curZ) = Q.front();
    Q.pop();
    if (curX == H - 1 && curY == W - 1) {
    cout << dist[curX][curY][curZ]<< '\n';
      return 0;
    }
    // BFS1
    int nz = curZ;
    for (int dir = 0; dir < 4; dir++) {
      int nx = curX + dx1[dir];
      int ny = curY + dy1[dir];
      if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
      if (board[nx][ny] == 1 || dist[nx][ny][nz] != -1) continue;
      dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
      Q.push({nx, ny, nz});
    }
    // BFS2
    if (curZ == K) continue;
    nz = curZ + 1;
    for (int dir = 0; dir < 8; dir++) {
      int nx = curX + dx2[dir];
      int ny = curY + dy2[dir];
      if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
      if (board[nx][ny] == 1 || dist[nx][ny][nz] != -1) continue;
      dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
      Q.push({nx, ny, nz});
    }
  }
  cout << -1;
  // cout << "- - - - - -\n";
  // for (int k = 0; k <= K; k++)  {
  //   cout << k << "층 -----\n";
  //   for (int i = 0; i < H; i++) {
  //     for (int j = 0; j < W; j++) {
  //       cout << dist[i][j][k] << ' ';
  //     }
  //     cout << '\n';
  //   }
  // }
   
}

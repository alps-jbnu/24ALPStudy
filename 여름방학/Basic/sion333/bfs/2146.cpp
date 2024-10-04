#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N;
bool board[100][100];
int islandNum[100][100];
int dist[100][100];
int bridge[100][100];
int ans = 99999;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool outRange(int x, int y) {
  if (x < 0 || x >= N || y < 0 || y >= N) return true;
  return false;
}
bool checkSide(int x, int y)  {
  for (int dir = 0; dir < 4; dir++) {
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    if (outRange(nx, ny)) continue;
    if (board[nx][ny] == 0) return true;
  }
  return false;
}
void countBridge(int x, int y)  {
  for (int k = 0; k < N; k++) fill (dist[k], dist[k] + N, -1);
  int curIsland = islandNum[x][y];
  queue<pair<int, int>> Q;
  while (!Q.empty())
  {
    Q.pop();
  }
  
  Q.push({x, y});
  dist[x][y] = 0;
  while (!Q.empty())  {
    auto cur = Q.front(); Q.pop();
    for (int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (outRange(nx, ny)) continue;
      if (dist[nx][ny] != -1 || islandNum[nx][ny] == curIsland) continue;
      if (board[nx][ny] == 1 && islandNum[nx][ny] != curIsland) {
        bridge[x][y] = dist[cur.X][cur.Y];
        ans = min (ans, dist[cur.X][cur.Y]);
        return;
      }
      dist[nx][ny] = dist[cur.X][cur.Y] + 1;
      Q.push({nx,ny});
    }
  }
}

int main()  {
  ios::sync_with_stdio(0);
  cin.tie(0);

  //  input
  cin >> N;
  for (int i = 0; i < N; i++) { 
  for (int j = 0; j < N; j++) {
    cin >> board[i][j];
    }
  }

  //  island num
  int iN = 0; // 섬 번호는 1부터 시작 (섬 발견시++)
  for (int i = 0; i < N; i++) {  
    for (int j = 0; j < N; j++) {
      if (board[i][j] == 0 || islandNum[i][j] != 0) continue;
      iN++;
      queue<pair<int, int>> Q;
      Q.push({i, j});
      islandNum[i][j] = iN;
      while (!Q.empty())
      {
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];
          if (outRange(nx, ny)) continue;
          if (board[nx][ny] == 0 || islandNum[nx][ny] != 0) continue;
          Q.push({nx,ny});
          islandNum[nx][ny] = iN;
        }
      }
    }
  }
  // 필요 다리 개수 찾기
  for (int i = 0; i < N; i++) {  
  for (int j = 0; j < N; j++) {
    if (board[i][j] == 0) continue;
    if (!checkSide(i, j)) continue;
    countBridge(i, j);
    }
  }
  // cout << "---------------\n";
  // for (int i = 0; i < N; i++) {  
  //   for (int j = 0; j < N; j++) {
  //     cout << islandNum[i][j] << ' ';
  //     }
  //     cout << '\n';
  //   }
  cout << ans;
  return 0;
}

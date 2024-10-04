#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N, M;
int **h;
bool **vis;
int **cnt_0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int cnt;

void BFS(int i, int j)  {
  cnt++;
  queue<pair<int, int>> Q;
  Q.push({i, j});
  vis[i][j] = 1;
  while (!Q.empty())
  {
    auto cur = Q.front(); Q.pop();
    for (int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if (h[nx][ny] == 0) continue;
      if (vis[nx][ny] == 1) continue;
      vis[nx][ny] = 1;
      Q.push({nx, ny});
    }
  }
  

}

int cnt0(int i, int j) {
  int tempcnt = 0;
  for (int dir = 0; dir < 4; dir++) {
      int nx = i + dx[dir];
      int ny = j + dy[dir];
      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if (h[nx][ny] == 0) tempcnt++;
  }
  return tempcnt;
}

int main()  {
  int year = 0;
  cin >> N >> M;

  h = (int**)malloc(sizeof(int*) * N);
  vis = (bool**)malloc(sizeof(bool*) * N);
  cnt_0 = (int**)malloc(sizeof(int*) * N);

  for (int i = 0; i < N; i++) {
    h[i] = (int*)malloc(sizeof(int) * M);
    vis[i] = (bool*)malloc(sizeof(bool) * M);
    cnt_0[i] = (int*)malloc(sizeof(int) * M);
  }

  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
        cin >> h[i][j];
  while (true)
  {
    // init
    cnt = 0;
    bool changed = 0;
    for (int i = 0; i < N; i++)
      for (int j = 0; j < M; j++)
        vis[i][j] = 0;
    
    // count
    for (int i = 0; i < N; i++)
      for (int j = 0; j < M; j++)
        if (h[i][j] != 0 && vis[i][j] != 1)
          BFS(i, j);

    // cout << year << "년 -- \n";
    // for (int i = 0; i < N; i++) {
    //   for (int j = 0; j < M; j++) {
    //     cout << h[i][j] << ' ';
    //   }
    //   cout << endl;
    // }
    // cout << cnt << endl;
    if (cnt == 0) {year = 0; break;}
    if (cnt >= 2) break;
  
    // melt
    for (int i = 0; i < N; i++)
      for (int j = 0; j < M; j++)
        if (h[i][j] != 0)
          cnt_0[i][j] = cnt0(i, j);


    for (int i = 0; i < N; i++)   {
      for (int j = 0; j < M; j++) {
        if (h[i][j] != 0 && cnt_0[i][j] != 0) {
          h[i][j] = max(h[i][j] - cnt_0[i][j], 0);
          changed = 1;
        }
      }
    }
    if (!changed) break;
    year++;
  }
  cout << year;
  
  for (int i = 0; i < N; i++) {
    free(h[i]);
    free(vis[i]);
    free(cnt_0[i]);
  }
  free(h);
  free(vis);
  free(cnt_0);

  return 0;
}

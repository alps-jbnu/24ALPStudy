#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis [502][502];
queue<pair<int, int>> Q;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, m;
  int mx = 0;
  int cnt = 0;

  cin >> n >> m;
  // input
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> board[i][j];
  // 그림 찾기
  for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
    if (board[i][j] == 0 || vis[i][j] == 1)  continue;
    // 그림 발견, BFS 실행
    cnt++;
    while (!Q.empty())  Q.pop();  // Q 초기화
    vis[i][j] = 1;
    Q.push({i,j});
    int area = 1; // 넓이 초기화
    while (!Q.empty())
    {
      pair<int, int> cur = Q.front();
      Q.pop();
      for (int dir = 0; dir < 4; dir++) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (vis[nx][ny] == 1 || board[nx][ny] != 1) continue;
        vis[nx][ny] = 1;
        Q.push({nx, ny});
        area++;
      }
    }
    mx = max(mx, area);
  }
  }
  cout << cnt << '\n';
  cout << mx;

  return 0;
}

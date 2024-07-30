#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[8] = {2, 2, -1, 1, -2, -2, -1, 1};
int dy[8] = {1, -1, -2, -2, -1, 1, 2, 2};
int dis[300][300];

int main(void){
  ios::sync_with_stdio(0);
  // cin.tie(0);

  int T, size;
  pair<int ,int> now, pur, cur;
  
  cin >> T;
  while (T--)
  {
  queue <pair<int, int>> Q;
  cin >> size >> now.X >> now.Y >> pur.X >> pur.Y;
  for (int i = 0; i < size; i++)
  for (int j = 0; j < size; j++)
  dis[i][j] = -1;

  dis[now.X][now.Y] = 0;
  Q.push(now);
  while (!Q.empty())
  {
    cur =  Q.front();
    Q.pop();
    if (cur.X == pur.X && cur.Y == pur.Y) {
      cout << dis[cur.X][cur.Y] << '\n';
      break;
    }
    for (int dir = 0; dir < 8; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (nx < 0 || nx > size || ny < 0 || ny > size) continue;
      if (dis[nx][ny] != -1)  continue;
      Q.push({nx, ny});    
      dis[nx][ny] = dis[cur.X][cur.Y] + 1;
    }
  }
  
  }
  
  return 0;
}

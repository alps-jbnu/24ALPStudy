#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int board[50][50];
  int dx[4] = {1, 0, -1, 0};  
  int dy[4] = {0, 1, 0, -1};

  int T;
  cin >> T;

  while (T--)
  {
    // reset
    queue<pair<int, int>> Q;
    for (int i = 0; i < 50; i++)
      fill(board[i], board[i] + 50, 0);
    // input
    int N, M, K;
    cin >> M >> N >> K;
    while (K--)
    {
      int X, Y;
      cin >> X >> Y;
      board[Y][X] = 1;  // 원래 배열이랑 XY가 반대
    }
    // // test
    // for (int i = 0; i < N; i++) {
    //   for (int j = 0 ; j < M; j++)
    //     cout << board[i][j];
    //   cout << endl;
    // }
    // BFS
    int cnt = 0;
    for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (board[i][j] == 1) {
        cnt++;
        Q.push({i, j});
        board[i][j] = -1;
        while (!Q.empty())
        {
          pair<int, int> cur = Q.front();
          Q.pop();
          for (int i = 0; i < 4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M)  continue;
            if (board[nx][ny] != 1) continue;
            board[nx][ny] = -1;
            Q.push({nx, ny});
          }
        }
      }
    }
    }
  cout << cnt << endl;    
  }
    
  return 0;
  }

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N, M;
char board[1002][1002];
int dist[1002][1002][2]; // 현재 부순 벽의 수를 저장하기 위해 3차원으로 함

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

queue <tuple<int, int, int>> Q;

int main()  {
  cin >> N >> M;
  for (int i = 0 ; i < N; i++)  {
    for(int j = 0; j < M; j++) {
      cin >> board[i][j];
      dist[i][j][0] = dist[i][j][1] = -1;
  }}

  Q.push({0,0,0});
  dist[0][0][0] = 1;

  while (!Q.empty())
  {
    int curX, curY, curB;
    tie(curX, curY, curB) = Q.front();  Q.pop();
    if (curX == N-1 && curY == M-1) {
      cout << dist[curX][curY][curB];
      return 0;
    }
    for (int dir = 0; dir < 4; dir++){
      int nx = curX + dx[dir]; 
      int ny = curY + dy[dir]; 
    
      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      
      // 길인 경우
      if (board[nx][ny] == '0' && dist[nx][ny][curB] == -1)  {
        dist[nx][ny][curB] = dist[curX][curY][curB] + 1;
        Q.push({nx, ny, curB});
      }
      
      // 벽이 있는 경우
      if (board[nx][ny] == '1' && curB == 0 && dist[nx][ny][1] == -1) {
        dist[nx][ny][1] = dist[curX][curY][curB] + 1;
        Q.push({nx, ny, 1});        
      }
    }
  }

  cout << -1;
  return 0;
}

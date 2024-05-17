#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
int board[502][502];
bool vis[502][502];
int n = 7, m = 10;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }

    }
    int mx = 0; // 그림의 최댓값
    int num = 0; // 그림의 수
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 || vis[i][j]) continue; // 해당 칸이 색칠이 안된 부분 (0) 이거나 이미 방문했을 경우 넘어감
            num++; // 그림의 수 1 증가
            queue<pair<int, int>> Q;
            vis[i][j] = 1; //(i,j)로 BFS 실행을 위한 준비
            Q.push({i, j});
            int area = 0;
            while (!Q.empty()) {
                area++;
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸 살펴보는 부분
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir]; //nx,ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 벗어남
                    if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 그림이 아닐 경우
                    vis[nx][ny] = 1; //방문을 명시하고
                    Q.push({nx, ny});
                }
            }
            mx = max(mx, area); // area 가 mx 보다 클 경우, mx 에 area 를 대입, max 는 STL에 정의된 함수 ( 큰 수를 비교한다 )
        }
    }
    cout << num << "\n" << mx;
}


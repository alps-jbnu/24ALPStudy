#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int maze[1000][1000][2];

int BFS(int N, int M) // BFS 탐색을 상하좌우로 할 때 N* M 안에서 탐색하기 위해 N, M을 매개변수로 받는다
{
    queue<pair<int, pair<int, int>>> q;
    q.push({ 0, { 0, 0 } });
    while (!q.empty())
    {
        // queue 인자로 broken(벽 부쉈는지 아닌지), x좌표, y좌표 선언
        int broken = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;
        // 방문 -> queue에서 삭제
        q.pop();
        // 탐색 중 (N,M)에 도달 -> 함수 종료
        if (x == N - 1 && y == M - 1)
            return maze[N - 1][M - 1][broken] + 1;
        
        // 상하좌우 탐색. N*M범위에서 벗어나면 continue
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;
            // 탐색한 부분이 1이라면 통과 불가능. broken이 0이면 통과.
            if (maze[nx][ny][0] == 1)
            {
                if (!broken)
                {
                    maze[nx][ny][broken + 1] = maze[x][y][broken] + 1;
                    q.push({ 1, { nx, ny } });
                }
            }
            else if (maze[nx][ny][0] == 0)
            {
                // broken이 1이고 maze[nx][ny][broken]이 1이상 -> 이미 탐색한 경로이므로 continue
                if (broken == 1 && maze[nx][ny][broken])
                    continue;
                maze[nx][ny][broken] = maze[x][y][broken] + 1;
                q.push({ broken, { nx, ny } });
            }
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    // 1. N,M 입력받는다.
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            char tmp;
            cin >> tmp;
            maze[i][j][0] = tmp - '0'; // 2. maze라는 이름의 삼차원 배열 선언. [][][0]-> 입력값을 받고 벽을 부수기 전 최단 거리를 센다, [][][1]-> 벽을 부순 경우 최단거리를 센다.
        }
    }
    cout << BFS(N, M);
    return 0;
}

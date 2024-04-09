#include <iostream>

#include <queue>

using namespace std;

const int MAX = 100001;
bool visited[MAX];

int bfs(int N, int K)
{
    queue<pair<int, int>> q;
    q.push({N, 0});
    visited[N] = true;

    while (!q.empty())
    {
        int now = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (now == K) //목적지 도달 시 break
            return cnt;

        //세 가지 경우의 수
        if (now + 1 < MAX && !visited[now + 1])
        {
            q.push({now + 1, cnt + 1});
            visited[now + 1] = true;
        }

        if (now - 1 >= 0 && !visited[now - 1])
        {
            q.push({now - 1, cnt + 1});
            visited[now - 1] = true;
        }

        if (now * 2 < MAX && !visited[now * 2])
        {
            q.push({now * 2, cnt + 1});
            visited[now * 2] = true;
        }
    }
}


int main(void)
{
    int N, K;

    cin >> N >> K;
    cout << bfs(N, K) << "\n";

    return 0;
}

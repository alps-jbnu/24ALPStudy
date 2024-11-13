#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> adj[20002]; // 인접 리스트
int dis[20002]; // 거리 배열

void bfs(int start) {
    fill(dis, dis + N + 1, -1); // 거리 배열 초기화 (-1은 미방문을 의미)
    queue<int> q;
    q.push(start);
    dis[start] = 0; // 시작점 거리는 0으로 설정

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : adj[cur]) {
            if (dis[next] == -1) { // 방문하지 않은 경우만
                dis[next] = dis[cur] + 1;
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        adj[num1].push_back(num2);
        adj[num2].push_back(num1);
    }

    bfs(1); // 1번 헛간에서 BFS 실행

    int max = 0, num = 20001, count = 0;

    // 가장 멀리 있는 헛간 탐색
    for (int i = 1; i <= N; i++) {
        if (dis[i] > max) {
            max = dis[i];
            num = i;
            count = 1;
        }
        else if (dis[i] == max) {
            if (i < num)
                num = i;
            count++;
        }
    }

    cout << num << ' ' << max << ' ' << count;
}

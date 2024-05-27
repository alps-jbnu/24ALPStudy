#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); // 입출력 속도를 높이기 위해 사용
    cin.tie(0); // cin과 cout의 묶음을 풀어줌으로써 입출력 성능을 향상

    int T;
    cin >> T; // 테스트 케이스의 수를 입력받음

    while (T--) {
        int N, K, W;
        cin >> N >> K; // 건물의 수 N과 건설 순서 규칙의 수 K를 입력받음

        vector<int> buildTime(N + 1); // 각 건물의 건설 시간을 저장할 벡터
        vector<int> indegree(N + 1, 0); // 각 건물의 진입 차수를 저장할 벡터
        vector<int> dp(N + 1, 0); // 각 건물까지의 최소 건설 시간을 저장할 벡터
        vector<vector<int>> adj(N + 1); // 인접 리스트를 저장할 벡터

        for (int i = 1; i <= N; ++i) {
            cin >> buildTime[i]; // 각 건물의 건설 시간을 입력받음
        }

        for (int i = 0; i < K; ++i) {
            int x, y;
            cin >> x >> y; // 건물 x를 지은 후 건물 y를 지을 수 있다는 규칙을 입력받음
            adj[x].push_back(y); // 인접 리스트에 추가
            indegree[y]++; // y 건물의 진입 차수를 증가
        }

        cin >> W; // 목표 건물 W를 입력받음

        queue<int> q;
        for (int i = 1; i <= N; ++i) {
            if (indegree[i] == 0) { // 진입 차수가 0인 건물을 큐에 추가
                q.push(i);
                dp[i] = buildTime[i]; // 해당 건물의 건설 시간을 dp에 초기화
            }
        }

        while (!q.empty()) {
            int cur = q.front();
            q.pop();

            for (int next : adj[cur]) { // 현재 건물에서 갈 수 있는 다음 건물들을 탐색
                dp[next] = max(dp[next], dp[cur] + buildTime[next]); // 다음 건물의 건설 시간을 업데이트
                if (--indegree[next] == 0) { // 다음 건물의 진입 차수를 감소시키고 0이 되면 큐에 추가
                    q.push(next);
                }
            }
        }

        cout << dp[W] << '\n'; // 목표 건물 W의 건설 시간을 출력
    }

    return 0;
}

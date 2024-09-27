#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int>P;

vector<P> adj[1001];
int visited[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int M;
    cin >> N >> M;
    for (int i = 0; i < N - 1; i++) {
        int a, b, d;
        cin >> a >> b >> d;
        adj[a].push_back(P(b, d));
        adj[b].push_back(P(a, d));
    }

    for (int i = 0; i < M; i++) {
        fill(&visited[0], &visited[1001], 0);
        queue<P>q;
        int start, end;
        cin >> start >> end;
        q.push(P(start, 0));
        visited[start] = 1;

        int min = 123456789;

        while (!q.empty()) {
            P curr = q.front(); q.pop();
            if (curr.first == end) {
                min = curr.second;
                break;
            }

            for (auto next : adj[curr.first]) {
                if (visited[next.first] == 0) {
                    visited[next.first] = 1;
                    q.push(P(next.first, curr.second + next.second));
                }
            }
        }
        cout << min << '\n';
    }

}

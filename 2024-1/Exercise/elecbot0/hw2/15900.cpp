// 15900: 나무 탈출
#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> lines[500001];
bool vst[500001];
queue<pair<int, int>> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int a, b; cin >> a >> b;
        lines[a].push_back(b);
        lines[b].push_back(a);
    }
    q.emplace(1, 0);
    vst[1] = true;
    int cal = 0;
    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        int cnt = 0;
        for (int nxt : lines[cur.first]) {
            if (vst[nxt]) continue;
            cnt++;
            q.emplace(nxt, cur.second + 1);
            vst[nxt] = true;
        }
        if (cnt == 0) {
            cal += cur.second;
        }
    }
    if (cal % 2) cout << "Yes";
    else cout << "No";
    return 0;
}

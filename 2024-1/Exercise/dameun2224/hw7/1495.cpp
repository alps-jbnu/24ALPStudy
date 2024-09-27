#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <array>
using namespace std;

int n, s, m;
int v[55];
priority_queue<int> q;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s >> m;
    for (int i = 0; i < n; i++) cin >> v[i];

    q.push(s);
    for (int i = 0; i < n; i++) {
        int vis[1005] = {};
        priority_queue<int> tmp;
        if (q.empty()) {
            cout << -1 << '\n';
            return 0;
        }
        while (!q.empty()) {
            int cur = q.top(); q.pop();
            int a = cur + v[i];
            int b = cur - v[i];
            if (a >= 0 && a <= m && !vis[a]) {
                tmp.push(a);
                vis[a]++;
            }
            if (b >= 0 && b <= m && !vis[b]) {
                tmp.push(b);
                vis[b]++;
            }
        }

        q = tmp;
    }

    if (q.empty()) cout << -1 << '\n';
    else cout << q.top() << '\n';

    return 0;
}

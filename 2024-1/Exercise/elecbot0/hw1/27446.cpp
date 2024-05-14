// 27446: 랩실에서 잘 자요
#include <bits/stdc++.h>

using namespace std;

int N, M;
bool check[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int temp; cin >> temp;
        check[temp] = true;
    }
    int ans = 0;
    int cnt = 0;
    int empty_side = 0;
    for (int i = 1; i <= N; i++) {
        if (!check[i]) {
            cnt++;
            empty_side = 0;
        } else {
            if (cnt > 0) {
                cnt++;
                empty_side++;
                if (empty_side == 3) {
                    ans += 5 + 2 * (cnt - empty_side);
                    cnt = 0;
                    empty_side = 0;
                }
            }
        }
    }
    if (cnt > 0) {
        if (empty_side == 0) {
            ans += 5 + 2 * cnt;
        } else {
            ans += 5 + 2 * (cnt - empty_side);
        }
    }
    cout << ans;
    return 0;
}

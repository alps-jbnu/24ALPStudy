// 2705: 팰린드롬 파티션
#include <bits/stdc++.h>

using namespace std;

int T;
int dp[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    dp[1] = 1; dp[2] = 2; dp[3] = 2;
    for (int i = 4; i <= 1000; i++) {
        if (i % 2) {
            for (int j = i / 2; j >= 1; j--) {
                dp[i] += dp[j];
            }
            dp[i]++;
        } else {
            for (int j = (i - 2) / 2; j >= 1; j--) {
                dp[i] += dp[j];
            }
            dp[i] += dp[i / 2];
            dp[i]++;
        }
    }
    cin >> T;
    while (T--) {
        int q; cin >> q;
        cout << dp[q] << '\n';
    }
    return 0;
}

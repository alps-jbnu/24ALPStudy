// 15992: 1, 2, 3 더하기 7
#include <bits/stdc++.h>

using namespace std;

int T;
long long dp[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    dp[1][1] = 1; dp[2][1] = 1; dp[2][2] = 1; dp[3][1] = 1;
    for (int n = 3; n <= 1000; n++) {
        for (int m = 2; m <= n; m++) {
            dp[n][m] = (dp[n - 1][m - 1] + dp[n - 2][m - 1] + dp[n - 3][m - 1]) % 1000000009;
        }
    }
    cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;
        cout << dp[n][m] << '\n';
    }
    return 0;
}

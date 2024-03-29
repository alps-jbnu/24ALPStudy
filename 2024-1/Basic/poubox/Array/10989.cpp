#include <bits/stdc++.h>

using namespace std;

int n;
int cnt[10001];

// 계수정렬
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int idx;
        cin >> idx;
        cnt[idx]++;
    }

    for (int i = 1; i <= 10000; i++)
        for (int j = 0; j < cnt[i]; j++)
            cout << i << '\n';
    return 0;
}

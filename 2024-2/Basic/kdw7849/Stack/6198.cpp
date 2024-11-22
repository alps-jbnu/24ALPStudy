#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N = 0;
    long long H[80001] = { NULL }, cnt = 0;
    cin >> N;
    stack<long long> S;
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    for (int i = 0; i < N; i++) {
        while (!S.empty() && S.top() <= H[i]) {
            S.pop();
        }
        cnt += S.size();
        S.push(H[i]);
    }
    cout << cnt;
}

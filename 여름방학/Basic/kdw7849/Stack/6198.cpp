#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    long long H[80001] = { NULL }, num;
    cin >> N;
    stack<int> S;

    for (int i = 1; i <= N; i++) {
        cin >> num;
        S.push(num);
        for (int j = 0; j < S.size() - 1; j++) {
            if (H[j + 1] > S.top())
                H[0]++;
            else
                H[j + 1] = 1000000000;
        }
    }
    cout << H[0] / 2;
}

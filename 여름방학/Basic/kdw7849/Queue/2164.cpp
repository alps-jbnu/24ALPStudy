#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    int n, c;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        Q.push(i);
    }
    for (int i = 1; i < n; i++) {
        Q.pop();
        c = Q.front();
        Q.pop();
        Q.push(c);
    }
    cout << Q.front();
}

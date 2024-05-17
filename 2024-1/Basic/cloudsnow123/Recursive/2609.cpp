#include <bits/stdc++.h>

using namespace std;

int gcd(int n, int m) {
    if (m == 0) return n;
    else {
        return gcd(m, n % m);
    }
}

int lcm(int n, int m) {
    return (n * m) / gcd(n, m);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m = 0;
    cin >> n >> m;
    cout << gcd(n, m) << "\n";
    cout << lcm(n, m);
    return 0;
}

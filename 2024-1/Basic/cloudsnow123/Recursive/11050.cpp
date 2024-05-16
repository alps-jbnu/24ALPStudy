#include <bits/stdc++.h>

using namespace std;

int binomial(int n, int k) {
    if (k == 0 || n == k) {
        return 1;
    } else {
        return binomial(n - 1, k) + binomial(n - 1, k - 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k = 0;
    cin >> n >> k;
    cout << binomial(n, k);


    return 0;
}

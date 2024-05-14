#include <bits/stdc++.h>

using namespace std;

void func(int a, int b, int n) {
    if (n == 1) {
        cout << a << " " << b << "\n";
        return;
    }
    func(a, 6 - a - b, n - 1);
    cout << a << " " << b << "\n";
    func(6 - a - b, b, n - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    cout << (1 << k) - 1 << "\n";       // 1<<k 비트 연산자 ex) 3 = 0011, 3<<1 = 0110 = 6 3<<2 = 1100 = 12 ...
    func(1, 3, k);
    return 0;
}

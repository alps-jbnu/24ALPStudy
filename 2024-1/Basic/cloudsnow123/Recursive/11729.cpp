#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, int src, int dst, int via) {
    if (n == 1) {
        cout << src << " " << dst << "\n";
        return;
    }
    hanoi(n - 1, src, via, dst);
    cout << src << " " << dst << "\n";
    hanoi(n - 1, via, dst, src);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";       // 1<<k 비트 연산자 ex) 3 = 0011, 3<<1 = 0110 = 6 3<<2 = 1100 = 12 ...
    hanoi(n, 1, 3, 2);
    return 0;
}

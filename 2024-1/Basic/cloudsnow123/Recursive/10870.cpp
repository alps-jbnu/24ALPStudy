#include <bits/stdc++.h>

using namespace std;

int fibo(int n) {
    if (n >= 2) {
        return fibo(n - 1) + fibo(n - 2);       //Fn = Fn-1 + Fn-2 (n ≥ 2)
    } else if (n == 1) return 1;
    else return 0;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    cin >> n;
    cout << fibo(n);

    return 0;
}

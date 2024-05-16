#include <bits/stdc++.h>

using namespace std;

int fact(int n) {
    if (n > 1)
        return n * fact(n - 1);
    else return 1;
}

int main(void) {

    int N = 0;
    cin >> N;
    cout << fact(N);
    return 0;
}

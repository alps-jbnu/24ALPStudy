#include <bits/stdc++.h>

using namespace std;

int main() {

    queue<int> Q;
    int loop_number;
    cin >> loop_number;

    for (int i = 1; i <= loop_number; i++) {
        Q.push(i);
    }

    while (Q.size() != 1) {
        Q.pop();
        int temp = Q.front();
        Q.push(temp);
        Q.pop();
    }
    cout << Q.front();
    return 0;
}

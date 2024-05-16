#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<int> S;

    while (n--) {
        int number;
        cin >> number;

        if (number == 0) {
            S.pop();
        } else {
            S.push(number);
        }
    }

    int result = 0;

    while (!S.empty()) {
        result += S.top();
        S.pop();
    }

    cout << result;

    return 0;
}

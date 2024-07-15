#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<int> S;

    while (n--) {
        string c;
        cin >> c;
        if (c == "push") {
            int number;
            cin >> number;
            S.push(number);
        } else if (c == "pop") {
            if (S.empty()) {
                cout << -1 << "\n";
            } else {
                cout << S.top() << "\n";
                S.pop();
            }
        } else if (c == "size") {
            cout << S.size() << "\n";
        } else if (c == "empty") {
            cout << (int) S.empty() << "\n";
        } else {
            if (S.empty()) {
                cout << -1 << "\n";
            } else {
                cout << S.top() << "\n";
            }
        }
    }
    return 0;
}

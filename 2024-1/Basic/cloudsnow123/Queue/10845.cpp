#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;

    int loop_number;
    cin >> loop_number;

    while (loop_number--) {
        string command;
        cin >> command;

        if (command == "push") {
            int number;
            cin >> number;
            Q.push(number);
        } else if (command == "pop") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        } else if (command == "size") {
            cout << Q.size() << "\n";
        } else if (command == "empty") {
            cout << Q.empty() << "\n";
        } else if (command == "front") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << Q.front() << "\n";
            }
        } else if (command == "back") {
            if (Q.empty()) {
                cout << -1 << "\n";
            } else {
                cout << Q.back() << "\n";
            }
        }
    }
    return 0;
}

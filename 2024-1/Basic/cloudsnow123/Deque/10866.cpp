#include <bits/stdc++.h>

using namespace std;

int main() {

    deque<int> DQ;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push_back") {
            int val;
            cin >> val;
            DQ.push_back(val);
        } else if (command == "push_front") {
            int val;
            cin >> val;
            DQ.push_front(val);
        } else if (command == "pop_front") {
            if (DQ.empty()) {
                cout << -1 << "\n";
            } else {
                cout << DQ.front() << "\n";
                DQ.pop_front();
            }
        } else if (command == "pop_back") {
            if (DQ.empty()) {
                cout << -1 << "\n";
            } else {
                cout << DQ.back() << "\n";
                DQ.pop_back();
            }
        } else if (command == "size") {
            cout << DQ.size() << "\n";
        } else if (command == "empty") {
            cout << DQ.empty() << "\n";
        } else if (command == "front") {
            if (DQ.empty()) {
                cout << -1 << "\n";
            } else {
                cout << DQ.front() << "\n";
            }
        } else {
            if (DQ.empty()) {
                cout << -1 << "\n";
            } else {
                cout << DQ.back() << "\n";
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    char check = 'F';
    cin >> n;
    while (n--) {
        deque<int> DQ;
        string q;
        cin >> q;
        int s;
        cin >> s;
        cout << '[';
        for (int i = 1; i < s; i++) {
            cin >> num;
            DQ.push_back(num);
            cout << ',';
        }
        cin >> num;
        DQ.push_back(num);
        cout << ']';
        for (auto c : q) {
            if (c == 'R') {
                if (check == 'F')
                    check = 'B';
                else
                    check = 'F';
            }
            else {
                if (check == 'F' && DQ.empty() == 0) {
                    DQ.pop_front();
                }
                else if (check == 'B' && DQ.empty() == 0) {
                    DQ.pop_back();
                }
                else
                    cout << "error";
            }
        }
        if (DQ.size() != 0) {
            cout << '[';
            if (check == 'F') {
                for (int i = 1; i < DQ.size(); i++) {
                    cout << DQ.front();
                    cout << ',';
                    DQ.pop_front();
                }
                cout << DQ.front();
                cout << ']';
            }
            else {
                for (int i = 1; i < DQ.size(); i++) {
                    cout << DQ.back();
                    cout << ',';
                    DQ.pop_back();
                }
                cout << DQ.back();
                cout << ']';
            }
        }

    }
}

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    cin >> n;
    while (n--) {
        bool reverse = false, error = false;
        deque<int> DQ;
        char q[100001] = { NULL };
        cin >> q >> num;
        char s;
        if (num == 0)
            cin >> s;
        for (int i = 0; i < num; i++) {
            int N;
            cin >> s;
            cin >> N;
            DQ.push_back(N);
        }
        cin >> s;

        for (int i = 0; i < strlen(q); i++) {
            if (q[i] == 'R') {
                if (reverse == true)
                    reverse = false;
                else
                    reverse = true;
            }
            else {
                if (DQ.empty()) {
                    cout << "error" << '\n';
                    error = true;
                    break;
                }
                else if (reverse == false)
                    DQ.pop_front();
                else
                    DQ.pop_back();
            }
        }
        if (error)
            continue;
        else {
            cout << '[';
            while (DQ.size()) {
                if (DQ.size() == 1) {
                    cout << DQ.front();
                    DQ.pop_front();
                }
                else if (reverse == false) {
                    cout << DQ.front() << ",";
                    DQ.pop_front();
                }
                else {
                    cout << DQ.back() << ",";
                    DQ.pop_back();
                }
            }
            cout << ']' << '\n';
        }
    }
}

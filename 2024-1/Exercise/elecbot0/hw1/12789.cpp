// 12789: 도키도키 간식드리미
#include <bits/stdc++.h>

using namespace std;

int N, num;
stack<int> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    num = 1;
    while (N--) {
        int temp; cin >> temp;
        if (temp == num) {
            num++;
            while (!s.empty()) {
                if (s.top() != num) {
                    break;
                }
                s.pop();
                num++;
            }
        } else {
            s.push(temp);
        }
    }
    if (s.empty()) cout << "Nice";
    else cout << "Sad";
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second
int n;
deque<pair<int, int>> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        dq.push_back({i, num}); // (풍선 번호, 풍선 안에 있는 숫자)
    }

    while (!dq.empty()) {
        int cur = dq.front().second;
        cout << dq.front().first << ' ';
        dq.pop_front();

        if (cur > 0) { // 현재 인덱스를 pop하고 시작하기 때문에 cur - 1까지만 해줘야 함
            for (int i = 0; i < cur - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for (int i = 0; i < (-1) * cur; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}

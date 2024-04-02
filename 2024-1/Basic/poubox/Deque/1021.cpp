#include <bits/stdc++.h>

using namespace std;


int n, m;
int cnt = 0;
deque<int> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        dq.push_back(i + 1);

    while (m--) {
        int num;
        cin >> num;

        // 왼쪽과 오른쪽 중 어디가 더 가까운지
        int left = 0, right = 0;
        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == num) {
                left = i;
                right = dq.size() - i;
                break;
            }
        }

        if (left <= right) { // 2번
            while (1) {
                if (dq.front() == num) { // 1번
                    dq.pop_front();
                    break;
                }
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        } else { // 3번, right <= left
            while (1) {
                if (dq.front() == num) { // 1번
                    dq.pop_front();
                    break;
                }
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}

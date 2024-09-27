#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <array>
using namespace std;

int t, m;
double xx1, yy1, xx2, yy2, xx3, yy3, r;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t--) {
        cin >> xx1 >> yy1 >> xx2 >> yy2 >> m;
        int cnt = 0;
        while (m--) {
            cin >> xx3 >> yy3 >> r;
            // 도착점, 시작점이 해당 원 안에 있는지 확인하고 그렇다면 cnt에 1을 더하기
            double a1 = sqrt(pow(xx1 - xx3, 2) + pow(yy1 - yy3, 2));
            double a2 = sqrt(pow(xx2 - xx3, 2) + pow(yy2 - yy3, 2));
            //cout << a1 << ' ' << a2 << '\n';
            if (a1 < r && a2 < r) true; // 두 점이 한 원 안에 있다면 cnt를 더하지 않음
            else if (a1 < r) cnt++;
            else if (a2 < r) cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}

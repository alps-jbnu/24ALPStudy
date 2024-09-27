#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
using namespace std;

int t, ans;
double a, b, r1, c, d, r2;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t--) {
        cin >> a >> b >> r1 >> c >> d >> r2;
        double r = sqrt(pow(a - c, 2) + pow(b - d, 2));
        //cout << "r : " << r << '\n';
        if (r == 0 && r1 == r2) ans = -1; // 일치 - 무한
        else if (r == 0 && r1 != r2) ans = 0; // 같은 좌표, 다른 거리 - 없음
        else if (r + r1 < r2 || r + r2 < r1) ans = 0; // 한 원 안에 한 원이 있음 - 없음
        else if (r + r1 == r2 || r + r2 == r1) ans = 1; // 한 원 안에 한 원이 있고 접함 - 1개
        else if (r > r1 + r2) ans = 0;
        else if (r == r1 + r2) ans = 1;
        else if (r < r1 + r2) ans = 2;
        cout << ans << '\n';
    }

    return 0;
}

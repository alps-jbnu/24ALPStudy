#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
using namespace std;

const unsigned long long MAX = 1e12;
const long double MIN = 1e-12;
const long double TOL = 1e-9;

long double x, y, c;
long double a, w;

void bs() {
    long long st = 0;
    long long en = MAX;

    while (st <= en) {
        long long mid = (st + en) / 2;

        // 계산 부분
        a = mid * MIN;
        long double tol = (powl(c / (1 - a), 2) - powl(c / a, 2)) - (powl(x, 2) - powl(y, 2));
        if (abs(tol) <= TOL) {
            w = powl(y, 2) - powl(c / a, 2);
            w = sqrtl(w);
            cout << fixed;
            cout.precision(3);
            cout << w << '\n';
            return;
        }

        if (tol < 0) st = mid + 1;
        else en = mid - 1;
    }

    w = powl(y, 2) - powl(c / a, 2);
    w = sqrtl(w);
    cout << fixed;
    cout.precision(3);
    cout << w << '\n';

    return;
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> x >> y >> c;

    bs();

    return 0;
}

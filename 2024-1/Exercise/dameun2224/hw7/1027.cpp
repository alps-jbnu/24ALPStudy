#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <array>
using namespace std;

int n, ans;
int b[55];
int cnt[55];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++) {
        double g = -1e9;
        for (int j = i + 1; j < n; j++) {
            double ng = (double)(b[j] - b[i]) / (double)(j - i);
            if (ng > g) {
                cnt[i]++;
                cnt[j]++;
                g = ng;
            }
        }
    }

    //for (int i = 0; i < n; i++) {
    //    cout << cnt[i] << ' ';
    //}
    //cout << '\n';

    ans = *max_element(cnt, cnt + n);

    std::cout << ans << '\n';

    return 0;
}

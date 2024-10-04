#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <array>
using namespace std;

/*
* 킬 수 있는 행의 갯수의 최대값
* 같은 패턴의 행을 찾으면 됨
*/

int n, m, k, ans;
string map[55];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }
    cin >> k;

    for (int i = 0; i < n; i++) {
        // 해당 행이 킬 수 있는 행인지 확인
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            if (map[i][j] == '0') cnt++;
        }
        if (k < cnt || k % 2 != cnt % 2) continue;
        // 킬 수 있는 행이라면 같은 패턴의 행의 갯수 세기
        int sum = 0;
        for (int j = i; j < n; j++) {
            if (map[i] == map[j]) sum++;
        }
        ans = max(ans, sum);
    }

    cout << ans << '\n';

    return 0;
}

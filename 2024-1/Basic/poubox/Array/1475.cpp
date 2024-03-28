#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int number[10] = {};
    int n;
    cin >> n;

    while (n > 0) { // 0~9까지 숫자 저장
        number[n % 10]++;
        n /= 10;
    }

    int ans = 1; // 기본 세트 1개
    for (int i = 0; i < 10; i++) {
        // 6과 9를 제외하고 계산, 경우의 수 따로 고려해야 함.
        if (i == 6 || i == 9)
            continue;
        ans = max(ans, number[i]);
    }

    // 6과 9가 많은 경우를 고려
    // +1을 해야 정확한 값이 나올 수 있음
    ans = max(ans, (number[6] + number[9] + 1) / 2);

    cout << ans;

    return 0;

}

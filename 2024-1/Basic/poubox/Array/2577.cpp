#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int num = 0;
int ans[10];

// 몫, 나머지 활용
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;

    num = a * b * c;

    while (num > 0) {
        ans[num % 10]++;
        num = num / 10;
    }

    for (int i = 0; i < 10; i++)
        cout << ans[i] << '\n';

    return 0;
}

// 2872: 우리집엔 도서관이 있어
// 뒤에서부터 높은 거부터 순서대로... 확인....
#include <bits/stdc++.h>

using namespace std;

int N;
int book[300001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> book[i];
    int cur_cnt = N;
    for (int i = N; i >= 1; i--) {
        if (book[i] == cur_cnt) {
            cur_cnt -= 1;
        }
    }
    cout << cur_cnt;
    return 0;
}

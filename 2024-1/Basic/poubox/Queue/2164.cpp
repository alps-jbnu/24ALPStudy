#include <bits/stdc++.h>

using namespace std;

int n;
queue<int> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
        q.push(i);

    while (q.size() != 1) { // 카드가 한 장 남을 때까지 반복
        q.pop(); // 숫자를 버린다.
        q.push(q.front()); // 숫자를 뒤로 보낸다.
        q.pop(); // 중복된 숫자를 없앤다.
    }

    cout << q.front();

}

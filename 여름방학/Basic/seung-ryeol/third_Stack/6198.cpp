#include <bits/stdc++.h>
using namespace std;

stack<int> S;

int N;
long long ans;
long long h;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h;

        while (S.empty() != 1 && S.top() <= h) { // S가 공백이 아니고 S.top이 h보다 클때까지
            S.pop();
        }
        ans = ans + S.size();

        S.push(h);
    }
    cout << ans;
    

    return 0;
}

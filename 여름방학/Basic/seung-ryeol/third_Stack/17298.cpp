#include <bits/stdc++.h>
using namespace std;

stack<int> S;
int arr[1000001];
int ans[1000001];
long long N;

int main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = N - 1; i >= 0; i--) {
        while (S.empty() != 1 && S.top() <= arr[i]) {
            S.pop();
        }
        if (S.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = S.top();
        }
        S.push(arr[i]);
    }
    for (int i = 0; i < N; i++) {
        cout << ans[i]<<" ";
    }
    return 0;
}

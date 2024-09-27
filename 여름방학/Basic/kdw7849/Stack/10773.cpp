#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K;
    int Sum = 0;
    cin >> K;
    stack<int> M;

    while (K--){
        int N;
        cin >> N;
        if (N != 0) {
            M.push(N);
        }
        else
            M.pop();
    }
    while(M.size()) {
        Sum += M.top();
        M.pop();
    }
    cout << Sum;
}

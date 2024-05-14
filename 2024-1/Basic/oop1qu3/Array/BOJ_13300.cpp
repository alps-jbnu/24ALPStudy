#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
    fastio;

    int N, K; cin >> N >> K;
    int stud[2][7] = {};
    int cnt = 0;
    
    for (int i = 0; i < N; i++)
    {
        int S, Y; cin >> S >> Y;
        stud[S][Y]++;
        if (stud[S][Y] % K == 1) cnt++;
    }

    cout << cnt;
}

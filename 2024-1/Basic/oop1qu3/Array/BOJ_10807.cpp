#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() 
{
    fastio;

    int N; cin >> N;
    int freq[201] = {};
    
    for (int i = 0; i < N; i++)
    {
        int k; cin >> k;
        if (k < 0) freq[201 + k]++;
        else freq[k]++;
    }

    int v, ans; cin >> v;
    if (v < 0) ans = freq[201 + v];
    else ans = freq[v];
    
    cout << ans;
}
